/*
 * XREFs of sub_180056D80 @ 0x180056D80
 * Callers:
 *     sub_1800560F4 @ 0x1800560F4 (sub_1800560F4.c)
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_18005873C @ 0x18005873C (sub_18005873C.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 */

__int64 __fastcall sub_180056D80(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_180012C40((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  return v2;
}
