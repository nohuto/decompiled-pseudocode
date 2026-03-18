/*
 * XREFs of ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140099D60
 * Callers:
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x140099CE8 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140099D30 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x140099DDC (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

char __fastcall PATH_CORE::bMoveTo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( a2 )
  {
    if ( !(unsigned __int8)EXFORMOBJR::bXformRound(a2, a3, &v7, 1LL) )
      return 0;
  }
  else
  {
    umptr_r<_POINTL>::read<_POINTFIX>(a3, &v7, 1LL);
  }
  if ( !*(_BYTE *)(a3 + 25) && !*(_BYTE *)(a3 + 24) )
  {
    v5 = v7;
    result = 1;
    *(_DWORD *)(a1 + 48) |= 5u;
    *(_QWORD *)(a1 + 40) = v5;
    return result;
  }
  return 0;
}
