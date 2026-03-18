/*
 * XREFs of ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x1400C5A78
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$04@@YAXXZ @ 0x1400C5C60 (--$GrepAcquireLockValidate@$04@@YAXXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1400F45AC (vRemoveAllInactiveRFONTs.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?vUnlock@?$SEMOBJ@$04@@QEAAXXZ @ 0x140198648 (-vUnlock@-$SEMOBJ@$04@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDelayedReclaim(RFONTOBJ *this)
{
  HSEMAPHORE v2; // rbx
  HSEMAPHORE v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  __int64 i; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  HSEMAPHORE v23; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v2 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
    if ( v2 )
    {
      v3 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
      v23 = v2;
      GreAcquireSemaphoreInternal(v3);
      GrepAcquireLockValidate<5>(v5, v4);
      v6 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v6 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v6 & 0xFFFFFFF7;
        for ( i = 0LL; ; i = v17 )
        {
          v15 = hdevEnumerateAll(i);
          v17 = v15;
          if ( !v15 )
            break;
          v18 = *(_DWORD *)(v15 + 40);
          if ( (v18 & 0x2000) == 0 )
          {
            if ( (v18 & 0x8000) == 0 )
              goto LABEL_21;
            v19 = *(_QWORD *)(*(_QWORD *)(v17 + 1776) + 56LL);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            if ( v19 == CurrentProcessWin32Process )
LABEL_21:
              vRemoveAllInactiveRFONTs(v17);
          }
        }
        SEMOBJ<5>::vUnlock(&v23);
      }
      else
      {
        EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", v2);
        CurrentThread = KeGetCurrentThread();
        v8 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v8 = *ThreadWin32Thread;
        }
        v10 = v8 + 8;
        v11 = -v8;
        v12 = (_QWORD *)(v10 & -(__int64)(v11 != 0));
        if ( v12 )
        {
          if ( (*(_BYTE *)((v10 & -(__int64)(v11 != 0)) + 0xD))-- == 1 )
            *v12 &= ~0x20uLL;
          if ( !*v12 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v2);
      }
    }
  }
}
