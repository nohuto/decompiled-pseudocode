/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     FindShellFrameThreadFromAssociation @ 0x140149BB4 (FindShellFrameThreadFromAssociation.c)
 *     DisassociateShellFrameAppThreads @ 0x140149D88 (DisassociateShellFrameAppThreads.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140153364 (zzzInputFocusReceivedWindowEvent.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  struct MOVESIZEDATA *v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  bool v15; // r15
  char v16; // bp
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  struct tagTHREADINFO *v20; // r15
  char v21; // bp
  bool v22; // r14
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rbx
  struct tagTHREADINFO *v27; // rax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2[11]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+E0h] [rbp+18h]

  v1 = a1;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 58) + 40LL) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation();
    v37 = ShellFrameThreadFromAssociation;
    v3 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(ShellFrameThreadFromAssociation + 520), 0, 0) & 1) == 0 )
      {
        v4 = *(_QWORD *)(ShellFrameThreadFromAssociation + 704);
        if ( !v4 || (*(_DWORD *)(v4 + 200) & 0x8000) == 0 )
        {
          v5 = (_QWORD *)*((_QWORD *)v1 + 58);
          v6 = *((_QWORD *)v1 + 170);
          v7 = v6 & 0xFFFFFFFFFFF7FFFFuLL;
          v8 = v6 >> 20;
          *((_QWORD *)v1 + 170) = v7 | 0x100000;
          DisassociateShellFrameAppThreads(v1);
          v10 = v5 + 3;
          v11 = v5[3];
          if ( v11 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(*(unsigned int *)(v11 + 24)) )
                break;
              v13 = *v10;
              if ( *v10 == v5[10] )
                v5[10] = 0LL;
              v14 = v5[11];
              if ( v13 == v14 )
              {
                v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                {
                  v16 = 0;
                }
                if ( v15 || v16 )
                {
                  UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
                  LOBYTE(v18) = v16;
                  LOBYTE(v19) = v15;
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v19,
                    v18,
                    *(_QWORD *)(UserSessionState + 69152),
                    5,
                    18,
                    18,
                    (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                    (char)v5,
                    v14);
                }
                v5[11] = 0LL;
              }
              DelQEntry((__int64)(v5 + 3), *v10, 1);
              v11 = *v10;
            }
            while ( *v10 );
            v1 = a1;
            v3 = v37;
          }
          v20 = (struct tagTHREADINFO *)v5[9];
          if ( v20 == v1 )
          {
            v9 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
              || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v21 = 0;
            }
            v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v23 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
              LOBYTE(v24) = v22;
              LOBYTE(v25) = v21;
              WPP_RECORDER_AND_TRACE_SF_qqq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v25,
                v24,
                *(_QWORD *)(v23 + 69152),
                4,
                18,
                19,
                (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                (char)v5,
                (char)v1,
                (char)v20);
            }
            v5[9] = 0LL;
          }
          v26 = v5[15];
          v27 = PtiCurrent((__int64)v9);
          Win32HM_LockIntoThread<1>((__int64)v27, v26, (__int64 *)BugCheckParameter3);
          Win32RawLockedW32Thread::Win32RawLockedW32Thread(
            (Win32RawLockedW32Thread *)BugCheckParameter2,
            (struct _W32THREAD *)v3);
          v28 = zzzAttachThreadInput(v1, v3, 32769LL);
          *(_DWORD *)(*((_QWORD *)v1 + 58) + 468LL) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v29 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
          tagQ::LockFocusWnd(*((_QWORD *)v1 + 58), v29, 0LL);
          v31 = *(_QWORD *)(v3 + 1584);
          if ( v31 )
            PostMessage(v31, 840, 2, v28);
          v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 18928);
          if ( v32 == *((_QWORD *)v1 + 58) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 18928) + 120LL) )
              zzzInputFocusReceivedWindowEvent(2LL);
          }
          *((_QWORD *)v1 + 170) = ((__int64)(int)v8 << 20) ^ (*((_QWORD *)v1 + 170) ^ ((__int64)(int)v8 << 20)) & 0xFFFFFFFFFFEFFFFFuLL;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
        }
      }
    }
  }
}
