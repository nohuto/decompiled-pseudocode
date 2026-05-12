/*
 * XREFs of sub_14010E978 @ 0x14010E978
 * Callers:
 *     sub_1400F8C88 @ 0x1400F8C88 (sub_1400F8C88.c)
 * Callees:
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     sub_1400B4B00 @ 0x1400B4B00 (sub_1400B4B00.c)
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 */

__int64 __fastcall sub_14010E978(__int64 a1)
{
  int v1; // eax
  void *v2; // rdi
  PWSTR Buffer; // rdx
  struct _UNICODE_STRING v6; // [rsp+A0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 112);
  v2 = *(void **)(a1 + 16);
  v6 = 0LL;
  if ( (v1 & 0x200) == 0 )
  {
    RtlStringFromGUID((const GUID *const)(a1 + 160), &v6);
    Buffer = (PWSTR)&dword_140149108;
    if ( v6.Buffer )
      Buffer = v6.Buffer;
    sub_1400A9114(a1, 1, 4, (__int64)L"NVMe namespace clear unresponsive", Buffer, 0, (void *)&dword_140149108, 0);
    sub_1400B4B00(a1);
    *(_QWORD *)(a1 + 112) |= 0x200uLL;
    sub_140130818(v2);
  }
  return 0LL;
}
