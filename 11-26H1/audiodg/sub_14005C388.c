/*
 * XREFs of sub_14005C388 @ 0x14005C388
 * Callers:
 *     sub_14005C25C @ 0x14005C25C (sub_14005C25C.c)
 *     sub_1400B1DCC @ 0x1400B1DCC (sub_1400B1DCC.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14005C388(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_14004639C(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 16);
  return sub_14005BF10(a1, a2);
}
