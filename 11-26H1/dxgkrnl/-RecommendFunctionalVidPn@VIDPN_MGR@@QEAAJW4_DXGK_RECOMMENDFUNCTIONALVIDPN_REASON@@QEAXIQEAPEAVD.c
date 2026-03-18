/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x14025A990 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14025AE74 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x14006C758 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x14009654C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x14025B634 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403EF914 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403EF9BC (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1403EFBFC (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  int ClientVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  DMMVIDPN *v14; // rdi
  DXGADAPTER *ContainingAdapter; // r14
  __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // edx
  DMMVIDPN *v26; // rax
  unsigned __int8 v27; // r8
  DMMVIDPN *v28; // rax
  struct DMMVIDPN **v29; // rsi
  __int64 v30; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v31; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v32[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v33; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2029;
  }
  *v5 = 0LL;
  v31 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v31);
  v13 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 2042;
LABEL_29:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v31, 0LL);
    return v13;
  }
  v14 = v31;
  *(_QWORD *)&v33.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v33.RequestReason + 1) = 0;
  *(&v33.PrivateDriverDataSize + 1) = 0;
  v33.pVidPnTargetPrioritizationVector = 0LL;
  v33.RequestReason = a2;
  v33.pPrivateDriverData = a3;
  v33.PrivateDriverDataSize = a4;
  v33.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v31 & -(__int64)((DMMVIDPN *)((char *)v31 + 88) != 0LL));
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2067;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)v14 + 172)) - 1) & *((_WORD *)v14 + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2076;
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v32,
    ((unsigned __int64)v14 + 152) & -(__int64)((DMMVIDPN *)((char *)v14 + 96) != 0LL),
    1u,
    v17,
    v30,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v18 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v33);
  v20 = v18;
  if ( v18 == -1071774941 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 2090;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v32, v21);
    v13 = -1071774941;
    goto LABEL_29;
  }
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(2LL, ContainingAdapter, v18);
    WdLogGlobalForLineNumber = 2097;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v32, v22);
    v13 = v20;
    goto LABEL_29;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v32, v19);
  if ( !DMMVIDPN::IsFunctional(v14, v23) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2104;
  }
  if ( DMMVIDPN::IsFunctional(v14, v24) )
  {
    a5 = 0LL;
    v26 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, 256LL);
    if ( v26 )
      v28 = DMMVIDPN::DMMVIDPN(v26, (const struct DMMVIDPNSOURCESET **)v14, v27);
    else
      v28 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v28);
    v29 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v14 + 96), a2);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 32, (__int64)v29);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        *v5 = v14;
        v13 = 0;
        v31 = 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v29, v14, *((int *)v29 + 20));
        v13 = *((_DWORD *)v29 + 20);
        WdLogGlobalForLineNumber = 2148;
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 2138;
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v13 = -1073741801;
    }
    goto LABEL_29;
  }
  WdLogSingleEntry2(2LL, ContainingAdapter, -1071774941LL);
  WdLogGlobalForLineNumber = 2111;
  DxgCreateLiveDumpWithWdLogs2(403LL, 2060LL, 0LL, 0LL, 0LL, 0LL);
  if ( v14 )
    ReferenceCounted::Release((DMMVIDPN *)((char *)v14 + 24));
  return 3223192355LL;
}
