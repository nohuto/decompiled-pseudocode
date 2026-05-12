/*
 * XREFs of sub_140185470 @ 0x140185470
 * Callers:
 *     sub_1400C225C @ 0x1400C225C (sub_1400C225C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140185470(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = (((unsigned int)*(unsigned __int16 *)(a1[769] + 8) + 31) >> 3) & 0x1FFFFFFC;
  *(_QWORD *)(a1[770] + 48) = sub_1400143E0(64LL, 4 * v2, 1179476306LL, a1[1]);
  v3 = a1[770];
  v4 = *(_QWORD *)(v3 + 48);
  if ( !v4 )
    return 3221225626LL;
  *(_QWORD *)(v3 + 56) = v4 + v2;
  *(_QWORD *)(a1[770] + 64) = *(_QWORD *)(a1[770] + 48) + 2 * v2;
  *(_QWORD *)(a1[770] + 72) = *(_QWORD *)(a1[770] + 48) + 3 * v2;
  return 0LL;
}
