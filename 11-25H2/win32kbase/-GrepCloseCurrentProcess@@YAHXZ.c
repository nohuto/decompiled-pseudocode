/*
 * XREFs of ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HmgNextOwned @ 0x140045150 (HmgNextOwned.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x14006E4E4 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     HmgSetLock @ 0x14006ED3C (HmgSetLock.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140085148 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x140085594 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1400855F0 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140085920 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140085DF4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x140085EE8 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x140086260 (-vCleanupSurfaces@@YAXK@Z.c)
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     EngDeleteDriverObj @ 0x1401D0A50 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401D0B60 (EngLockDriverObj.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 GrepCloseCurrentProcess(void)
{
  unsigned int v0; // r15d
  unsigned __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 i; // rax
  PDEV *v5; // rdi
  int (*v6)(void); // rax
  void (__fastcall *v7)(_QWORD); // rax
  __int64 v8; // rcx
  int (*v9)(void); // rax
  void (__fastcall *v10)(_QWORD); // rax
  int (*v11)(void); // rax
  void (*v12)(void); // rax
  unsigned int v13; // ecx
  unsigned int Owned; // edi
  int (*v16)(void); // rax
  void (__fastcall *v17)(HDRVOBJ *, char ***, PVOID *); // rax
  void (*v18)(void); // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 CurrentProcessWin32Process; // rax
  int (*v22)(void); // rax
  void (__fastcall *v23)(_QWORD); // rax
  HDRVOBJ v24; // rbx
  char v25; // cl
  int (*v26)(void); // rax
  void (*v27)(void); // rax
  int (*v28)(void); // rax
  void (__fastcall *v29)(HDRVOBJ); // rax
  HDRVOBJ hdo; // [rsp+60h] [rbp+40h] BYREF
  char **v31; // [rsp+68h] [rbp+48h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+50h] BYREF

  v0 = 1;
  v1 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = *(_QWORD *)(W32GetSessionState(v2) + 88);
  for ( i = hdevEnumerate<0>(0LL); ; i = hdevEnumerate<0>(v5) )
  {
    v5 = (PDEV *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      v19 = *(_QWORD *)(i + 1776);
      v20 = *(_QWORD *)(v19 + 56);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( v20 == CurrentProcessWin32Process )
        *(_QWORD *)(*((_QWORD *)v5 + 222) + 56LL) = 0LL;
    }
  }
  if ( *(_DWORD *)(v3 + 3032) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2312LL);
    if ( v26 )
    {
      if ( v26() >= 0 )
      {
        v27 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2320LL);
        if ( v27 )
          v27();
      }
    }
  }
  vCleanupDCs(v1);
  MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2328LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v7 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2336LL);
      if ( v7 )
        v7((unsigned int)v1);
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  vCleanupBrushes(v1);
  DxLddmCleanupAtProcessDestroy(v1);
  v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
  v9 = *(int (**)(void))(v8 + 2344);
  if ( v9 )
  {
    if ( v9() >= 0 )
    {
      v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
      v10 = *(void (__fastcall **)(_QWORD))(v8 + 2352);
      if ( v10 )
        v10((unsigned int)v1);
    }
  }
  if ( *(_DWORD *)(v3 + 3032) )
  {
    vReleaseCurrentpMapProcForSurfaces(v8);
    *(_QWORD *)(v3 + 4264) = 0LL;
    *(_QWORD *)(v3 + 3768) = 0LL;
    *(_QWORD *)(v3 + 3800) = 0LL;
    *(_QWORD *)(v3 + 3792) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(5u);
  vCleanupSurfaces(v1);
  vGarbageCollectObjects();
  if ( *(_DWORD *)(v3 + 3032) )
    *(_QWORD *)(v3 + 2240) = 0LL;
  MultiUserGreCleanupHmgRemoveAllLocks(9u);
  vCleanupLCSPs(v1);
  if ( *(_DWORD *)(v3 + 3032) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2360LL);
    if ( v22 )
    {
      if ( v22() >= 0 )
      {
        v23 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2368LL);
        if ( v23 )
          v23((unsigned int)v1);
      }
    }
    if ( *(_DWORD *)(v3 + 3032) )
    {
      *(_QWORD *)(v3 + 4152) = 0LL;
      *(_QWORD *)(v3 + 4160) = 0LL;
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(4u);
  MultiUserGreCleanupHmgRemoveAllLocks(0);
  vCleanupRegionsAndPaths(v1);
  if ( *(_DWORD *)(v3 + 3032) )
    goto LABEL_28;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2376LL);
  if ( v11 )
  {
    if ( v11() >= 0 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2384LL);
      if ( v12 )
        v12();
    }
  }
  if ( *(_DWORD *)(v3 + 3032) )
  {
LABEL_28:
    hdo = 0LL;
    v31 = 0LL;
    Buffer = 0LL;
    v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2392LL);
    if ( v16 && v16() >= 0 )
    {
      v17 = *(void (__fastcall **)(HDRVOBJ *, char ***, PVOID *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                + 2400LL);
      if ( v17 )
        v17(&hdo, &v31, &Buffer);
      if ( *(_QWORD *)hdo )
        GreDeleteFastMutex(*(char **)hdo);
      if ( *v31 )
        GreDeleteFastMutex(*v31);
      if ( Buffer )
        GreDeleteFastMutex((char *)Buffer);
    }
    v18 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1376LL);
    if ( v18 )
      v18();
  }
  vRemoveRefPalettes(v1);
  v13 = 0;
  hdo = 0LL;
  while ( 1 )
  {
    Owned = HmgNextOwned(v13, v1, (unsigned __int64 *)&hdo);
    if ( !Owned )
      break;
    v24 = hdo;
    v25 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v0 = bDeletePalette(hdo);
    }
    else if ( v25 == 6 )
    {
      v28 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2408LL);
      if ( v28 )
      {
        if ( v28() >= 0 )
        {
          v29 = *(void (__fastcall **)(HDRVOBJ))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2416LL);
          if ( v29 )
            v29(v24);
        }
      }
    }
    else if ( v25 == 28 )
    {
      HmgSetLock((__int64)hdo);
      EngLockDriverObj(v24);
      EngDeleteDriverObj(v24, 1, 1);
    }
    else
    {
      v0 = 0;
    }
    v13 = Owned;
  }
  return v0;
}
