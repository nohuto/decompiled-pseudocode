/*
 * XREFs of IoOpenDriverRegistryKey @ 0x140A110B0
 * Callers:
 *     DifIoOpenDriverRegistryKeyWrapper @ 0x1406611C0 (DifIoOpenDriverRegistryKeyWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     PiGetServiceNameInfo @ 0x140A10FA4 (PiGetServiceNameInfo.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A11858 (IopApplyMutableTagToRegistryKey.c)
 *     PiCreateServiceStateKey @ 0x140A118DC (PiCreateServiceStateKey.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  HANDLE v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // r12
  int v12; // eax
  int ServiceNameInfo; // ebx
  int RegistryValue; // eax
  HANDLE v15; // rax
  int v17; // r14d
  __int64 v18; // rdx
  __int64 *v19; // r9
  HANDLE KeyHandle; // [rsp+48h] [rbp-31h] BYREF
  _DWORD *v21; // [rsp+50h] [rbp-29h]
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  char v25; // [rsp+D8h] [rbp+5Fh] BYREF

  KeyHandle = 0LL;
  v25 = 0;
  v21 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Handle = 0LL;
  v9 = 0LL;
  if ( !a1 )
    goto LABEL_20;
  v10 = *(_QWORD *)(a1 + 48);
  if ( !v10 )
    goto LABEL_20;
  if ( !*(_QWORD *)(v10 + 32) )
    goto LABEL_20;
  if ( !*(_WORD *)(v10 + 24) )
    goto LABEL_20;
  if ( a4 )
    goto LABEL_20;
  v11 = a5;
  if ( !a5 )
    goto LABEL_20;
  v12 = PipOpenServiceEnumKeys(v10 + 24, 131101LL, &Handle, 0LL, 0);
  v9 = Handle;
  ServiceNameInfo = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  RegistryValue = IopGetRegistryValue(Handle);
  ServiceNameInfo = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_20;
  if ( RegistryValue < 0 )
    goto LABEL_21;
  if ( v21[1] != 4 || v21[3] != 4 )
  {
    ServiceNameInfo = -1073741492;
    goto LABEL_21;
  }
  if ( (*(_DWORD *)((char *)v21 + (unsigned int)v21[2]) & 0xB) == 0 )
    goto LABEL_20;
  if ( !a2 )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xFDFDFFE6 | 0x20019;
    if ( (a3 & 0x7FFDFFE6) == 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
      ObjectAttributes.RootDirectory = v9;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ServiceNameInfo = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      if ( ServiceNameInfo < 0 )
        goto LABEL_21;
      goto LABEL_18;
    }
    ServiceNameInfo = -1073741790;
    goto LABEL_21;
  }
  v17 = a2 - 1;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v25);
      if ( ServiceNameInfo < 0 )
        goto LABEL_21;
      LOBYTE(v18) = v25;
      v19 = &PiDriverRegKeySharedStateName;
      if ( v25 )
        v19 = (__int64 *)L"\"$";
      goto LABEL_32;
    }
LABEL_20:
    ServiceNameInfo = -1073741811;
    goto LABEL_21;
  }
  ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v25);
  if ( ServiceNameInfo < 0 )
    goto LABEL_21;
  LOBYTE(v18) = v25;
  v19 = &PiDriverRegKeyPersistentStateName;
  if ( v25 )
    v19 = &PiDriverRegKeyUniquePersistentStateName;
LABEL_32:
  ServiceNameInfo = PiCreateServiceStateKey(&DestinationString, v18, v9, v19, a3, (_BYTE)v17, &KeyHandle);
  if ( ServiceNameInfo >= 0 )
  {
    v15 = KeyHandle;
    if ( !KeyHandle )
      goto LABEL_19;
    IopApplyMutableTagToRegistryKey(KeyHandle);
LABEL_18:
    v15 = KeyHandle;
LABEL_19:
    *v11 = v15;
    KeyHandle = 0LL;
  }
LABEL_21:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)ServiceNameInfo;
}
