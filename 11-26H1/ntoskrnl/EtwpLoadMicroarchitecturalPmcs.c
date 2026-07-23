/*
 * XREFs of EtwpLoadMicroarchitecturalPmcs @ 0x14082C6B8
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14082C8E4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void EtwpLoadMicroarchitecturalPmcs()
{
  __int64 v0; // rax
  size_t v1; // rsi
  WCHAR *Pool2; // rbx
  int v3; // edi
  NTSTATUS v4; // eax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v10; // [rsp+A4h] [rbp-64h]
  _WORD v11[264]; // [rsp+A8h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  memset_0(KeyInformation, 0, 0x218uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v0 = -1LL;
  do
    ++v0;
  while ( aRegistryMachin_27[v0] );
  v1 = (unsigned int)(2 * v0 + 514);
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 = -1;
      do
      {
        while ( 1 )
        {
          v4 = ZwEnumerateKey(DestinationString[0], ++v3, KeyBasicInformation, KeyInformation, 0x216u, ResultLength);
          if ( v4 < 0 )
            break;
          if ( v10 < 0x1FE )
          {
            v11[(unsigned __int64)v10 >> 1] = 0;
            if ( RtlStringCbPrintfW(
                   Pool2,
                   v1,
                   L"%ws\\%ws",
                   L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
                   v11) >= 0 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], Pool2);
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
              {
                EtwpLoadMicroarchitecturalProfileGroup(KeyHandle);
                ZwClose(KeyHandle);
              }
            }
          }
        }
      }
      while ( v4 == -1073741789 || v4 == -2147483643 );
      ZwClose(DestinationString[0]);
    }
    ExFreePoolWithTag(Pool2, 0x50777445u);
  }
}
