/*
 * XREFs of ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x14002355C
 * Callers:
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ?OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ @ 0x1401EDB48 (-OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall HmgpThreadUnrestrictHandle(__int64 a1)
{
  __int64 v1; // r13
  __int64 SessionState; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rax
  unsigned int *v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int16 v16; // cx
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  ThreadRestrictNewHandlesRegion *v20; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int *v23; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+38h] [rbp-18h]
  __int16 v25; // [rsp+3Ch] [rbp-14h]
  __int64 v26; // [rsp+40h] [rbp-10h]
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  v1 = (unsigned int)a1;
  v25 = 0;
  SessionState = W32GetSessionState(a1);
  v27 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(SessionState + 88);
  v26 = v4;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v27);
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion )
      v3 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  v6 = v3 + 8;
  v7 = -v3;
  v8 = v6 & -(__int64)(v7 != 0);
  if ( v8 )
    v9 = *(_QWORD *)((v6 & -(__int64)(v7 != 0)) + 0x40);
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(v4 + 8);
  v11 = 1;
  v24 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, (unsigned int)v1);
  v23 = (unsigned int *)v12;
  v13 = (unsigned int *)v12;
  if ( !v12 )
  {
    v11 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_9;
  }
  _m_prefetchw((const void *)(v12 + 8));
  v14 = *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
  if ( v14 != (v27 & 0xFFFFFFFC) && v14 && (!v9 || v14 != (unsigned int)UMPDGetThreadClientPID(v8)) )
    goto LABEL_24;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8) + 96LL))(*(_QWORD *)(v4 + 8), *v13)
                 + 14) & 0x20) != 0
    && (!v8
     || (v20 = *(ThreadRestrictNewHandlesRegion **)(v8 + 328)) == 0LL
     || !*((_BYTE *)v20 + 80)
     || !ThreadRestrictNewHandlesRegion::InRegion(v20, v1)) )
  {
    LOBYTE(v25) = 1;
LABEL_24:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
    v13 = v23;
    v11 = v24;
    v4 = v26;
  }
LABEL_9:
  if ( v11 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8) + 96LL))(*(_QWORD *)(v4 + 8), *v13);
    v16 = *(_WORD *)(v15 + 14);
    if ( (v16 & 0x20) != 0 )
      *(_WORD *)(v15 + 14) = v16 & 0xFFDF;
    else
      GrepCaptureLiveMemoryDump(400LL, 52LL, 5LL, v15, 0LL, 0);
    v17 = *(__int64 **)(v4 + 8);
    v18 = *v17;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v17 + 96))(v17, *v13);
    (*(void (__fastcall **)(__int64 *, __int64))(v18 + 48))(v17, v19);
    KeLeaveCriticalRegion();
  }
  else
  {
    GrepCaptureLiveMemoryDump(400LL, 52LL, 3LL, v1, 0LL, 0);
  }
}
