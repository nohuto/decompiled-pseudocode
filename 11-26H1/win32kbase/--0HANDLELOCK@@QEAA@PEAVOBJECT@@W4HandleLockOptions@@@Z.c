/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x1400326E0
 * Callers:
 *     GreSetSolidBrushLight @ 0x1400325A0 (GreSetSolidBrushLight.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall HANDLELOCK::HANDLELOCK(__int64 *a1, _DWORD *a2, char a3)
{
  __int64 SessionState; // rax
  unsigned int v7; // ebp
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned int *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  unsigned __int64 i; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v21; // r8
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  *((_DWORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 6) = 0;
  SessionState = W32GetSessionState(a1);
  v22 = 0LL;
  a1[2] = *(_QWORD *)(SessionState + 88);
  v7 = (unsigned __int16)*a2 | (*a2 >> 8) & 0xFF0000;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v22);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && (v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
  {
    v10 = v9 + 8;
    if ( v9 != -8 )
    {
      v11 = *(_QWORD *)(v9 + 72);
      goto LABEL_6;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
LABEL_6:
  v12 = (unsigned int *)a1[2];
  *((_DWORD *)a1 + 2) = 1;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v12 + 1) + 40LL))(*((_QWORD *)v12 + 1), v7);
  *a1 = v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 8));
    if ( (a3 & 1) == 0 )
    {
      v14 = *(_DWORD *)(v13 + 8) & 0xFFFFFFFE;
      if ( v14 != (v22 & 0xFFFFFFFC) && v14 && (!v11 || v14 != (unsigned int)UMPDGetThreadClientPID(v10)) )
      {
        if ( (a3 & 8) == 0 )
        {
LABEL_14:
          HANDLELOCK::vUnlock((HANDLELOCK *)a1);
          return a1;
        }
        v21 = 1LL;
LABEL_30:
        GrepCaptureLiveMemoryDump(400LL, 56LL, v21, 0LL, 0LL, 0);
        goto LABEL_14;
      }
    }
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 8) + 96LL))(
                       *(_QWORD *)(a1[2] + 8),
                       *(unsigned int *)*a1)
                   + 14) & 0x20) != 0 )
    {
      if ( v10 )
      {
        v16 = *(_QWORD *)(v10 + 328);
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v16 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v16 + 40) + 4 * i) == v7 )
                return a1;
            }
          }
        }
      }
      *((_BYTE *)a1 + 12) = 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_14;
      v21 = 6LL;
      goto LABEL_30;
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
