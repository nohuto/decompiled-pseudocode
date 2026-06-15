/*
 * XREFs of sub_1400300F0 @ 0x1400300F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400300F0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 32);
  return sub_1400B6010(*(_QWORD *)(a1 + 56));
}
