/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x140024660 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140024160 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400241E0 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024A94 (--$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140024B80 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x140024DE0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x140024E08 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x140024EA0 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  struct _GRETHREAD **v14; // r12
  struct _GRETHREAD **v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  void *v27; // rdi
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  _QWORD v32[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-20h] BYREF
  int v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+48h] BYREF

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
    v12 = *(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 4);
    KeReleaseMutex(*(PRKMUTEX *)(v12 + 64), 0);
    KeWaitForSingleObject(*(PVOID *)(v4 + 40), UserRequest, 0, 0, 0LL);
  }
  v6 = *(_DWORD *)(v4 + 8) + 1;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  if ( v6 > *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v6;
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 40) + 64LL), 0);
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v8 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v7) + 88) + 936LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<36>();
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v11 = *(_QWORD *)(a1 + 264);
  if ( v11 == v10 )
  {
    if ( v8 )
      GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(v11, v8);
    return 1LL;
  }
  if ( v11 )
  {
    v24 = (_QWORD *)(a1 + 528);
    v25 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v25 + 8) != a1 + 528 )
      goto LABEL_32;
    v26 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v26 != v24 )
      goto LABEL_32;
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v24 = v24;
    v27 = *(void **)(a1 + 72);
    if ( v27 )
    {
      v28 = (unsigned int)GrepW32PidFromW32Process(*(PEPROCESS **)(a1 + 264));
      Gre::MapViewOfSectionObj::Unmap(v28, v27);
    }
  }
  v13 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v13 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  v14 = (struct _GRETHREAD **)(a1 + 256);
  *(_QWORD *)(a1 + 256) = 0LL;
  v15 = (struct _GRETHREAD **)(a1 + 256);
  if ( v13 )
  {
LABEL_28:
    v20 = (_QWORD *)PsGetCurrentProcessWin32Process();
    if ( v20 )
    {
      v14 = v15;
      if ( !*v20 )
        v20 = 0LL;
    }
    v21 = v20 + 28;
    v22 = (__int64 *)(a1 + 528);
    v23 = *v21;
    if ( *(__int64 **)(*v21 + 8) != v21 )
LABEL_32:
      __fastfail(3u);
    *v22 = v23;
    *(_QWORD *)(a1 + 536) = v21;
    *(_QWORD *)(v23 + 8) = v22;
    *v21 = (__int64)v22;
    *v14 = GreGetCurrentThread((__int64)v22, v23);
    v29 = PsGetCurrentProcessWin32Process();
    if ( v29 )
    {
      v30 = -*(_QWORD *)v29;
      v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
    }
    *(_QWORD *)(a1 + 264) = v29;
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v31 = (*(_BYTE *)(a1 + 102) & 1) == 0;
      *(_QWORD *)(a1 + 72) = v2;
      if ( v31 )
      {
        v30 = v2 + (unsigned int)(*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88));
        *(_QWORD *)(a1 + 80) = v30;
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v2;
      }
    }
    if ( v8 )
      GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(v30, v8);
    return 0LL;
  }
  v16 = *(unsigned int *)(a1 + 64);
  v17 = *(_QWORD *)(a1 + 248);
  v32[1] = 0LL;
  v32[0] = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v34 = 6;
  v36 = 0LL;
  v35 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (int)MmMapViewOfSection(v17, CurrentProcess, v33, 0LL, v16, &v36, &v35, 2, 0x400000, 4) >= 0 )
  {
    v2 = v33[0];
    v15 = (struct _GRETHREAD **)(a1 + 256);
    goto LABEL_28;
  }
  if ( v8 )
    GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(v19, v8);
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)v4);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)v4);
  if ( v34 != 6 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v32);
  return 2LL;
}
