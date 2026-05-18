/*
 * XREFs of sub_180098148 @ 0x180098148
 * Callers:
 *     sub_18009888C @ 0x18009888C (sub_18009888C.c)
 * Callees:
 *     sub_180097F14 @ 0x180097F14 (sub_180097F14.c)
 */

__int64 __fastcall sub_180098148(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_180097F14(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
