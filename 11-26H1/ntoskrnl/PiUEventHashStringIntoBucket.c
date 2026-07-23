/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x1404AE434
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14095AFAC (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409AA6B8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AED174 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     RtlHashUnicodeString @ 0x140A43AE0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(wchar_t *a1)
{
  size_t v1; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF

  HashValue = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = a1;
  if ( a1 )
  {
    v1 = 2 * wcslen(a1);
    if ( v1 >= 0xFFFE )
      LOWORD(v1) = -4;
    String.Length = v1;
    String.MaximumLength = v1 + 2;
  }
  RtlHashUnicodeString(&String, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
