/*
 * XREFs of sub_1800812CC @ 0x1800812CC
 * Callers:
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 * Callees:
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 */

__int64 __fastcall sub_1800812CC(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi

  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  v3 = (_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 8);
  if ( a1 + 144 != a2 + 16 )
  {
    sub_180078020((__int64)v3);
    *v3 = *v2;
    v3[1] = v2[1];
    v3[2] = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 40);
  return sub_180078020((__int64)v2);
}
