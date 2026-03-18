/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x140062AC0
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x140062AC0 (xxxDW_SendDestroyMessages.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x140062AC0 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140062C48 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026CA20 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rax
  __int64 UserSessionState; // rax
  ULONG_PTR v21[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  xxxMoveFocusAway(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  v5 = *(_QWORD *)(CurrentProcessWin32Process + 648);
  if ( v5 && a1 == *(const struct tagWND **)(v5 + 112) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63520) )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63520);
    if ( a1 == *(const struct tagWND **)(v7 + 112) )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      HMAssignmentUnlock(*(_QWORD *)(UserSessionState + 63520) + 112LL);
    }
  }
  PtiCurrent(v7, v6);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0 )
  {
    xxxSendMessage(a1, 0x272u);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  }
  xxxSendMessage(a1, 2u);
  v10 = *((_QWORD *)a1 + 14);
  do
  {
    if ( !v10 )
      break;
    v11 = *(_QWORD *)(v10 + 88);
    v12 = PtiCurrent(v9, v8);
    Win32HM_LockIntoThread<1>((__int64)v12, v11, (__int64 *)v21);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v10);
    xxxDW_SendDestroyMessages(v10);
    v15 = PtiCurrent(v14, v13);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
    v10 = v11;
    v18 = PtiCurrent(v17, v16);
    v19 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, v21);
    v21[1] = 0LL;
    v21[0] = -1LL;
  }
  while ( v19 );
  xxxMoveFocusAway(a1);
}
