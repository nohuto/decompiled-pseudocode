/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x14008B05C
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14008A3D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14008B1E4 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  Gre::Base *v2; // rcx
  HSEMAPHORE v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v2 = (Gre::Base *)*((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 105) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*((_DWORD *)v2 + 9) & 0x200) != 0 )
  {
    v3 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v2) + 728LL);
    GreAcquireSemaphoreSharedInternal(v3);
    GrepAcquireLockValidate<3>();
    if ( !*((_QWORD *)this + 14) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v5, v4);
      v7 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
      v8 = v7 + 8;
      v9 = -v7;
      if ( (v8 & -(__int64)(v9 != 0)) != 0 )
        *(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x158) &= ~1u;
    }
    EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v3);
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v13 = v11 + 8;
    v14 = -v11;
    v15 = (_QWORD *)(v13 & -(__int64)(v14 != 0));
    if ( v15 )
    {
      if ( (*(_BYTE *)((v13 & -(__int64)(v14 != 0)) + 0xB))-- == 1 )
        *v15 &= ~8uLL;
      if ( !*v15 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreSharedInternal(v3);
  }
}
