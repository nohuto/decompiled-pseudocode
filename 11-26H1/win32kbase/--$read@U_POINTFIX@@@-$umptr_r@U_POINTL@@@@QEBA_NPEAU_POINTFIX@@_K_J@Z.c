/*
 * XREFs of ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800
 * Callers:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z @ 0x1400C0F40 (-bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C10E0 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C1780 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C193C (-growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x1400C1E68 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     umptr_inpage_warning @ 0x1401F0FC0 (umptr_inpage_warning.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall umptr_r<_POINTL>::read<_POINTFIX>(__int64 a1, void *a2, unsigned __int64 a3)
{
  __int64 v4; // r10
  size_t v5; // r8

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  if ( a3 > *(_QWORD *)(a1 + 8) - v4 )
    goto LABEL_7;
  v5 = 8 * a3;
  if ( !is_mul_ok(a3, 8uLL) )
  {
    v5 = -1LL;
LABEL_7:
    *(_BYTE *)(a1 + 24) = 1;
  }
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  memmove(a2, (const void *)(*(_QWORD *)a1 + 8 * v4), v5);
  return 1;
}
