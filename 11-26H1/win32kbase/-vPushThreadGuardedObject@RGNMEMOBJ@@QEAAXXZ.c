/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140021730
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v6 = *ThreadWin32Thread;
      if ( (-(__int64)(v6 != 0) & (v6 + 8)) != 0 )
      {
        v7 = *(_QWORD **)this;
        if ( v7 )
        {
          v8 = v7 + 10;
          if ( v7 != (_QWORD *)-80LL )
          {
            CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v6 + 8, v5);
            if ( CurrentThreadWin32Thread )
              v3 = *CurrentThreadWin32Thread;
            v7[12] = v7;
            v7[13] = CleanUpRegion;
            if ( ((v3 + 8) & -(__int64)(v3 != 0)) != 0 )
            {
              v10 = ((v3 + 8) & -(__int64)(v3 != 0)) + 88;
              v11 = *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58);
              if ( *(_QWORD *)(v11 + 8) != v10 )
                __fastfail(3u);
              *v8 = v11;
              v7[11] = v10;
              *(_QWORD *)(v11 + 8) = v8;
              *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58) = v8;
            }
            else
            {
              v7[11] = v7 + 10;
              *v8 = v8;
            }
          }
        }
      }
    }
  }
}
