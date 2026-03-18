/*
 * XREFs of ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x140018FBC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?vUnlock@?$SEMOBJ@$04@@QEAAXXZ @ 0x14015ED84 (-vUnlock@-$SEMOBJ@$04@@QEAAXXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x14022710C (vRemoveAllInactiveRFONTs.c)
 */

void __fastcall RFONTOBJ::vDelayedReclaim(RFONTOBJ *this)
{
  __int64 v2; // rcx
  HSEMAPHORE v3; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  char v9; // cl
  int v10; // eax
  struct _KTHREAD *v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  __int64 i; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v24; // rcx
  int v25; // r8d
  int v26; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v29; // ebx
  __int64 v30; // rax
  HSEMAPHORE v31; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    v3 = *(HSEMAPHORE *)(v2 + 504);
    if ( v3 )
    {
      v31 = v3;
      GreAcquireSemaphoreInternal(v3);
      CurrentThread = KeGetCurrentThread();
      v5 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v5 = *ThreadWin32Thread;
      }
      v7 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
      if ( v7 )
      {
        v8 = *v7;
        if ( (*v7 & 0xFFFFFFFFFFFFFFE0uLL) != 0 && (*v7 & 0x20) == 0 )
        {
          v24 = 0LL;
          v25 = 37;
          do
          {
            v26 = v24;
            if ( !_bittest64(&v8, v24) )
              v26 = v25;
            ++v24;
            v25 = v26;
          }
          while ( v24 < 0x40 );
          if ( v26 > 5 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v8, (unsigned int)v26);
        }
        v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0xD);
        *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0xD) = v9 + 1;
        if ( !v9 )
          *v7 |= 0x20uLL;
      }
      v10 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v10 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v10 & 0xFFFFFFF7;
        for ( i = 0LL; ; i = v20 )
        {
          v19 = hdevEnumerateAll(i);
          v20 = v19;
          if ( !v19 )
            break;
          v21 = *(_DWORD *)(v19 + 40);
          if ( (v21 & 0x2000) == 0 )
          {
            if ( (v21 & 0x8000) == 0 )
              goto LABEL_30;
            v22 = *(_QWORD *)(*(_QWORD *)(v20 + 1776) + 56LL);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            if ( v22 == CurrentProcessWin32Process )
LABEL_30:
              vRemoveAllInactiveRFONTs(v20);
          }
        }
        SEMOBJ<5>::vUnlock(&v31);
      }
      else if ( v31 )
      {
        EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", v31);
        v11 = KeGetCurrentThread();
        v12 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v29 = W32GetCurrentWin32kSessionId(),
              v30 = PsGetCurrentThreadProcess(),
              v29 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
        {
          v13 = (__int64 *)PsGetThreadWin32Thread(v11);
          if ( v13 )
            v12 = *v13;
        }
        v14 = v12 + 8;
        v15 = -v12;
        v16 = (_QWORD *)(v14 & -(__int64)(v15 != 0));
        if ( v16 )
        {
          if ( (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 0xD))-- == 1 )
            *v16 &= ~0x20uLL;
          if ( !*v16 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v31);
      }
    }
  }
}
