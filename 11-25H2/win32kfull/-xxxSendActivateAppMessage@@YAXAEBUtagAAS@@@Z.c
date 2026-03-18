/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14004B2E8
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027C900 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagBWL *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct tagWND **v17; // r15
  struct tagWND *v18; // rbx
  int v19; // r8d
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  _BYTE v24[16]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  v4 = PtiCurrent(v3, v2);
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v4 + 63) + 24LL) + 112LL), 2LL, 0LL, 1);
  v8 = v5;
  if ( v5 )
  {
    v9 = (_QWORD *)((char *)v5 + 32);
    v10 = *((_QWORD *)v5 + 4);
    if ( v10 != 1 )
    {
      do
      {
        W32GetCurrentThreadNonPaged(v7, v6);
        v7 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872);
        if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(v7 + 8) )
        {
          UserSessionState = W32GetUserSessionState(v7, v6);
          v16 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19896) * (unsigned int)(unsigned __int16)v10
              + *(_QWORD *)(UserSessionState + 19888);
          v17 = (struct tagWND **)HMPkheFromPhe(v16);
          LOWORD(v10) = WORD1(v10) & 0x7FFF;
          if ( ((WORD1(v10) & 0x7FFF) == *(_WORD *)(v16 + 26)
             || (_WORD)v10 == 0x7FFF
             || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v7, v6))
            && (*(_BYTE *)(v16 + 25) & 1) == 0
            && *(_BYTE *)(v16 + 24) == 1 )
          {
            v18 = *v17;
            if ( *v17 )
            {
              if ( *((_QWORD *)v18 + 2) == *(_QWORD *)a1 )
              {
                v19 = *((_DWORD *)a1 + 3);
                if ( (v19 & 2) != 0 )
                {
                  SendNotifyMessageAlways(v18, 0x1Cu, v19 & 1, *((unsigned int *)a1 + 2), 0);
                }
                else
                {
                  v20 = PtiCurrent(v7, v6);
                  Win32HM_LockIntoThread<1>((__int64)v20, (__int64)v18, (__int64 *)BugCheckParameter3);
                  xxxSendMessage(v18, 0x1Cu);
                  v23 = PtiCurrent(v22, v21);
                  Win32HM_UnlockFromThread<1>((ULONG_PTR)v23, BugCheckParameter3);
                }
              }
            }
          }
        }
        v10 = *++v9;
      }
      while ( *v9 != 1LL );
    }
    FreeHwndList(v8, v6);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
}
