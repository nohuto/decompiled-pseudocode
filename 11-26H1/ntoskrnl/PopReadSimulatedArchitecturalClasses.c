/*
 * XREFs of PopReadSimulatedArchitecturalClasses @ 0x140CD9B7C
 * Callers:
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD9614 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140CD9A24 (PopReadLegacySimulatedArchitecturalClasses.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CDA288 (PopReadSimulatedProcessorDetail.c)
 */

char __fastcall PopReadSimulatedArchitecturalClasses(bool *a1, unsigned int a2)
{
  char LegacySimulatedArchitecturalClasses; // si
  char v5; // r14
  HANDLE v6; // rcx
  ULONG v7; // edi
  ULONG Value; // [rsp+38h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v14[2]; // [rsp+68h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES v15; // [rsp+78h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  __int128 KeyInformation; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+37h] BYREF

  Value = 0;
  v18 = 0LL;
  *(_QWORD *)&v15.Length = 48LL;
  *(_QWORD *)&v15.Attributes = 576LL;
  v14[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups";
  v14[0] = 10748066LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ResultLength = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v15.ObjectName = &String;
  LegacySimulatedArchitecturalClasses = 0;
  String = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v5 = 0;
  KeyInformation = 0LL;
  v15.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_OWORD *)&v15.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v6 = KeyHandle;
    v7 = 0;
    v15.RootDirectory = KeyHandle;
    while ( ZwEnumerateKey(v6, v7, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength) >= 0 )
    {
      String.Buffer = (wchar_t *)&v18;
      String.Length = WORD6(KeyInformation);
      String.MaximumLength = 4;
      if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0
        && Value < 0x20
        && ZwOpenKey(&Handle, 0x20019u, &v15) >= 0 )
      {
        LegacySimulatedArchitecturalClasses = PopReadLegacySimulatedArchitecturalClasses(a1, Value, Handle, a2);
        if ( !LegacySimulatedArchitecturalClasses )
          LegacySimulatedArchitecturalClasses = PopReadSimulatedProcessorDetail(a1, Value, Handle, a2, 1);
      }
      ++v7;
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      v5 |= LegacySimulatedArchitecturalClasses;
      if ( v5 )
      {
        if ( !a1 )
          break;
      }
      v6 = KeyHandle;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
