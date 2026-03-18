/*
 * XREFs of MultiUserNtGreCleanup @ 0x1401C0C3C
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x140008500 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x14002CDB0 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1400C61E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x140170C6C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x14017CE54 (-MultiUserGreHmgOwnAll@@YAXXZ.c)
 *     ?UninitializeReferenceTracker@@YAXXZ @ 0x14017E898 (-UninitializeReferenceTracker@@YAXXZ.c)
 *     DrvNotifySessionStateChange @ 0x1401804C0 (DrvNotifySessionStateChange.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?MultiUserGreDeleteXLATE@@YAXXZ @ 0x140186794 (-MultiUserGreDeleteXLATE@@YAXXZ.c)
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x14018FA38 (-UninitializeTypeIsolation@@YAXXZ.c)
 *     ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x140191170 (-FreeSessionGlobalsArea@Base@Gre@@YAXXZ.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401B5D90 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x1401C3AA4 (-Destroy@ScanLookAsideList@@QEAAXXZ.c)
 *     ?CleanupRustCode@@YAXXZ @ 0x1401F3D44 (-CleanupRustCode@@YAXXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MultiUserNtGreCleanup(Gre::Base *a1)
{
  __int64 v1; // rcx
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  void (*v7)(void); // rax
  int (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  void (*v13)(void); // rax
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
  int (*v21)(void); // rax
  __int64 v22; // rcx
  __int64 (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char **v27; // rdi
  void *v28; // rcx
  __int64 v29; // rcx
  int (*v30)(void); // rax
  __int64 (*v31)(void); // rax
  struct PDEV *v32; // rax
  __int64 v33; // rcx
  int (*v34)(void); // rax
  __int64 (*v35)(void); // rax
  struct PDEV *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char *v41; // rcx
  char *v42; // rcx
  char *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  char *v48; // rcx
  char *v49; // rcx
  char *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  void *v53; // rcx
  int v54; // edx
  __int64 v55; // rcx
  int v56; // r8d
  char **v57; // rbx
  __int64 v58; // rdi
  char *v59; // rsi
  __int64 UserSessionState; // rax
  __int64 v61; // rcx
  int (*v62)(void); // rax
  void (*v63)(void); // rax
  __int64 v64; // rcx
  int (*v65)(void); // rax
  void (*v66)(void); // rax
  __int64 v67; // rcx
  Gre::Base *v68; // rcx
  int (*v69)(void); // rax
  void (*v70)(void); // rax
  _QWORD v72[4]; // [rsp+20h] [rbp-38h] BYREF
  int v73; // [rsp+40h] [rbp-18h]

  if ( Gre::Base::IsSessionGlobalsAreaAllocated(a1) )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v1) + 88);
    if ( *(_BYTE *)(v3 + 96) )
    {
      *(_DWORD *)(v3 + 3112) = 1;
      MultiUserGreHmgOwnAll();
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24);
      v6 = *(int (**)(void))(v5 + 1072);
      if ( v6 )
      {
        if ( v6() >= 0 )
        {
          v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24);
          v7 = *(void (**)(void))(v5 + 1080);
          if ( v7 )
            v7();
        }
      }
      if ( *(_QWORD *)(v3 + 8) )
      {
        if ( (unsigned int)Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline() )
          GrepCloseCurrentProcessPreserveObjectReference();
        else
          GrepCloseCurrentProcess();
      }
      v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 1120LL);
      if ( v8 )
      {
        if ( v8() >= 0 )
        {
          v13 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 24) + 1128LL);
          if ( v13 )
            v13();
        }
      }
      v14 = *(char **)(v3 + 1824);
      if ( v14 )
      {
        GreDeleteFastMutex(v14, v9, v10, v11);
        *(_QWORD *)(v3 + 1824) = 0LL;
      }
      MultiUserGreDeleteXLATE((__int64)v14);
      v18 = *(char **)(v3 + 120);
      if ( v18 )
        GreDeleteFastMutex(v18, v15, v16, v17);
      v19 = *(char **)(v3 + 112);
      if ( v19 )
        GreDeleteFastMutex(v19, v15, v16, v17);
      v20 = *(char **)(v3 + 3864);
      if ( v20 )
      {
        GreDeleteFastMutex(v20, v15, v16, v17);
        *(_QWORD *)(v3 + 3864) = 0LL;
      }
      v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24) + 1104LL);
      if ( v21 && v21() >= 0 )
      {
        v23 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22) + 24) + 1112LL);
        v27 = v23 ? (char **)v23() : 0LL;
        if ( *v27 )
        {
          GreDeleteFastMutex(*v27, v24, v25, v26);
          *v27 = 0LL;
        }
      }
      v28 = *(void **)(*(_QWORD *)(v3 + 4344) + 32LL);
      if ( v28 )
        ZwClose(v28);
      v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v28) + 24);
      v30 = *(int (**)(void))(v29 + 1136);
      if ( v30 )
      {
        if ( v30() >= 0 )
        {
          v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24);
          v31 = *(__int64 (**)(void))(v29 + 1144);
          if ( v31 )
          {
            v32 = (struct PDEV *)v31();
            if ( v32 )
              PDEV::Free(v32);
          }
        }
      }
      v33 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24);
      v34 = *(int (**)(void))(v33 + 1152);
      if ( v34 )
      {
        if ( v34() >= 0 )
        {
          v33 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v33) + 24);
          v35 = *(__int64 (**)(void))(v33 + 1160);
          if ( v35 )
          {
            v36 = (struct PDEV *)v35();
            if ( v36 )
              PDEV::Free(v36);
          }
        }
      }
      MultiUserGreCleanupDrivers(v33);
      MultiUserDrvCleanupGraphicsDeviceList(v37);
      DrvNotifySessionStateChange(1u);
      v41 = *(char **)(v3 + 2280);
      if ( v41 )
      {
        GreDeleteFastMutex(v41, v38, v39, v40);
        *(_QWORD *)(v3 + 2280) = 0LL;
      }
      v42 = *(char **)(v3 + 2296);
      if ( v42 )
      {
        GreDeleteFastMutex(v42, v38, v39, v40);
        *(_QWORD *)(v3 + 2296) = 0LL;
      }
      v43 = *(char **)(v3 + 2288);
      if ( v43 )
      {
        GreDeleteFastMutex(v43, v38, v39, v40);
        *(_QWORD *)(v3 + 2288) = 0LL;
      }
      UninitializeTypeIsolation((__int64)v43);
      UninitializeReferenceTracker(v44);
      v48 = *(char **)(v3 + 1232);
      if ( v48 )
      {
        GreDeleteFastMutex(v48, v45, v46, v47);
        *(_QWORD *)(v3 + 1232) = 0LL;
      }
      v49 = *(char **)(v3 + 1240);
      if ( v49 )
      {
        GreDeleteFastMutex(v49, v45, v46, v47);
        *(_QWORD *)(v3 + 1240) = 0LL;
      }
      while ( 1 )
      {
        v50 = *(char **)(v3 + 3920);
        if ( !v50 )
          break;
        *(_QWORD *)(v3 + 3920) = *(_QWORD *)v50;
        GreDeleteFastMutex(v50, v45, v46, v47);
      }
      v51 = *(_QWORD *)(v3 + 8);
      if ( v51 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 120LL))(v51);
        *(_QWORD *)(v3 + 8) = 0LL;
      }
      v52 = *(_QWORD *)(v3 + 1856);
      if ( v52 )
      {
        v72[0] = 0LL;
        v72[1] = 0LL;
        v72[2] = v52;
        v72[3] = 0LL;
        v73 = 3;
        *(_QWORD *)(v3 + 1856) = 0LL;
        Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v72);
      }
      v53 = *(void **)(v3 + 2272);
      if ( v53 )
      {
        ObfDereferenceObject(v53);
        *(_QWORD *)(v3 + 2272) = 0LL;
      }
      ScanLookAsideList::Destroy((ScanLookAsideList *)(v3 + 4240));
      v57 = (char **)(v3 + 1880);
      v58 = 31LL;
      do
      {
        v59 = *v57;
        if ( *v57 )
        {
          UserSessionState = W32GetUserSessionState(v55, v54, v56);
          NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
            (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
            v59);
          *v57 = 0LL;
        }
        ++v57;
        --v58;
      }
      while ( v58 );
      v61 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v55) + 24);
      v62 = *(int (**)(void))(v61 + 1184);
      if ( v62 )
      {
        if ( v62() >= 0 )
        {
          v61 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v61) + 24);
          v63 = *(void (**)(void))(v61 + 1192);
          if ( v63 )
            v63();
        }
      }
      v64 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v61) + 24);
      v65 = *(int (**)(void))(v64 + 848);
      if ( v65 )
      {
        if ( v65() >= 0 )
        {
          v64 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v64) + 24);
          v66 = *(void (**)(void))(v64 + 856);
          if ( v66 )
            v66();
        }
      }
      MultiUserGreCleanupEngResources(v64);
      v68 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v67) + 24);
      v69 = (int (*)(void))*((_QWORD *)v68 + 348);
      if ( v69 )
      {
        if ( v69() >= 0 )
        {
          v68 = *(Gre::Base **)(W32GetWin32kBaseApiSetTable(v68) + 24);
          v70 = (void (*)(void))*((_QWORD *)v68 + 349);
          if ( v70 )
            v70();
        }
      }
      Gre::Base::FreeSessionGlobalsArea(v68);
      CleanupRustCode();
    }
    else
    {
      Gre::Base::FreeSessionGlobalsArea(v2);
    }
  }
  return 1LL;
}
