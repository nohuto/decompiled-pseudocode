/*
 * XREFs of sub_140018930 @ 0x140018930
 * Callers:
 *     sub_14001EBFC @ 0x14001EBFC (sub_14001EBFC.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 * Callees:
 *     sub_140018968 @ 0x140018968 (sub_140018968.c)
 */

char __fastcall sub_140018930(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( sub_140018968(a1, *(_QWORD *)(a1 + 176) + 40LL, a3) != -1 )
    return 0;
  *(_DWORD *)(v3 + 24) |= 0x1000000u;
  return 1;
}
