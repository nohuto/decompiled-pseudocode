/*
 * XREFs of MiCountSlabContextAvailablePagesForDefrag @ 0x14070ACE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCountSlabContextAvailablePagesForDefrag(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v3 = a2[13];
  v4 = a2[12] + *(_QWORD *)(a2[10] + 16LL);
  if ( v4 > v3 )
    *a3 += v4 - v3;
  return 0LL;
}
