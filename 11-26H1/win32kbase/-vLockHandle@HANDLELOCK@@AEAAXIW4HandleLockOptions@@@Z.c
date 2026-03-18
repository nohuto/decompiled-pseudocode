/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x140019290 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x140019380 (DEC_SHARE_REF_CNT.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     HmgShareUnlock @ 0x140055534 (HmgShareUnlock.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall HANDLELOCK::vLockHandle(__int64 *a1, unsigned int a2, char a3)
{
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  unsigned int *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned __int64 i; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v18; // r8
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v19);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && (v7 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
  {
    v8 = v7 + 8;
    if ( v7 != -8 )
    {
      v9 = *(_QWORD *)(v7 + 72);
      goto LABEL_6;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 0LL;
LABEL_6:
  v10 = (unsigned int *)a1[2];
  *((_DWORD *)a1 + 2) = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v10 + 1) + 40LL))(*((_QWORD *)v10 + 1), a2);
  *a1 = v11;
  if ( v11 )
  {
    _m_prefetchw((const void *)(v11 + 8));
    if ( (a3 & 1) == 0 )
    {
      v12 = *(_DWORD *)(v11 + 8) & 0xFFFFFFFE;
      if ( v12 != (v19 & 0xFFFFFFFC) && v12 && (!v9 || v12 != (unsigned int)UMPDGetThreadClientPID(v8)) )
      {
        if ( (a3 & 8) == 0 )
        {
LABEL_14:
          HANDLELOCK::vUnlock((HANDLELOCK *)a1);
          return;
        }
        v18 = 1LL;
LABEL_30:
        GrepCaptureLiveMemoryDump(400LL, 56LL, v18, 0LL, 0LL, 0);
        goto LABEL_14;
      }
    }
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 8) + 96LL))(
                       *(_QWORD *)(a1[2] + 8),
                       *(unsigned int *)*a1)
                   + 14) & 0x20) != 0 )
    {
      if ( v8 )
      {
        v13 = *(_QWORD *)(v8 + 328);
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v13 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 4 * i) == a2 )
                return;
            }
          }
        }
      }
      *((_BYTE *)a1 + 12) = 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_14;
      v18 = 6LL;
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
}
