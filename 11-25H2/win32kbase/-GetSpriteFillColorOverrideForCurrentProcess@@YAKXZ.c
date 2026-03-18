/*
 * XREFs of ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x140161E20
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1400EE678 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 GetSpriteFillColorOverrideForCurrentProcess(void)
{
  unsigned int v0; // edi
  char v1; // si
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v5; // rdx
  int v6; // ecx
  WCHAR *v7; // r9
  ULONG64 v8; // rdx
  int v9; // eax
  char *v10; // r8
  char *v11; // rcx
  int v12; // eax
  void *KeyHandle; // [rsp+38h] [rbp-2A0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-298h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-290h] BYREF
  char *v17; // [rsp+58h] [rbp-280h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-278h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-240h] BYREF
  int v20; // [rsp+9Ch] [rbp-23Ch]
  int v21; // [rsp+A0h] [rbp-238h]
  unsigned int v22; // [rsp+A4h] [rbp-234h]
  WCHAR SourceString[264]; // [rsp+B0h] [rbp-228h] BYREF

  v0 = 0;
  v1 = 0;
  RtlStringCchCopyW(
    (char *)SourceString,
    260LL,
    (char *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  DestinationString = 0LL;
  v17 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  KeyHandle = (void *)PsGetProcessPeb(CurrentProcess);
  v5 = *((_QWORD *)KeyHandle + 4) + 96LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v6 = *(_DWORD *)v5;
  LODWORD(KeyHandle) = v6;
  *(_DWORD *)&DestinationString.Length = v6;
  v7 = *(WCHAR **)(v5 + 8);
  DestinationString.Buffer = v7;
  if ( ((unsigned __int8)v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (ULONG64)v7 + (unsigned __int16)v6 + 2;
  if ( v8 <= (unsigned __int64)v7 || v8 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v6 > WORD1(KeyHandle) )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (v6 & 1) != 0 )
  {
LABEL_15:
    LODWORD(KeyHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 386LL);
LABEL_16:
    ExRaiseAccessViolation();
  }
  v9 = (unsigned __int16)v6;
  v10 = (char *)v7 + (unsigned __int16)v6;
  v17 = v10;
  while ( v9 )
  {
    v11 = v10 - 2;
    if ( *((_WORD *)v10 - 1) == 92 )
      break;
    v10 -= 2;
    v17 = v11;
    v9 -= 2;
  }
  v12 = RtlStringCchCatW(SourceString, 260LL, v10);
  ResultLength[1] = v12;
  if ( v12 >= 0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength[0] = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) >= 0
        && v20 == 4
        && v21 == 4 )
      {
        v0 = v22;
        v1 = 1;
      }
      ZwClose(KeyHandle);
    }
  }
  if ( v1 && v0 )
  {
    if ( (v0 & 0xFF000000) != 0 )
      return 0;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v0;
}
