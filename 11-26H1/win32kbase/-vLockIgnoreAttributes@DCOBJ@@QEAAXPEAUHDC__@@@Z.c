/*
 * XREFs of ?vLockIgnoreAttributes@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14003D840
 * Callers:
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DCOBJ::vLockIgnoreAttributes(DCOBJ *this, HDC a2)
{
  __int64 v2; // r15
  __int64 v4; // rsi
  unsigned int v5; // r13d
  __int64 v6; // rdi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int *v12; // rdi
  unsigned int v13; // r14d
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v22; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v24; // [rsp+20h] [rbp-20h] BYREF
  int v25; // [rsp+28h] [rbp-18h]
  __int16 v26; // [rsp+2Ch] [rbp-14h]
  __int64 v27; // [rsp+30h] [rbp-10h]
  __int64 v28; // [rsp+80h] [rbp+40h]
  __int16 v29; // [rsp+8Ah] [rbp+4Ah]
  __int64 v30; // [rsp+90h] [rbp+50h] BYREF

  v29 = WORD1(a2);
  v2 = 0LL;
  v26 = 0;
  v4 = 0LL;
  v28 = *((_QWORD *)this + 2);
  v27 = v28;
  v5 = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  v30 = 0LL;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v30);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v6 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v8 = v6 + 8;
  v9 = -v6;
  v10 = v8 & -(__int64)(v9 != 0);
  if ( v10 )
    v2 = *(_QWORD *)((v8 & -(__int64)(v9 != 0)) + 0x40);
  v25 = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v28 + 8) + 40LL))(*(_QWORD *)(v28 + 8), v5);
  v24 = (unsigned int *)v11;
  v12 = (unsigned int *)v11;
  if ( !v11 )
  {
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
    goto LABEL_24;
  }
  _m_prefetchw((const void *)(v11 + 8));
  v13 = *(_DWORD *)(v11 + 8) & 0xFFFFFFFE;
  if ( v13 == (v30 & 0xFFFFFFFC) || !v13 || v2 && v13 == (unsigned int)UMPDGetThreadClientPID(v10) )
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v28 + 8) + 96LL))(
                       *(_QWORD *)(v28 + 8),
                       *v12)
                   + 14) & 0x20) == 0 )
    {
LABEL_9:
      v14 = v28;
      goto LABEL_10;
    }
    if ( v10 )
    {
      v22 = *(_QWORD *)(v10 + 328);
      if ( v22 )
      {
        if ( *(_BYTE *)(v22 + 80) )
        {
          for ( i = 0LL; i < *(_QWORD *)(v22 + 32); ++i )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v22 + 40) + 4 * i) == v5 )
              goto LABEL_9;
          }
        }
      }
    }
    LOBYTE(v26) = 1;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
  if ( !v25 )
    goto LABEL_16;
  v14 = v27;
  v12 = v24;
LABEL_10:
  if ( *((_BYTE *)v12 + 14) == 1 && *((_WORD *)v12 + 6) == v29 )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 8) + 96LL))(*(_QWORD *)(v14 + 8), *v12);
    v4 = v16;
    if ( !*(_WORD *)(v16 + 12) || *(struct _KTHREAD **)(v16 + 16) == CurrentThread )
    {
      _InterlockedAdd16((volatile signed __int16 *)(v16 + 12), 1u);
      *(_QWORD *)(v16 + 16) = CurrentThread;
      goto LABEL_14;
    }
    v4 = 0LL;
  }
  HIBYTE(v26) = 1;
LABEL_14:
  HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
  if ( v25 )
  {
    v17 = *(__int64 **)(v27 + 8);
    v18 = *v17;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v17 + 96))(v17, *v24);
    (*(void (__fastcall **)(__int64 *, __int64))(v18 + 48))(v17, v19);
    KeLeaveCriticalRegion();
  }
LABEL_16:
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v4 + 12));
      *(_QWORD *)this = 0LL;
    }
    return;
  }
LABEL_24:
  if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 && (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
    PsGetWin32KFilterSet();
}
