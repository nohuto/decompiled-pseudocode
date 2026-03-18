/*
 * XREFs of ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520
 * Callers:
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140099D60 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x140099E70 (-bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x14009A0C4 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14009A2B8 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtPts @ 0x14009A62C (bCvtPts.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___ @ 0x14009A87C (umptr_r__POINTL_--enumerate__POINTFIX__EXFORMOBJR--bXformRound_--_8_--_lambda_1___.c)
 *     umptr_inpage_warning @ 0x1401C6E80 (umptr_inpage_warning.c)
 */

char __fastcall EXFORMOBJR::bXformRound(_BYTE *a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  int v8; // r14d
  unsigned int *v10; // rcx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 32LL) & 0x43) == 0x43 )
    return umptr_r__POINTL_::enumerate__POINTFIX__EXFORMOBJR::bXformRound_::_8_::_lambda_1___(a2, a3, a4);
  v8 = bCvtPts(*(_QWORD *)a1, *a2 + 8LL * a2[2], a3, a4);
  if ( !v8 )
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
  return v8 != 0;
}
