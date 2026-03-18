/*
 * XREFs of MultiUserNtGreCleanup @ 0x14006DBA4
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x14001E6A0 (FreeThreadBufferWithTag.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x14006DA20 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     DrvNotifySessionStateChange @ 0x14006DAB0 (DrvNotifySessionStateChange.c)
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14006DB80 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x14006E100 (-FreeSessionGlobalsArea@Base@Gre@@YAXXZ.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14006E15C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x14006EB68 (-MultiUserGreHmgOwnAll@@YAXXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x140092D10 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x14019BAF0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1401A0388 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x1401A0770 (-Destroy@ScanLookAsideList@@QEAAXXZ.c)
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x1401A1284 (-UninitializeTypeIsolation@@YAXXZ.c)
 *     ?CleanupRustCode@@YAXXZ @ 0x1401A1DA0 (-CleanupRustCode@@YAXXZ.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1401D433C (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MultiUserNtGreCleanup(Gre::Base *a1)
{
  __int64 v1; // rcx
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  int (*v4)(void); // rax
  void (*v5)(void); // rax
  int (*v6)(void); // rax
  void (*v7)(void); // rax
  char *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  char *v12; // rcx
  char *v13; // rcx
  char *v14; // rcx
  int (*v15)(void); // rax
  __int64 (*v16)(void); // rax
  char **v17; // rdi
  void *v18; // rcx
  int (*v19)(void); // rax
  __int64 (*v20)(void); // rax
  struct PDEV *v21; // rax
  int (*v22)(void); // rax
  __int64 (*v23)(void); // rax
  struct PDEV *v24; // rax
  __int64 v25; // rcx
  char *v26; // rcx
  char *v27; // rcx
  char *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  PVOID *v31; // rsi
  __int64 v32; // rbp
  char *v33; // rcx
  char *v34; // rcx
  char *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  char **v41; // rbx
  __int64 v42; // rdi
  char *v43; // rsi
  __int64 UserSessionState; // rax
  int (*v45)(void); // rax
  void (*v46)(void); // rax
  int (*v47)(void); // rax
  void (*v48)(void); // rax
  Gre::Base *v49; // rcx
  int (*v50)(void); // rax
  void (*v51)(void); // rax

  if ( Gre::Base::IsSessionGlobalsAreaAllocated(a1) )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v1) + 88);
    if ( *(_BYTE *)(v3 + 8) )
    {
      *(_DWORD *)(v3 + 3032) = 1;
      MultiUserGreHmgOwnAll();
      v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1072LL);
      if ( v4 )
      {
        if ( v4() >= 0 )
        {
          v5 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1080LL);
          if ( v5 )
            v5();
        }
      }
      if ( *(_QWORD *)(v3 + 5672) )
        GrepCloseCurrentProcess();
      v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1120LL);
      if ( v6 )
      {
        if ( v6() >= 0 )
        {
          v7 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1128LL);
          if ( v7 )
            v7();
        }
      }
      v8 = *(char **)(v3 + 1736);
      if ( v8 )
      {
        GreDeleteFastMutex(v8);
        *(_QWORD *)(v3 + 1736) = 0LL;
      }
      v9 = *(char **)(v3 + 2840);
      if ( v9 )
      {
        GreDeleteFastMutex(v9);
        *(_QWORD *)(v3 + 2840) = 0LL;
      }
      v10 = 0LL;
      v11 = 8LL;
      do
      {
        v9 = *(char **)(v10 + *(_QWORD *)(W32GetSessionState(v9) + 88) + 4296);
        if ( v9 )
          FreeThreadBufferWithTag((__int64)v9);
        v10 += 32LL;
        --v11;
      }
      while ( v11 );
      v12 = *(char **)(v3 + 32);
      if ( v12 )
        GreDeleteFastMutex(v12);
      v13 = *(char **)(v3 + 24);
      if ( v13 )
        GreDeleteFastMutex(v13);
      v14 = *(char **)(v3 + 3760);
      if ( v14 )
      {
        GreDeleteFastMutex(v14);
        *(_QWORD *)(v3 + 3760) = 0LL;
      }
      v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1104LL);
      if ( v15 && v15() >= 0 )
      {
        v16 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1112LL);
        v17 = v16 ? (char **)v16() : 0LL;
        if ( *v17 )
        {
          GreDeleteFastMutex(*v17);
          *v17 = 0LL;
        }
      }
      v18 = *(void **)(*(_QWORD *)(v3 + 4232) + 24LL);
      if ( v18 )
        ZwClose(v18);
      v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1136LL);
      if ( v19 )
      {
        if ( v19() >= 0 )
        {
          v20 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1144LL);
          if ( v20 )
          {
            v21 = (struct PDEV *)v20();
            if ( v21 )
              PDEV::Free(v21, 0);
          }
        }
      }
      v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1152LL);
      if ( v22 )
      {
        if ( v22() >= 0 )
        {
          v23 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1160LL);
          if ( v23 )
          {
            v24 = (struct PDEV *)v23();
            if ( v24 )
              PDEV::Free(v24, 0);
          }
        }
      }
      MultiUserGreCleanupDrivers();
      MultiUserDrvCleanupGraphicsDeviceList(v25);
      DrvNotifySessionStateChange(1u);
      v26 = *(char **)(v3 + 2192);
      if ( v26 )
      {
        GreDeleteFastMutex(v26);
        *(_QWORD *)(v3 + 2192) = 0LL;
      }
      v27 = *(char **)(v3 + 2208);
      if ( v27 )
      {
        GreDeleteFastMutex(v27);
        *(_QWORD *)(v3 + 2208) = 0LL;
      }
      v28 = *(char **)(v3 + 2200);
      if ( v28 )
      {
        GreDeleteFastMutex(v28);
        *(_QWORD *)(v3 + 2200) = 0LL;
      }
      UninitializeTypeIsolation();
      v30 = *(_QWORD *)(W32GetSessionState(v29) + 88);
      if ( *(_QWORD *)(v30 + 5688) )
      {
        v31 = (PVOID *)(v30 + 5704);
        v32 = 3LL;
        do
        {
          if ( *v31 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v31);
          v31 += 2;
          --v32;
        }
        while ( v32 );
        ExFreePoolWithTag(*(PVOID *)(v30 + 5688), 0);
        *(_QWORD *)(v30 + 5688) = 0LL;
      }
      v33 = *(char **)(v3 + 1144);
      if ( v33 )
      {
        GreDeleteFastMutex(v33);
        *(_QWORD *)(v3 + 1144) = 0LL;
      }
      v34 = *(char **)(v3 + 1152);
      if ( v34 )
      {
        GreDeleteFastMutex(v34);
        *(_QWORD *)(v3 + 1152) = 0LL;
      }
      while ( 1 )
      {
        v35 = *(char **)(v3 + 3816);
        if ( !v35 )
          break;
        *(_QWORD *)(v3 + 3816) = *(_QWORD *)v35;
        GreDeleteFastMutex(v35);
      }
      v36 = *(void **)(v3 + 5672);
      if ( v36 )
      {
        GdiHandleManager::Destroy(v36);
        *(_QWORD *)(v3 + 5672) = 0LL;
      }
      v37 = *(void **)(v3 + 1768);
      if ( v37 )
      {
        MmUnmapViewInSessionSpace(v37);
        *(_QWORD *)(v3 + 1768) = 0LL;
      }
      v38 = *(void **)(v3 + 2184);
      if ( v38 )
      {
        ObfDereferenceObject(v38);
        *(_QWORD *)(v3 + 2184) = 0LL;
      }
      ScanLookAsideList::Destroy((ScanLookAsideList *)(v3 + 4136));
      v41 = (char **)(v3 + 1792);
      v42 = 31LL;
      do
      {
        v43 = *v41;
        if ( *v41 )
        {
          UserSessionState = W32GetUserSessionState(v40, v39);
          NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
            v43);
          *v41 = 0LL;
        }
        ++v41;
        --v42;
      }
      while ( v42 );
      v45 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1184LL);
      if ( v45 )
      {
        if ( v45() >= 0 )
        {
          v46 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1192LL);
          if ( v46 )
            v46();
        }
      }
      v47 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 848LL);
      if ( v47 )
      {
        if ( v47() >= 0 )
        {
          v48 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 856LL);
          if ( v48 )
            v48();
        }
      }
      MultiUserGreCleanupEngResources();
      v49 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable() + 24);
      v50 = (int (*)(void))*((_QWORD *)v49 + 345);
      if ( v50 )
      {
        if ( v50() >= 0 )
        {
          v49 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable() + 24);
          v51 = (void (*)(void))*((_QWORD *)v49 + 346);
          if ( v51 )
            v51();
        }
      }
      Gre::Base::FreeSessionGlobalsArea(v49);
      CleanupRustCode();
    }
    else
    {
      Gre::Base::FreeSessionGlobalsArea(v2);
    }
  }
  return 1LL;
}
