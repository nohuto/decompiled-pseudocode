/*
 * XREFs of ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730
 * Callers:
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     vCleanupPrivateFonts @ 0x140023B80 (vCleanupPrivateFonts.c)
 *     vCleanupUMWindowlessSprite @ 0x140023BB4 (vCleanupUMWindowlessSprite.c)
 *     IsvCleanupPrivateFontsSupported @ 0x140023BF0 (IsvCleanupPrivateFontsSupported.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     IsvCleanupUMWindowlessSpriteSupported @ 0x140023C80 (IsvCleanupUMWindowlessSpriteSupported.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14002777C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1400E59F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x14017DE9C (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GetgpniFontsDirectoryAndScratch @ 0x1401C098C (GetgpniFontsDirectoryAndScratch.c)
 *     IsGetgpniFontsDirectoryAndScratchSupported @ 0x1401C4734 (IsGetgpniFontsDirectoryAndScratchSupported.c)
 *     UmfdSessionUninitialize @ 0x1401C4EF0 (UmfdSessionUninitialize.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 GrepCloseCurrentProcessPreserveObjectReference(void)
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r15
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rdx
  unsigned int j; // ebx
  int v17; // r8d
  struct OBJECT *v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v21; // r12
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v29; // r8
  int v30; // ebx
  int v31; // esi
  unsigned int i; // r14d
  _QWORD *v33; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  int (*v35)(void); // rax
  void (*v36)(void); // rax
  unsigned int *v37; // rdx
  unsigned int *v38; // rdx
  unsigned int *v39; // rdx
  __int64 v40; // r8
  struct OBJECT *v41; // rax
  unsigned int *v42; // rdx
  __int64 v43; // [rsp+30h] [rbp-20h] BYREF
  int v44; // [rsp+38h] [rbp-18h]
  struct OBJECT *v45; // [rsp+90h] [rbp+40h] BYREF
  HSURF v46; // [rsp+98h] [rbp+48h] BYREF
  PVOID Buffer; // [rsp+A0h] [rbp+50h] BYREF

  v0 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = *(_QWORD *)(W32GetSessionState(v1) + 88);
  if ( *(_DWORD *)(v3 + 3112) )
  {
    v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24);
    v35 = *(int (**)(void))(v2 + 2800);
    if ( v35 )
    {
      if ( v35() >= 0 )
      {
        v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24);
        v36 = *(void (**)(void))(v2 + 2808);
        if ( v36 )
          v36();
      }
    }
  }
  if ( *(_DWORD *)(v3 + 3112) )
  {
    v37 = *(unsigned int **)(v3 + 3888);
    if ( v37 )
    {
      HmgDecrementShareReferenceCount(v3, v37);
      *(_QWORD *)(v3 + 3888) = 0LL;
    }
    v38 = *(unsigned int **)(v3 + 3904);
    if ( v38 )
    {
      HmgDecrementShareReferenceCount(v3, v38);
      *(_QWORD *)(v3 + 3904) = 0LL;
      *(_QWORD *)(v3 + 3896) = 0LL;
    }
    v39 = *(unsigned int **)(v3 + 3880);
    if ( v39 )
    {
      HmgDecrementShareReferenceCount(v3, v39);
      *(_QWORD *)(v3 + 3880) = 0LL;
    }
    v40 = *(_QWORD *)(v3 + 144);
    if ( v40 )
    {
      HANDLELOCK::HANDLELOCK(&v43, (unsigned int *)v3, v40, 1);
      if ( v44 )
      {
        v41 = HANDLELOCK::pObj((HANDLELOCK *)&v43);
        --*((_DWORD *)v41 + 2);
        *(_QWORD *)(v3 + 144) = 0LL;
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v43);
    }
    v42 = *(unsigned int **)(v3 + 2320);
    if ( v42 )
    {
      HmgDecrementShareReferenceCount(v3, v42);
      *(_QWORD *)(v3 + 2320) = 0LL;
    }
  }
  v4 = *(_QWORD **)(W32GetSessionState(v2) + 88);
  GreAcquireSemaphore<19,>(v4);
  v5 = v4[494];
  if ( v5 )
  {
    v29 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 3536);
    ++*(_DWORD *)(v5 + 8);
    TrackObjectReferenceIncrement((__int64)v4, 1u, v29);
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v4);
    do
    {
      if ( (*(_DWORD *)(v5 + 40) & 0x8000) != 0 )
      {
        v33 = *(_QWORD **)(*(_QWORD *)(v5 + 1776) + 56LL);
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( v33 == CurrentProcessWin32Process )
          *(_QWORD *)(*(_QWORD *)(v5 + 1776) + 56LL) = 0LL;
      }
      v5 = hdevEnumerate<0>(v5);
    }
    while ( v5 );
  }
  else
  {
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *v4);
  }
  if ( *(_DWORD *)(v3 + 3112) )
  {
    vReleaseCurrentpMapProcForSurfaces();
    *(_QWORD *)(v3 + 4376) = 0LL;
    *(_QWORD *)(v3 + 3872) = 0LL;
    *(_QWORD *)(v3 + 2328) = 0LL;
    *(_QWORD *)(v3 + 4256) = 0LL;
    *(_QWORD *)(v3 + 4264) = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    Buffer = 0LL;
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported() >= 0 )
    {
      GetgpniFontsDirectoryAndScratch(&v45, &v46, &Buffer);
      if ( *(_QWORD *)v45 )
        GreDeleteFastMutex(*(PVOID *)v45);
      if ( *(_QWORD *)v46 )
        GreDeleteFastMutex(*(PVOID *)v46);
      if ( Buffer )
        GreDeleteFastMutex(Buffer);
    }
    UmfdSessionUninitialize();
  }
  else if ( (int)IsvCleanupPrivateFontsSupported(v6) >= 0 )
  {
    vCleanupPrivateFonts(v7);
  }
  DxLddmCleanupAtProcessDestroy(v0);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported(v8) >= 0 )
    vCleanupUMWindowlessSprite((unsigned int)v0);
  v9 = 0;
  v10 = 0;
  if ( HmgIsProcessCleanupRequiredByW32Pid(v0) )
  {
    while ( 1 )
    {
      v45 = 0LL;
      v46 = 0LL;
      v30 = 0;
      v31 = 0;
      for ( i = HmgNextOwned(0, v0, (struct HOBJ__ **)&v46, &v45); i; i = HmgNextOwned(
                                                                            i,
                                                                            v0,
                                                                            (struct HOBJ__ **)&v46,
                                                                            &v45) )
      {
        ++v30;
        v31 += *((_DWORD *)v45 + 2) + *((__int16 *)v45 + 6);
        GrepDeleteOneGdiObject((struct _ERESOURCE **)v3, (struct OBJECT *)v46, v45);
      }
      if ( v30 == v9 && v31 == v10 )
        break;
      v9 = v30;
      v10 = v31;
    }
  }
  vGarbageCollectObjects(v11);
  if ( !*(_DWORD *)(v3 + 3112) )
  {
    SEMOBJ<20>::SEMOBJ<20>((HSEMAPHORE *)&Buffer);
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v13 = *(_QWORD *)(v3 + 8);
    v45 = 0LL;
    v14 = CurrentProcessId & 0xFFFFFFFC;
    for ( j = (*(__int64 (__fastcall **)(__int64, _QWORD, struct OBJECT **))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v45);
          j;
          j = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct OBJECT **))(**(_QWORD **)(v3 + 8) + 32LL))(
                *(_QWORD *)(v3 + 8),
                j,
                &v45) )
    {
      v18 = v45;
      v19 = 0LL;
      if ( *((char *)v45 + 15) < 0 && *((_BYTE *)v45 + 14) == 5 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 8) + 96LL))(*(_QWORD *)(v3 + 8), j);
        v18 = v45;
        v22 = *(_QWORD *)v21;
        v19 = (unsigned __int16)j | (unsigned __int64)(*((unsigned __int16 *)v45 + 6) << 16);
        if ( (_DWORD)v19 != (unsigned int)*(_QWORD *)v21 )
          goto LABEL_43;
        if ( !v19 )
          continue;
        if ( *(_DWORD *)(v21 + 640) == v14 )
        {
          v23 = *(_QWORD **)(W32GetSessionState(*((unsigned __int8 *)v45 + 12)) + 88);
          v46 = (HSURF)(*v23 + 1512LL);
          GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v24, (HSEMAPHORE)v46);
          v25 = HmgPentryFromPobj((__int64)v23);
          *(_BYTE *)(v25 + 15) &= ~0x80u;
          *(_DWORD *)(v21 + 640) = 0;
          SEMOBJ<20>::vUnlock((HSEMAPHORE *)&v46, v26, v27);
          v18 = v45;
        }
      }
      if ( !*((_BYTE *)v18 + 14) || (*((_DWORD *)v18 + 2) & 0xFFFFFFFE) != v14 )
        continue;
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 8) + 96LL))(*(_QWORD *)(v3 + 8), j);
      if ( v19 )
        goto LABEL_27;
      v22 = *(_QWORD *)v28;
      v19 = (unsigned __int16)j | (unsigned __int64)(*((unsigned __int16 *)v45 + 6) << 16);
      if ( (_DWORD)v19 != (unsigned int)*(_QWORD *)v28 )
      {
LABEL_43:
        GrepCaptureLiveMemoryDump(400LL, 47LL, (__int64)v45, v22, v19, 0);
        continue;
      }
      if ( v19 )
      {
LABEL_27:
        *(_WORD *)(v28 + 14) |= 0x40u;
        if ( (unsigned int)HmgSetOwner(v19, 2147483666LL, *((unsigned __int8 *)v45 + 14)) )
          _InterlockedIncrement((volatile signed __int32 *)(v3 + 1844));
      }
    }
    SEMOBJ<20>::vUnlock((HSEMAPHORE *)&Buffer, v15, v17);
  }
  return 1LL;
}
