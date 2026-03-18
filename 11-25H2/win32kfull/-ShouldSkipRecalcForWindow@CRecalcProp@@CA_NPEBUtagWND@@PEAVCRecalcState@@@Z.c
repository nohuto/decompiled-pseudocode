/*
 * XREFs of ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x1401A4394
 * Callers:
 *     ?HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z @ 0x1402598E4 (-HasPendingRecalc@CRecalcProp@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1401A44D0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1401A4738 (-HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026EA44 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall CRecalcProp::ShouldSkipRecalcForWindow(const struct tagWND *a1, struct CRecalcState *this)
{
  __int64 v4; // rdx
  bool IsWindowEligibleForRecalc; // bp
  const struct tagWND *v6; // rdx
  bool v8; // di
  bool v9; // si
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // r9
  const char *v15; // rax

  IsWindowEligibleForRecalc = CRecalcProp::IsWindowEligibleForRecalc(a1);
  if ( IsWindowEligibleForRecalc
    && (!CRecalcState::HasWindowMovedUnexpectedly(this, a1) || WindowActions::IsInterceptWindow(a1, v6)) )
  {
    return 0;
  }
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    v14 = *(_QWORD *)(UserSessionState + 69160);
    v15 = "moved unexpectedly";
    if ( !IsWindowEligibleForRecalc )
      v15 = "is no longer eligible";
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      v14,
      3,
      7,
      76,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v10,
      (__int64)v15);
  }
  return 1;
}
