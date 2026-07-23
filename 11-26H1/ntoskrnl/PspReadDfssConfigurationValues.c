/*
 * XREFs of PspReadDfssConfigurationValues @ 0x140617678
 * Callers:
 *     PspDfssConfigurationChangeHandler @ 0x1407F3C90 (PspDfssConfigurationChangeHandler.c)
 *     PspIsDfssEnabled @ 0x1407F3E04 (PspIsDfssEnabled.c)
 * Callees:
 *     ExSetTimerResolution @ 0x14040D0D0 (ExSetTimerResolution.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405FBBA4 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PspReadDfssConfigurationValues()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned __int64 v4; // rbx
  PIO_APC_ROUTINE v5; // r8
  HANDLE v6; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( PspDfssConfigurationKey )
  {
    KeyHandle = PspDfssConfigurationKey;
  }
  else
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes) < 0 )
      return;
  }
  v0 = &PspDfssConfigValues;
  v1 = 5LL;
  do
  {
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      v2 = v0[5];
      if ( **(_DWORD **)v0 < v2 )
        **(_DWORD **)v0 = v2;
      v3 = v0[6];
      if ( **(_DWORD **)v0 > v3 )
        **(_DWORD **)v0 = v3;
    }
    else
    {
      **(_DWORD **)v0 = v0[4];
    }
    v0 += 8;
    --v1;
  }
  while ( v1 );
  if ( PspDfssConfigurationNotify )
  {
    KeUpdateGroupSchedulingConstants(0);
  }
  else
  {
    PspDfssConfigurationNotify = (PIO_APC_ROUTINE)ExAllocatePool2(0x40uLL);
    if ( !PspDfssConfigurationNotify )
    {
      ZwClose(KeyHandle);
      return;
    }
    PspDfssConfigurationKey = KeyHandle;
  }
  v4 = 10000LL * (unsigned int)PsDfssDesiredTimerResolutionMs;
  if ( v4 > 0xFFFFFFFF || (unsigned int)v4 >= KeMaximumIncrement )
    LODWORD(v4) = -1;
  if ( PsDfssActiveTimerResolution100ns != (_DWORD)v4 )
  {
    if ( PsDfssActiveTimerResolution100ns != -1 )
      ExSetTimerResolution(PsDfssActiveTimerResolution100ns, 0);
    if ( (_DWORD)v4 != -1 )
      ExSetTimerResolution(v4, 1u);
    PsDfssActiveTimerResolution100ns = v4;
  }
  v5 = PspDfssConfigurationNotify;
  v6 = PspDfssConfigurationKey;
  *((_QWORD *)PspDfssConfigurationNotify + 2) = PspDfssConfigurationChangeHandler;
  *((_QWORD *)v5 + 3) = 0LL;
  *(_QWORD *)v5 = 0LL;
  if ( ZwNotifyChangeKey(v6, 0LL, v5, (PVOID)1, (PIO_STATUS_BLOCK)v5 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
  {
    ZwClose(PspDfssConfigurationKey);
    PspDfssConfigurationKey = 0LL;
    ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
    PspDfssConfigurationNotify = 0LL;
  }
}
