/*
 * XREFs of PopReadSimulatedWpsContainment @ 0x140CDA41C
 * Callers:
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD9614 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CDA288 (PopReadSimulatedProcessorDetail.c)
 */

char __fastcall PopReadSimulatedWpsContainment(__int64 a1, ULONG a2)
{
  char v4; // bl
  HANDLE v5; // rcx
  ULONG v6; // edi
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v14[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v15[2]; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES v17; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  __int128 KeyInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v20; // [rsp+128h] [rbp+28h] BYREF

  v15[0] = 1572886LL;
  *(_QWORD *)&v17.Length = 48LL;
  *(_QWORD *)&v17.Attributes = 576LL;
  v15[1] = L"Containment";
  Value = 0;
  v20 = 0LL;
  v14[0] = 10748066LL;
  v14[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups";
  ResultLength = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v17.ObjectName = (PUNICODE_STRING)v15;
  v4 = 0;
  KeyInformation = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  String = 0LL;
  Handle = 0LL;
  memset(&v16, 0, 44);
  v10 = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17.RootDirectory = 0LL;
  *(_OWORD *)&v17.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v5 = KeyHandle;
    v16.Length = 48;
    v16.RootDirectory = KeyHandle;
    v16.ObjectName = &String;
    v6 = 0;
    *(_OWORD *)&v16.SecurityDescriptor = 0LL;
    v16.Attributes = 576;
    while ( ZwEnumerateKey(v5, v6, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength) >= 0 )
    {
      String.MaximumLength = 4;
      String.Buffer = (wchar_t *)&v20;
      String.Length = WORD6(KeyInformation);
      if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 && Value < 0x20 && ZwOpenKey(&v10, 0x20019u, &v16) >= 0 )
      {
        v17.RootDirectory = v10;
        if ( ZwOpenKey(&Handle, 0x20019u, &v17) >= 0 )
          v4 |= PopReadSimulatedProcessorDetail(a1, Value, Handle, a2, 4);
      }
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      if ( v10 )
      {
        ZwClose(v10);
        v10 = 0LL;
      }
      ++v6;
      if ( v4 )
      {
        if ( !a1 )
          break;
      }
      v5 = KeyHandle;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
