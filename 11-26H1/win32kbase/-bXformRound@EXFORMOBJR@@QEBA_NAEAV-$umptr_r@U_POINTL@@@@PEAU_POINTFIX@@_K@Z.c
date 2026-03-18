/*
 * XREFs of ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360
 * Callers:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C10E0 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C1780 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1400C1880 (-bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C193C (-growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x1400C1E68 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___ @ 0x1400C2524 (umptr_r__POINTL_--enumerate__POINTFIX__EXFORMOBJR--bXformRound_--_8_--_lambda_1___.c)
 *     bCvtPts @ 0x1400C25C8 (bCvtPts.c)
 *     umptr_inpage_warning @ 0x1401F0FC0 (umptr_inpage_warning.c)
 */

char __fastcall EXFORMOBJR::bXformRound(_BYTE *a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  int v9; // r14d
  unsigned int *v10; // rcx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 32LL) & 0x43) == 0x43 )
    return umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___(a2, a3, a4);
  v9 = bCvtPts(*(_QWORD *)a1, *a2 + 8LL * a2[2], a3, a4);
  if ( !v9 )
    EngSetLastError(0x216u);
  if ( a1[8] )
  {
    v10 = &a3[2 * a4];
    while ( a3 < v10 )
    {
      *a3 = (*a3 + 8) & 0xFFFFFFF0;
      a3[1] = (a3[1] + 8) & 0xFFFFFFF0;
      a3 += 2;
    }
  }
  return v9 != 0;
}
