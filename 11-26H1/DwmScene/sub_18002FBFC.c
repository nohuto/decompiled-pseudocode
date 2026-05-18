/*
 * XREFs of sub_18002FBFC @ 0x18002FBFC
 * Callers:
 *     sub_18002F4FC @ 0x18002F4FC (sub_18002F4FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002FBFC(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  *(_QWORD *)a2 = **a4;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  return sub_180031218();
}
