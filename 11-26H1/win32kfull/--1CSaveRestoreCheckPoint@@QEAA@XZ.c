/*
 * XREFs of ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x14025C7C4
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

void __fastcall CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint(CSaveRestoreCheckPoint *this)
{
  const struct tagRECT *v1; // rdi
  __int64 *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  const struct tagWND *v5; // rbx
  __int64 UserSessionState; // rax
  CHECKPOINT *Prop; // rax

  v1 = (const struct tagRECT *)((char *)this + 8);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 8)) )
  {
    v5 = (const struct tagWND *)HMValidateHandleNoSecure(*v2, 1);
    if ( v5 )
    {
      UserSessionState = W32GetUserSessionState(v4, v3);
      Prop = (CHECKPOINT *)GetProp((__int64)v5, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
      if ( Prop )
        CHECKPOINT::SetNormalRect(Prop, v5, v1, 0);
    }
  }
}
