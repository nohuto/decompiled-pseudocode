/*
 * XREFs of ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14015EE84
 * Callers:
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x1402DEC28 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14015EFB0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14015F218 (-HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 */

char __fastcall CRecalcProp::ShouldSkipRecalcForWindow(const struct tagWND *a1, struct CRecalcState *this)
{
  __int64 v4; // rdx
  bool IsWindowEligibleForRecalc; // bp
  bool v7; // di
  bool v8; // si
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r9
  const char *v14; // rax

  IsWindowEligibleForRecalc = CRecalcProp::IsWindowEligibleForRecalc(a1);
  if ( IsWindowEligibleForRecalc
    && (!CRecalcState::HasWindowMovedUnexpectedly(this, a1) || (*((_DWORD *)a1 + 96) & 0x10) != 0) )
  {
    return 0;
  }
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    v13 = *(_QWORD *)(UserSessionState + 69152);
    v14 = "moved unexpectedly";
    if ( !IsWindowEligibleForRecalc )
      v14 = "is no longer eligible";
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      v13,
      3,
      7,
      76,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v9,
      (__int64)v14);
  }
  return 1;
}
