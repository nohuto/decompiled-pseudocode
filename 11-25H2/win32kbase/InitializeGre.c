/*
 * XREFs of InitializeGre @ 0x1402EC79C
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x140146C0C (-AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x14014FCF0 (-bUseActualGDIScale@@YAHXZ.c)
 *     IsCurrentSessionInServerSilo @ 0x140150CF4 (IsCurrentSessionInServerSilo.c)
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x140152194 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     ?InitNonPagedGlobals@Base@Gre@@YA_NXZ @ 0x140157598 (-InitNonPagedGlobals@Base@Gre@@YA_NXZ.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x14015F67C (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x140160B90 (-Initialize@SfmState@@QEAAHXZ.c)
 *     bLockEtwEnabled @ 0x140160E24 (bLockEtwEnabled.c)
 *     ?Initialize@ScanLookAsideList@@QEAA_NXZ @ 0x14019FAA0 (-Initialize@ScanLookAsideList@@QEAA_NXZ.c)
 *     UserIsServiceSession @ 0x1401A1340 (UserIsServiceSession.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z @ 0x1401C86CC (-AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z.c)
 *     Feature_Rust_GDI_REGION__private_IsEnabledPreCheck @ 0x1401C8AD4 (Feature_Rust_GDI_REGION__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     bInitPALOBJ @ 0x1402E8008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402E8494 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1402EA32C (bInitICM.c)
 *     vInitXLATE @ 0x1402EAF7C (vInitXLATE.c)
 */

