/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x14000E8F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EAFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140097160 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140098C8C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( (-(__int64)(*ThreadWin32Thread != 0LL) & (*ThreadWin32Thread + 8LL)) != 0 )
      {
        v5 = *(_QWORD **)this;
        if ( v5 )
        {
          v6 = v5 + 10;
          if ( v5 != (_QWORD *)-80LL )
          {
            CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
            if ( CurrentThreadNonPaged )
              v3 = *CurrentThreadNonPaged;
            v5[12] = v5;
            v5[13] = CleanUpRegion;
            if ( ((v3 + 8) & -(__int64)(v3 != 0)) != 0 )
            {
              v8 = ((v3 + 8) & -(__int64)(v3 != 0)) + 88;
              v9 = *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58);
              if ( *(_QWORD *)(v9 + 8) != v8 )
                __fastfail(3u);
              *v6 = v9;
              v5[11] = v8;
              *(_QWORD *)(v9 + 8) = v6;
              *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58) = v6;
            }
            else
            {
              v5[11] = v5 + 10;
              *v6 = v6;
            }
          }
        }
      }
    }
  }
}
