/*
 * XREFs of WheapOpenPolicyRegistryKey @ 0x140CEEA90
 * Callers:
 *     WheapSetPolicyValue @ 0x140850024 (WheapSetPolicyValue.c)
 *     WheapLoadPolicy @ 0x140CEE99C (WheapLoadPolicy.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     RtlCreateRegistryKey @ 0x14080A690 (RtlCreateRegistryKey.c)
 *     RtlCheckRegistryKey @ 0x140A10140 (RtlCheckRegistryKey.c)
 */

__int64 WheapOpenPolicyRegistryKey()
{
  NTSTATUS RegistryKey; // ebx
  int v1; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  _DWORD Src[2]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v7; // [rsp+90h] [rbp+27h]
  int v8; // [rsp+98h] [rbp+2Fh]
  int v9; // [rsp+9Ch] [rbp+33h]
  int v10; // [rsp+A0h] [rbp+37h]
  int v11; // [rsp+A4h] [rbp+3Bh]
  int v12; // [rsp+A8h] [rbp+3Fh]
  NTSTATUS v13; // [rsp+ACh] [rbp+43h]

  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"WHEA\\Policy") < 0 )
  {
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA");
    if ( RegistryKey < 0 )
    {
      v1 = 1;
LABEL_8:
      Src[0] = 1733060695;
      Src[1] = 1;
      v7 = 40LL;
      v9 = -2147483549;
      v8 = 1280201291;
      v10 = 2;
      v11 = 8;
      v12 = v1;
      v13 = RegistryKey;
      WheaLogInternalEvent(Src);
      return (unsigned int)RegistryKey;
    }
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
    if ( RegistryKey < 0 )
    {
      v1 = 2;
      goto LABEL_8;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WHEA\\Policy");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryKey = ZwCreateKey(&KeyHandle, 0x211u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( RegistryKey < 0 )
  {
    v1 = 3;
    goto LABEL_8;
  }
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&CmpContextListLock.WaitBlock[1].Object,
         (signed __int64)KeyHandle,
         0LL) )
  {
    ZwClose(KeyHandle);
  }
  return (unsigned int)RegistryKey;
}
