/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x1404B4FE4
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14099A54C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409D60E8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AEA684 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     RtlHashUnicodeString @ 0x1409893C0 (RtlHashUnicodeString.c)
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
