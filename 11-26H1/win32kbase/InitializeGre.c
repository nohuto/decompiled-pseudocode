/*
 * XREFs of InitializeGre @ 0x1402F3768
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D9B8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     HmgCreate @ 0x14010E70C (HmgCreate.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x140183208 (-AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ.c)
 *     IsCurrentSessionInServerSilo @ 0x140186404 (IsCurrentSessionInServerSilo.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 *     ??0BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x1401969A8 (--0BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1401A3E30 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     bLockEtwEnabled @ 0x1401A60C4 (bLockEtwEnabled.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1401B79B0 (-Initialize@SfmState@@QEAAHXZ.c)
 *     UserIsServiceSession @ 0x1401C4D60 (UserIsServiceSession.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402F039C (bInitBMOBJ.c)
 *     ?LoadAndConnectRustCode@@YAJXZ @ 0x1402F34D4 (-LoadAndConnectRustCode@@YAJXZ.c)
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x1402F3598 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     ?bInitUseActualGDIScale@@YAHXZ @ 0x1402F36C0 (-bInitUseActualGDIScale@@YAHXZ.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1402F4C30 (bInitICM.c)
 *     vInitXLATE @ 0x1402F5458 (vInitXLATE.c)
 */

char InitializeGre()
{
  Gre::Base *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  int (*v3)(void); // rax
  unsigned int (*v4)(void); // rax
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  Gre::Base::BaseGlobalsNonPaged **v12; // rsi
  Gre::Base::BaseGlobalsNonPaged *v13; // rax
  Gre::Base::BaseGlobalsNonPaged *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int (*v17)(void); // rax
  void (*v18)(void); // rax
  _QWORD *v19; // rcx
  int (*v20)(void); // rax
  __int64 v21; // rcx
  unsigned int (*v22)(void); // rax
  __int64 v23; // rcx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rax
  __int64 v29; // rcx
  int (*v30)(void); // rax
  __int64 v31; // rcx
  void (*v32)(void); // rax
  __int64 v33; // rax
  struct HOBJ__ *RectRgn; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int (*v40)(void); // rax
  unsigned int (*v41)(void); // rax
  __int64 v42; // rcx
  int (*v43)(void); // rax
  unsigned int (*v44)(void); // rax
  int (*v45)(void); // rax
  __int64 v46; // rcx
  void (*v47)(void); // rax
  PSECURITY_DESCRIPTOR SystemOwnerSecurityDescriptor; // rax
  _DWORD *v49; // r9
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+38h] [rbp-19h] BYREF
  __int64 v51; // [rsp+70h] [rbp+1Fh]
  int v52; // [rsp+78h] [rbp+27h]
  __int64 v53; // [rsp+80h] [rbp+2Fh]

  if ( (int)LoadAndConnectRustCode() < 0 )
    return 0;
  if ( !Gre::Base::AllocateSessionGlobalsArea(v0) )
    return 0;
  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v1) + 24);
  v3 = *(int (**)(void))(v2 + 2768);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v4 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24) + 2776LL);
      if ( !v4 || !v4() )
        return 0;
    }
  }
  v5 = *(_QWORD *)(W32GetSessionState(v2) + 88);
  *(_BYTE *)(v5 + 96) = 1;
  *(_DWORD *)(v5 + 2924) = UserIsServiceSession(v7, v6, v8);
  *(_DWORD *)(v5 + 2928) = IsCurrentSessionInServerSilo();
  InitializeDefaultDCAttributes(v9);
  *(_BYTE *)(v5 + 2308) = (RtlGetSuiteMask() & 0x10) != 0;
  v11 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(v10) + 88) + 3120LL);
  v11[1] = v11;
  *v11 = v11;
  v12 = *(Gre::Base::BaseGlobalsNonPaged ***)(W32GetSessionState(v11) + 88);
  v13 = (Gre::Base::BaseGlobalsNonPaged *)Win32AllocPoolImpl(64LL, 0x788uLL, 0x6D657347u);
  v14 = v13;
  if ( !v13 )
    return 0;
  Gre::Base::BaseGlobalsNonPaged::BaseGlobalsNonPaged(v13);
  *v12 = v14;
  v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 24);
  v17 = *(int (**)(void))(v16 + 1232);
  if ( v17 )
  {
    if ( v17() >= 0 )
    {
      v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v16) + 24);
      v18 = *(void (**)(void))(v16 + 1240);
      if ( v18 )
        v18();
    }
  }
  v19 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(v16) + 88) + 3136LL);
  v19[1] = v19;
  *v19 = v19;
  v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 24) + 1248LL);
  if ( v20 )
  {
    if ( v20() >= 0 )
    {
      v22 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21) + 24) + 1256LL);
      if ( !v22 || !v22() )
        return 0;
    }
  }
  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = bLockEtwEnabled();
  if ( !(unsigned int)HmgCreate(v23) )
    return 0;
  UserSessionState = W32GetUserSessionState(v25, v24, v26);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72016),
                         0x70uLL,
                         0x73616C47u,
                         0x6E637347u,
                         0x60u);
  *(_QWORD *)(v5 + 4240) = PagedLookasideList;
  if ( !PagedLookasideList )
    return 0;
  *(_DWORD *)(v5 + 4248) = 1;
  v30 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24) + 1264LL);
  if ( v30 )
  {
    if ( v30() >= 0 )
    {
      v32 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31) + 24) + 1272LL);
      if ( v32 )
        v32();
    }
  }
  v33 = *(_QWORD *)v5 + 1824LL;
  *(_QWORD *)(v5 + 3920) = 0LL;
  *(_QWORD *)(v5 + 3912) = v33;
  *(_QWORD *)(v5 + 3928) = 0LL;
  RectRgn = GreCreateRectRgn(0, 0, 0, 0);
  *(_QWORD *)(v5 + 4256) = RectRgn;
  if ( !RectRgn )
    return 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&QueryTable, (HRGN)RectRgn, 1, 0);
  if ( !QueryTable.QueryRoutine )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&QueryTable);
    return 0;
  }
  *(_QWORD *)(v5 + 4264) = QueryTable.QueryRoutine;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&QueryTable);
  if ( !(unsigned int)bInitPALOBJ(v36) )
    return 0;
  vInitXLATE();
  if ( !(unsigned int)bInitBMOBJ(v37) )
    return 0;
  if ( !(unsigned int)bInitBRUSHOBJ() )
    return 0;
  if ( !(unsigned int)bInitICM() )
    return 0;
  v39 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v38) + 24);
  v40 = *(int (**)(void))(v39 + 1280);
  if ( v40 )
  {
    if ( v40() >= 0 )
    {
      v41 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v39) + 24) + 1288LL);
      if ( !v41 || !v41() )
        return 0;
    }
  }
  v42 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v39) + 24);
  v43 = *(int (**)(void))(v42 + 1296);
  if ( v43 )
  {
    if ( v43() >= 0 )
    {
      v44 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v42) + 24) + 1304LL);
      if ( !v44 || !v44() )
        return 0;
    }
  }
  v45 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v42) + 24) + 1312LL);
  if ( v45 )
  {
    if ( v45() >= 0 )
    {
      v47 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v46) + 24) + 1320LL);
      if ( v47 )
        v47();
    }
  }
  if ( !(unsigned int)SfmState::Initialize(*(SfmState **)(v5 + 4344)) )
    return 0;
  SystemOwnerSecurityDescriptor = CreateSystemOwnerSecurityDescriptor();
  *(_QWORD *)(v5 + 1824) = SystemOwnerSecurityDescriptor;
  if ( !SystemOwnerSecurityDescriptor )
    return 0;
  v49 = (_DWORD *)(*(_QWORD *)(v5 + 1856) + 1573012LL);
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
  QueryTable.Flags = 0;
  memset(&QueryTable.Name, 0, 20);
  *v49 = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v51 = 0LL;
  v52 = 0;
  v53 = 0LL;
  RtlQueryRegistryValues(0x80000003, L"LanguagePack", &QueryTable, v49, 0LL);
  *(_DWORD *)(*(_QWORD *)(v5 + 1856) + 1573016LL) = 1;
  *(_DWORD *)(v5 + 104) = bInitUseActualGDIScale();
  return 1;
}
