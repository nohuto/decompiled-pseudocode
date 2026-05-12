/*
 * XREFs of sub_1400F9964 @ 0x1400F9964
 * Callers:
 *     sub_1400F8C88 @ 0x1400F8C88 (sub_1400F8C88.c)
 * Callees:
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     sub_1400B48DC @ 0x1400B48DC (sub_1400B48DC.c)
 */

__int64 __fastcall sub_1400F9964(const GUID *a1)
{
  unsigned int Data1; // eax
  PWSTR Buffer; // rdx
  struct _UNICODE_STRING v5; // [rsp+A0h] [rbp-18h] BYREF

  Data1 = a1[7].Data1;
  v5 = 0LL;
  if ( (Data1 & 0x200) != 0 )
  {
    RtlStringFromGUID(a1 + 10, &v5);
    Buffer = (PWSTR)&dword_140149108;
    if ( v5.Buffer )
      Buffer = v5.Buffer;
    sub_1400A9114(
      (__int64)a1,
      1,
      4,
      (__int64)L"NVMe namespace clear unresponsive",
      Buffer,
      0,
      (void *)&dword_140149108,
      0);
    sub_1400B48DC((__int64)a1);
    *(_QWORD *)&a1[7].Data1 &= ~0x200uLL;
  }
  return 0LL;
}