char InitializeGre()
{
  Gre::Base *v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  unsigned int (*v6)(void); // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  Gre::Base *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int (*v16)(void); // rax
  __int64 v17; // rdx
  void (*v18)(void); // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  int (*v21)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int (*v24)(void); // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int (*v29)(void); // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  void (*v32)(void); // rax
  __int64 v33; // rax
  struct HOBJ__ *RectRgn; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int (*v45)(void); // rax
  unsigned int (*v46)(void); // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int (*v49)(void); // rax
  unsigned int (*v50)(void); // rax
  int (*v51)(void); // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  void (*v54)(void); // rax
  PSECURITY_DESCRIPTOR SystemOwnerSecurityDescriptor; // rax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-59h] BYREF
  __int64 v57; // [rsp+68h] [rbp-21h]
  int v58; // [rsp+70h] [rbp-19h]
  __int64 v59; // [rsp+78h] [rbp-11h]
  _QWORD v60[8]; // [rsp+A0h] [rbp+17h] BYREF

  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
  {
    qword_1402A10C0 = 0LL;
    Feature_Rust_GDI_REGION__private_IsEnabledPreCheck();
    if ( (int)AllocateAndLoadBaseRustExports(
                L"\\SystemRoot\\System32\\win32kbase_rs.sys",
                (struct _UNICODE_STRING **)&P,
                1) < 0 )
      return 0;
    qword_1402A10B0 = (struct REGION_CORE *)&P;
  }
  if ( !Gre::Base::AllocateSessionGlobalsArea(v0) )
    return 0;
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v1) + 24);
  v4 = *(int (**)(void))(v3 + 2744);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v5) + 24) + 2752LL);
      if ( !v6 || !v6() )
        return 0;
    }
  }
  v7 = *(_QWORD *)(W32GetSessionState(v3) + 88);
  *(_BYTE *)(v7 + 8) = 1;
  *(_DWORD *)(v7 + 2848) = UserIsServiceSession(v9, v8);
  *(_DWORD *)(v7 + 2852) = IsCurrentSessionInServerSilo();
  InitializeDefaultDCAttributes(v10);
  *(_BYTE *)(v7 + 2220) = (RtlGetSuiteMask() & 0x10) != 0;
  v12 = (Gre::Base *)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 3040LL);
  *((_QWORD *)v12 + 1) = v12;
  *(_QWORD *)v12 = v12;
  if ( !Gre::Base::InitNonPagedGlobals(v12) )
    return 0;
  v15 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 24);
  v16 = *(int (**)(void))(v15 + 1272);
  if ( v16 )
  {
    if ( v16() >= 0 )
    {
      v15 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v17) + 24);
      v18 = *(void (**)(void))(v15 + 1280);
      if ( v18 )
        v18();
    }
  }
  v19 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(v15) + 88) + 3056LL);
  v19[1] = v19;
  *v19 = v19;
  v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v20) + 24) + 1288LL);
  if ( v21 )
  {
    if ( v21() >= 0 )
    {
      v24 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v22) + 24) + 1296LL);
      if ( !v24 || !v24() )
        return 0;
    }
  }
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(unsigned int)PsGetCurrentProcessSessionId() )
      gbLockEtw = bLockEtwEnabled();
  }
  else
  {
    *(_DWORD *)(v7 + 16) = bLockEtwEnabled();
  }
  if ( !(unsigned int)HmgCreate(v25) || !ScanLookAsideList::Initialize((ScanLookAsideList *)(v7 + 4136), v26) )
    return 0;
  *(_DWORD *)(v7 + 4144) = 1;
  v29 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 24) + 1304LL);
  if ( v29 )
  {
    if ( v29() >= 0 )
    {
      v32 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 24) + 1312LL);
      if ( v32 )
        v32();
    }
  }
  v33 = *(_QWORD *)v7 + 1824LL;
  *(_QWORD *)(v7 + 3816) = 0LL;
  *(_QWORD *)(v7 + 3808) = v33;
  *(_QWORD *)(v7 + 3824) = 0LL;
  RectRgn = GreCreateRectRgn(0, 0, 0, 0);
  *(_QWORD *)(v7 + 4152) = RectRgn;
  if ( !RectRgn )
    return 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v60, (HRGN)RectRgn, 1, 0);
  if ( !v60[0] )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v60);
    return 0;
  }
  *(_QWORD *)(v7 + 4160) = v60[0];
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v60);
  if ( !(unsigned int)bInitPALOBJ(v36) )
    return 0;
  vInitXLATE(v37);
  if ( !(unsigned int)bInitBMOBJ(v38) )
    return 0;
  if ( !(unsigned int)bInitBRUSHOBJ(v39) )
    return 0;
  if ( !(unsigned int)bInitICM(v40) )
    return 0;
  v44 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v42, v41) + 24);
  v45 = *(int (**)(void))(v44 + 1320);
  if ( v45 )
  {
    if ( v45() >= 0 )
    {
      v46 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v44, v43) + 24) + 1328LL);
      if ( !v46 || !v46() )
        return 0;
    }
  }
  v48 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v44, v43) + 24);
  v49 = *(int (**)(void))(v48 + 1336);
  if ( v49 )
  {
    if ( v49() >= 0 )
    {
      v50 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v48, v47) + 24) + 1344LL);
      if ( !v50 || !v50() )
        return 0;
    }
  }
  v51 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v48, v47) + 24) + 1352LL);
  if ( v51 )
  {
    if ( v51() >= 0 )
    {
      v54 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v53, v52) + 24) + 1360LL);
      if ( v54 )
        v54();
    }
  }
  if ( !(unsigned int)SfmState::Initialize(*(SfmState **)(v7 + 4232)) )
    return 0;
  SystemOwnerSecurityDescriptor = CreateSystemOwnerSecurityDescriptor();
  *(_QWORD *)(v7 + 1736) = SystemOwnerSecurityDescriptor;
  if ( !SystemOwnerSecurityDescriptor )
    return 0;
  QueryTable.Flags = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
  QueryTable.DefaultData = 0LL;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultLength = 0;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  *(_DWORD *)(*(_QWORD *)(v7 + 1768) + 1573012LL) = 0;
  RtlQueryRegistryValues(0x80000003, L"LanguagePack", &QueryTable, 0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(v7 + 1768) + 1573016LL) = 1;
  *(_DWORD *)(v7 + 20) = bUseActualGDIScale();
  return 1;
}
