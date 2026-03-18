/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x140084C20
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x140084BE0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x140083A3C (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x140083AD0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140083AF8 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x140083B68 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140085008 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1400850F0 (-vLockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x14011DE80 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _GRETHREAD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // rdx
  void *v18; // rbx
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // r15
  _QWORD *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  bool v31; // zf
  _QWORD v32[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 CurrentProcess; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  int v36; // [rsp+78h] [rbp-8h]
  struct _ERESOURCE *v37; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0
    || !_bittest16((const signed __int16 *)(a1 + 102), 0xBu) )
  {
    return 0LL;
  }
  v4 = a1 + 272;
  v5 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  while ( 1 )
  {
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 40) + 64LL), UserRequest, 0, 0, 0LL);
    if ( !*(_DWORD *)v4 || *(_DWORD *)v4 == v5 )
      break;
    v15 = *(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 4);
    KeReleaseMutex(*(PRKMUTEX *)(v15 + 64), 0);
    KeWaitForSingleObject(*(PVOID *)(v4 + 40), UserRequest, 0, 0, 0LL);
  }
  v6 = *(_DWORD *)(v4 + 8) + 1;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  if ( v6 > *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v6;
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 40) + 64LL), 0);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)v4);
  v37 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v7) + 88) + 936LL);
  v8 = v37;
  GreAcquireSemaphoreInternal(v37);
  GrepAcquireLockValidate<36>();
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v12 = v11 & CurrentProcessWin32Process;
  }
  v13 = *(_QWORD *)(a1 + 264);
  if ( v13 == v12 )
  {
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"MapRot", (int)v8);
      v14 = GreGetCurrentThreadCrossSessionCheck();
      if ( v14 )
        *(_QWORD *)v14 &= ~0x1000000000uLL;
      GreReleaseSemaphoreSharedInternal(v8);
    }
    return 1LL;
  }
  if ( v13 )
  {
    v16 = (_QWORD *)(a1 + 528);
    v11 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v11 + 8) != a1 + 528 )
      goto LABEL_42;
    v17 = *(__int64 **)(a1 + 536);
    if ( (_QWORD *)*v17 != v16 )
      goto LABEL_42;
    *v17 = v11;
    *(_QWORD *)(v11 + 8) = v17;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v16 = v16;
    v18 = *(void **)(a1 + 72);
    if ( v18 )
    {
      v19 = (unsigned int)GrepW32PidFromW32Process(*(PEPROCESS **)(a1 + 264));
      Gre::MapViewOfSectionObj::Unmap(v19, v18);
    }
  }
  v20 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v20 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  v21 = (_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = 0LL;
  v22 = (_QWORD *)(a1 + 256);
  if ( v20 )
  {
LABEL_29:
    v25 = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    if ( v25 )
    {
      v21 = v22;
      if ( !*v25 )
        v25 = 0LL;
    }
    v26 = v25 + 28;
    v27 = (_QWORD *)(a1 + 528);
    v28 = *v26;
    if ( *(_QWORD **)(*v26 + 8LL) == v26 )
    {
      *v27 = v28;
      *(_QWORD *)(a1 + 536) = v26;
      *(_QWORD *)(v28 + 8) = v27;
      *v26 = v27;
      *v21 = GreGetCurrentThread();
      v30 = PsGetCurrentProcessWin32Process(v29);
      if ( v30 )
        v30 &= -(__int64)(*(_QWORD *)v30 != 0LL);
      *(_QWORD *)(a1 + 264) = v30;
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v31 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        *(_QWORD *)(a1 + 72) = v2;
        if ( v31 )
          *(_QWORD *)(a1 + 80) = v2 + (unsigned int)(*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88));
        else
          *(_QWORD *)(a1 + 80) = v2;
      }
      SEMOBJ<36>::vUnlock(&v37);
      SEMOBJ<36>::vUnlock(&v37);
      return 0LL;
    }
LABEL_42:
    __fastfail(3u);
  }
  v23 = *(unsigned int *)(a1 + 64);
  v24 = *(_QWORD *)(a1 + 248);
  v32[1] = 0LL;
  v33 = 0LL;
  v32[0] = 0LL;
  v35 = 0LL;
  v36 = 5;
  v39 = 0LL;
  v38 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (int)MmMapViewOfSection(v24, CurrentProcess, &v33, 0LL, v23, &v39, &v38, 2, 0x400000, 4) >= 0 )
  {
    v2 = v33;
    v22 = (_QWORD *)(a1 + 256);
    goto LABEL_29;
  }
  SEMOBJ<36>::vUnlock(&v37);
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)v4);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)v4);
  if ( v36 != 5 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v32);
  SEMOBJ<36>::vUnlock(&v37);
  return 2LL;
}
