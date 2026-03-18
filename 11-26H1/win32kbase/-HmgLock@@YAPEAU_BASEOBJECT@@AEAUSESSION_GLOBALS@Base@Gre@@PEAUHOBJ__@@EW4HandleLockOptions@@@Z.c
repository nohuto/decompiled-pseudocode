/*
 * XREFs of ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401F1DF0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1401F1E70 (EngUnlockDriverObj.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgLock(__int64 a1, unsigned int a2, char a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned int v6; // esi
  __int16 v7; // r12d^2
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // rax
  unsigned int *v14; // r14
  unsigned int v15; // ebx
  char v16; // di
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rdx
  unsigned __int64 i; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // r8
  unsigned int *v29; // [rsp+30h] [rbp-68h] BYREF
  int v30; // [rsp+38h] [rbp-60h]
  __int16 v31; // [rsp+3Ch] [rbp-5Ch]
  __int64 v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+10h]
  char v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v4 = a1;
  v5 = 0LL;
  v32 = a1;
  v6 = (unsigned __int16)a2 | (a2 >> 8) & 0xFF0000;
  v31 = 0;
  v7 = HIWORD(a2);
  v33 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v33);
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
      v34 = *(_QWORD *)(v9 + 72);
      goto LABEL_6;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v34 = 0LL;
LABEL_6:
  v11 = *(_QWORD *)(v4 + 8);
  v12 = 1;
  v30 = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, v6);
  v29 = (unsigned int *)v13;
  v14 = (unsigned int *)v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 8));
    if ( (v36 & 1) != 0
      || (v15 = *(_DWORD *)(v13 + 8) & 0xFFFFFFFE, v15 == (v33 & 0xFFFFFFFC))
      || !v15
      || v34 && v15 == (unsigned int)UMPDGetThreadClientPID(v10) )
    {
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8) + 96LL))(
                         *(_QWORD *)(v4 + 8),
                         *v14)
                     + 14) & 0x20) == 0 )
      {
LABEL_10:
        v16 = v36;
        goto LABEL_11;
      }
      if ( v10 )
      {
        v23 = *(_QWORD *)(v10 + 328);
        if ( v23 )
        {
          if ( *(_BYTE *)(v23 + 80) )
          {
            for ( i = 0LL; i < *(_QWORD *)(v23 + 32); ++i )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v23 + 40) + 4 * i) == v6 )
                goto LABEL_10;
            }
          }
        }
      }
      LOBYTE(v31) = 1;
      v16 = v36;
      if ( (v36 & 8) == 0 )
        goto LABEL_21;
      v28 = 6LL;
    }
    else
    {
      v16 = v36;
      if ( (v36 & 8) == 0 )
      {
LABEL_21:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
        v4 = v32;
        v12 = v30;
        v14 = v29;
        goto LABEL_11;
      }
      v28 = 1LL;
    }
    GrepCaptureLiveMemoryDump(400LL, 56LL, v28, 0LL, 0LL, 0);
    goto LABEL_21;
  }
  v16 = v36;
  if ( (v36 & 8) != 0 )
    GrepCaptureLiveMemoryDump(400LL, 56LL, 0LL, 0LL, 0LL, 0);
  v12 = 0;
  KeLeaveCriticalRegion();
LABEL_11:
  if ( v12 )
  {
    if ( *((_BYTE *)v14 + 14) == v35 && *((_WORD *)v14 + 6) == v7 )
    {
      CurrentThread = KeGetCurrentThread();
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 8) + 96LL))(*(_QWORD *)(v4 + 8), *v14);
      v5 = v18;
      if ( !*(_WORD *)(v18 + 12) || *(struct _KTHREAD **)(v18 + 16) == CurrentThread )
      {
        _InterlockedIncrement16((volatile signed __int16 *)(v18 + 12));
        *(_QWORD *)(v18 + 16) = CurrentThread;
      }
      else
      {
        if ( (v16 & 8) != 0 )
          GrepCaptureLiveMemoryDump(400LL, 56LL, 7LL, 0LL, 0LL, 0);
        v5 = 0LL;
      }
    }
    else if ( (v16 & 8) != 0 )
    {
      GrepCaptureLiveMemoryDump(400LL, 56LL, 4LL, 0LL, 0LL, 0);
    }
    v19 = *(__int64 **)(v4 + 8);
    v20 = *v19;
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v19 + 96))(v19, *v14);
    (*(void (__fastcall **)(__int64 *, __int64))(v20 + 48))(v19, v21);
    KeLeaveCriticalRegion();
  }
  return v5;
}
