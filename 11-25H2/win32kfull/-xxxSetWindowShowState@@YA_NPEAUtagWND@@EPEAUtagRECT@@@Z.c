/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D3C90
 * Callers:
 *     NtUserSetWindowShowState @ 0x1402A0BF0 (NtUserSetWindowShowState.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x14012931C (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C2A50 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, __int64 a2, struct tagRECT *a3)
{
  unsigned int v4; // edi
  BOOL v6; // eax
  struct tagWND *v7; // rdx
  __int64 UserSessionState; // rax
  CHECKPOINT *Prop; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int8)a2;
  v6 = (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 || IsArranged(this);
  if ( ((_BYTE)v4 == 14 || (_BYTE)v4 == 16 || (_BYTE)v4 == 18) && !v6 )
    goto LABEL_9;
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    Prop = (CHECKPOINT *)GetProp((__int64)this, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
    if ( Prop )
    {
      CHECKPOINT::SetNormalRect(Prop, this, a3, 0);
    }
    else if ( !CHECKPOINT::Restore(this, a3) )
    {
      UserSetLastError(8);
      return 0;
    }
  }
  if ( ((_BYTE)v4 == 13 || (_BYTE)v4 == 15 || (_BYTE)v4 == 17) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
    LOBYTE(v7) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v7);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
    return 1;
  }
  return (unsigned int)_ShowWindowAsync(this, 1LL, v4, a3 != 0LL ? 4 : 0) != 0;
}
