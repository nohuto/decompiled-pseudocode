/*
 * XREFs of ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1400260E4
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140025B6C (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027E84 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

char __fastcall AdvancedWindowPos::HasFullscreenState(AdvancedWindowPos *this, const struct tagWND *a2)
{
  __int64 v2; // rdx
  __int64 UserSessionState; // rax
  char v6; // bl
  __int64 Prop; // rax

  v2 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v2 + 20) & 0x40) != 0 )
    return 1;
  if ( (*(_BYTE *)(v2 + 31) & 0x20) == 0 )
    return 0;
  UserSessionState = W32GetUserSessionState(this, v2);
  v6 = 1;
  Prop = GetProp((__int64)this, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
  if ( !Prop || (*(_DWORD *)(Prop + 16) & 0x40) == 0 )
    return 0;
  return v6;
}
