/*
 * XREFs of ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18000D58C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18000AF08 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_@ISMTracing@@QEAAXPEAU.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18000B95C (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEA.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18000EB10 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18000EC40 (-MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegac.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHolographicInputManager::PrepAndStabilizeTargetingRay(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3)
{
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int128 v12; // xmm1
  unsigned __int64 v13; // rdx
  const char *v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // cl
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // cl
  ISMTracing *v19; // rcx
  ISMTracing *v20; // rcx
  ISMTracing *v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a2 + 20) = *((_DWORD *)a2 + 1);
  *((_BYTE *)a2 + 144) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  *((_BYTE *)a2 + 88) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 352LL))(a3);
  *((_BYTE *)a2 + 312) = 0;
  *((_BYTE *)a2 + 240) = 0;
  *((_DWORD *)a2 + 68) = 0;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 64LL))(
    a3,
    this,
    a2);
  v6 = *(_QWORD *)this;
  v7 = *((_OWORD *)a2 + 180);
  *((_QWORD *)a2 + 113) = *(_QWORD *)this;
  v8 = *((_QWORD *)this + 1);
  v9 = *((_OWORD *)a2 + 181);
  *((_QWORD *)a2 + 114) = v8;
  *((_OWORD *)a2 + 11) = v7;
  *((_QWORD *)a2 + 20) = v8;
  v10 = *((_OWORD *)a2 + 182);
  v11 = *((_QWORD *)a2 + 115);
  *((_OWORD *)a2 + 12) = v9;
  *((_QWORD *)a2 + 19) = v6;
  v12 = *((_OWORD *)a2 + 183);
  *((_QWORD *)a2 + 21) = v11;
  *((_OWORD *)a2 + 13) = v10;
  *((_OWORD *)a2 + 14) = v12;
  if ( ISMTracing::IsEnabled(v6, v13) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization_(v21, a2);
  }
  if ( !*((_BYTE *)a2 + 48) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v14);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 144LL))(a3, a2);
  if ( ISMTracing::IsEnabled(v16, v15) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(v20, a2);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 344LL))(a3, a2);
  MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct LegacyInputInfo *)((char *)a2 + 120));
  if ( ISMTracing::IsEnabled(v18, v17) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_(v19, a2);
  }
}
