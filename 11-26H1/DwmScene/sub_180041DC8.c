/*
 * XREFs of sub_180041DC8 @ 0x180041DC8
 * Callers:
 *     sub_180041FE0 @ 0x180041FE0 (sub_180041FE0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180041DF0 @ 0x180041DF0 (sub_180041DF0.c)
 */

__int64 __fastcall sub_180041DC8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180012C40(v5, a2);
  return sub_180041DF0(v3, v2);
}
