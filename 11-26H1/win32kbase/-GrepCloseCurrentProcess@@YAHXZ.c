/*
 * XREFs of ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C
 * Callers:
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     vCleanupPrivateFonts @ 0x140023B80 (vCleanupPrivateFonts.c)
 *     vCleanupUMWindowlessSprite @ 0x140023BB4 (vCleanupUMWindowlessSprite.c)
 *     IsvCleanupPrivateFontsSupported @ 0x140023BF0 (IsvCleanupPrivateFontsSupported.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     IsvCleanupUMWindowlessSpriteSupported @ 0x140023C80 (IsvCleanupUMWindowlessSpriteSupported.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14002777C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x14017DE9C (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GetgpniFontsDirectoryAndScratch @ 0x1401C098C (GetgpniFontsDirectoryAndScratch.c)
 *     IsGetgpniFontsDirectoryAndScratchSupported @ 0x1401C4734 (IsGetgpniFontsDirectoryAndScratchSupported.c)
 *     UmfdSessionUninitialize @ 0x1401C4EF0 (UmfdSessionUninitialize.c)
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401F1DF0 (EngLockDriverObj.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1401FA98C (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1401FAB18 (-vCleanupSurfaces@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1401FABE8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     GreDeleteClientObj @ 0x140248BDC (GreDeleteClientObj.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 GrepCloseCurrentProcess(void)
{
  unsigned __int64 v0; // rdi
  unsigned int v1; // r15d
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r14
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  int (*v14)(void); // rax
  __int64 v15; // rcx
  void (*v16)(void); // rax
  __int64 v17; // rcx
  int (*v18)(void); // rax
  __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD); // rax
  unsigned int i; // ecx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int (*v27)(void); // rax
  __int64 v28; // rcx
  void (__fastcall *v29)(_QWORD); // rax
  __int64 v30; // rcx
  PVOID v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int j; // ecx
  HDRVOBJ v36; // rbx
  __int64 v37; // rcx
  int (*v38)(void); // rax
  unsigned int v39; // esi
  HDRVOBJ hdo; // [rsp+60h] [rbp+40h] BYREF
  struct OBJECT *v42; // [rsp+68h] [rbp+48h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+50h] BYREF

  v0 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v1 = 1;
  v3 = *(_QWORD *)(W32GetSessionState(v2) + 88);
  v5 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  GreAcquireSemaphore<19,>((struct _ERESOURCE **)v5, v6, v7);
  v8 = *(_QWORD *)(v5 + 3952);
  v9 = 0LL;
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 8);
    v9 = v8;
    TrackObjectReferenceIncrement(
      v5,
      1u,
      *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 3536));
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)v5,
    v8);
  for ( ; v9; v9 = hdevEnumerate<0>(v9) )
  {
    if ( (*(_DWORD *)(v9 + 40) & 0x8000) != 0 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 1776) + 56LL);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( v11 == CurrentProcessWin32Process )
        *(_QWORD *)(*(_QWORD *)(v9 + 1776) + 56LL) = 0LL;
    }
  }
  if ( *(_DWORD *)(v3 + 3112) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 24) + 2288LL);
    if ( v14 )
    {
      if ( v14() >= 0 )
      {
        v16 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 24) + 2296LL);
        if ( v16 )
          v16();
      }
    }
  }
  vCleanupDCs((unsigned int)v0);
  MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 24) + 2320LL);
  if ( v18 )
  {
    if ( v18() >= 0 )
    {
      v20 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 24) + 2328LL);
      if ( v20 )
        v20((unsigned int)v0);
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  if ( HmgIsProcessCleanupRequiredByW32Pid(v0) )
  {
    hdo = 0LL;
    for ( i = 0; ; i = v22 )
    {
      v22 = HmgNextOwned(i, v0, (struct HOBJ__ **)&hdo, &v42);
      if ( !v22 )
        break;
      if ( (BYTE2(hdo) & 0x1F) == 0x10 )
        bDeleteBrush((struct HOBJ__ *)hdo, 1, 0);
    }
  }
  DxLddmCleanupAtProcessDestroy((unsigned int)v0);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported(v23) >= 0 )
    vCleanupUMWindowlessSprite((unsigned int)v0);
  if ( *(_DWORD *)(v3 + 3112) )
  {
    vReleaseCurrentpMapProcForSurfaces(v24);
    *(_QWORD *)(v3 + 4376) = 0LL;
    *(_QWORD *)(v3 + 3872) = 0LL;
    *(_QWORD *)(v3 + 3904) = 0LL;
    *(_QWORD *)(v3 + 3896) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(5u);
  vCleanupSurfaces(v0);
  vGarbageCollectObjects(v25);
  if ( *(_DWORD *)(v3 + 3112) )
    *(_QWORD *)(v3 + 2328) = 0LL;
  MultiUserGreCleanupHmgRemoveAllLocks(9u);
  vCleanupLCSPs(v0);
  if ( *(_DWORD *)(v3 + 3112) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    v27 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26) + 24) + 2352LL);
    if ( v27 )
    {
      if ( v27() >= 0 )
      {
        v29 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28) + 24) + 2360LL);
        if ( v29 )
          v29((unsigned int)v0);
      }
    }
    if ( *(_DWORD *)(v3 + 3112) )
    {
      *(_QWORD *)(v3 + 4256) = 0LL;
      *(_QWORD *)(v3 + 4264) = 0LL;
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(4u);
  MultiUserGreCleanupHmgRemoveAllLocks(0);
  vCleanupRegionsAndPaths(v0);
  if ( *(_DWORD *)(v3 + 3112) )
    goto LABEL_42;
  if ( (int)IsvCleanupPrivateFontsSupported(v30) >= 0 )
    vCleanupPrivateFonts(v30);
  if ( *(_DWORD *)(v3 + 3112) )
  {
LABEL_42:
    hdo = 0LL;
    v42 = 0LL;
    Buffer = 0LL;
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported(v30) >= 0 )
    {
      GetgpniFontsDirectoryAndScratch((__int64)&hdo, (__int64)&v42, (__int64)&Buffer);
      if ( *(_QWORD *)hdo )
        GreDeleteFastMutex(*(char **)hdo, v32, v33, v34);
      if ( *(_QWORD *)v42 )
        GreDeleteFastMutex(*(char **)v42, v32, v33, v34);
      v31 = Buffer;
      if ( Buffer )
        GreDeleteFastMutex((char *)Buffer, v32, v33, v34);
    }
    UmfdSessionUninitialize((__int64)v31);
  }
  vRemoveRefPalettes(v0);
  hdo = 0LL;
  if ( HmgIsProcessCleanupRequiredByW32Pid(v0) )
  {
    for ( j = 0; ; j = v39 )
    {
      v39 = HmgNextOwned(j, v0, (struct HOBJ__ **)&hdo, &v42);
      if ( !v39 )
        break;
      v36 = hdo;
      v37 = (unsigned int)hdo >> 16;
      LOBYTE(v37) = BYTE2(hdo) & 0x1F;
      if ( (BYTE2(hdo) & 0x1F) == 6 )
      {
        v38 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 24) + 2416LL);
        if ( v38 && v38() >= 0 )
          GreDeleteClientObj(v36);
      }
      else if ( (_BYTE)v37 == 8 )
      {
        v1 = bDeletePalette((__int64)hdo);
      }
      else if ( (_BYTE)v37 == 28 )
      {
        EngLockDriverObj(hdo);
        EngDeleteDriverObj(v36, 1, 1);
      }
      else
      {
        v1 = 0;
      }
    }
  }
  return v1;
}
