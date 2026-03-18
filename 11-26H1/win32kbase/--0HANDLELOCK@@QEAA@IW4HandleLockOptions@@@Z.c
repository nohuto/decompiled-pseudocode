/*
 * XREFs of ??0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z @ 0x14010F730
 * Callers:
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401EDBF0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x140014660 (IsThreadCrossSessionAttached.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall HANDLELOCK::HANDLELOCK(__int64 *a1, unsigned int a2, char a3)
{
  __int64 SessionState; // rax
  __int64 v7; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  ThreadRestrictNewHandlesRegion *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  *((_DWORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 6) = 0;
  SessionState = W32GetSessionState(a1);
  v19 = 0LL;
  v7 = 0LL;
  a1[2] = *(_QWORD *)(SessionState + 88);
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v19);
  if ( !IsThreadCrossSessionAttached() && CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v7 = *CurrentThreadWin32ThreadAndEnterCriticalRegion;
  v9 = v7 + 8;
  v10 = -v7;
  v11 = v9 & -(__int64)(v10 != 0);
  if ( v11 )
    v12 = *(_QWORD *)((v9 & -(__int64)(v10 != 0)) + 0x40);
  else
    v12 = 0LL;
  v13 = (unsigned int *)a1[2];
  *((_DWORD *)a1 + 2) = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v13 + 1) + 40LL))(*((_QWORD *)v13 + 1), a2);
  *a1 = v14;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v14 + 8));
    if ( (a3 & 1) == 0 )
    {
      v15 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
      if ( v15 != (v19 & 0xFFFFFFFC) && v15 && (!v12 || v15 != (unsigned int)UMPDGetThreadClientPID(v11)) )
      {
        if ( (a3 & 8) == 0 )
        {
LABEL_14:
          HANDLELOCK::vUnlock((HANDLELOCK *)a1);
          return a1;
        }
        v18 = 1LL;
LABEL_24:
        GrepCaptureLiveMemoryDump(400LL, 56LL, v18, 0LL, 0LL, 0);
        goto LABEL_14;
      }
    }
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 8) + 96LL))(
                       *(_QWORD *)(a1[2] + 8),
                       *(unsigned int *)*a1)
                   + 14) & 0x20) != 0
      && (!v11
       || (v17 = *(ThreadRestrictNewHandlesRegion **)(v11 + 328)) == 0LL
       || !*((_BYTE *)v17 + 80)
       || !ThreadRestrictNewHandlesRegion::InRegion(v17, a2)) )
    {
      *((_BYTE *)a1 + 12) = 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_14;
      v18 = 6LL;
      goto LABEL_24;
    }
  }
  else
  {
    if ( (a3 & 8) != 0 )
      GrepCaptureLiveMemoryDump(400LL, 56LL, 0LL, 0LL, 0LL, 0);
    *((_DWORD *)a1 + 2) = 0;
    KeLeaveCriticalRegion();
  }
  return a1;
}
