/*
 * XREFs of WheapOpenPolicyRegistryKey @ 0x140C33A68
 * Callers:
 *     WheapSetPolicyValue @ 0x1407B967C (WheapSetPolicyValue.c)
 *     WheapLoadPolicy @ 0x140C33974 (WheapLoadPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     RtlCreateRegistryKey @ 0x140772DD0 (RtlCreateRegistryKey.c)
 *     RtlCheckRegistryKey @ 0x1409B3F90 (RtlCheckRegistryKey.c)
 */

__int64 WheapOpenPolicyRegistryKey()
{
  NTSTATUS RegistryKey; // ebx
  int v1; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  _DWORD Src[10]; // [rsp+88h] [rbp+1Fh] BYREF

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
      Src[3] = 0;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[5] = -2147483549;
      Src[4] = 1280201291;
      Src[6] = 2;
      Src[7] = 8;
      Src[8] = v1;
      Src[9] = RegistryKey;
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
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  RegistryKey = ZwCreateKey(&KeyHandle, 0x211u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( RegistryKey < 0 )
  {
    v1 = 3;
    goto LABEL_8;
  }
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&WheapDispatchPtr.NextDevice,
         (signed __int64)KeyHandle,
         0LL) )
  {
    ZwClose(KeyHandle);
  }
  return (unsigned int)RegistryKey;
}
