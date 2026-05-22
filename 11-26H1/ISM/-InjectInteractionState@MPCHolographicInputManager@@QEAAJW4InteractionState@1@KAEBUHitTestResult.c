/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA594
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C4F4C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C648C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180049F70 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x180094358 (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_ @ 0x1800B99A8 (_lambda_cc14c4b3090cc7c63243ed8c77095553_--_lambda_cc14c4b3090cc7c63243ed8c77095553_.c)
 *     _lambda_d868253b3e20bfbc6991bfd75a08498f_::operator() @ 0x1800B9ADC (_lambda_d868253b3e20bfbc6991bfd75a08498f_--operator().c)
 *     _lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator() @ 0x1800B9BB0 (_lambda_e9c1fc9d7cbe0868cf685a076fd687ae_--operator().c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BB490 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     _alloca_probe @ 0x1801D3D60 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v10; // rdx
  const char *v11; // r9
  _BYTE *v12; // rbx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned int *v15; // rcx
  unsigned int v16; // edi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rax
  int v19; // r8d
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+70h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+C0h] [rbp-40h]
  _BYTE v28[3008]; // [rsp+C40h] [rbp+B40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1828h] [rbp+1728h]
  __int64 v30; // [rsp+1830h] [rbp+1730h] BYREF

  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 32LL))(a5) )
  {
    _lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v30, a1);
    lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(v22, v10, (__int64)&a5);
    v12 = (_BYTE *)(a1 + 3368);
    if ( *(_BYTE *)(a1 + 3368) )
    {
      if ( a2 == 1 )
      {
        v13 = *(_OWORD *)(a4 + 88);
        v23 = *(_OWORD *)(a4 + 72);
        v14 = *(_OWORD *)(a4 + 104);
        v24 = v13;
        v25 = v14;
        lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator()((__int64)&v30, (__int64)Src, 4, 1, a3, &v23);
        memcpy_0(v28, Src, sizeof(v28));
        lambda_d868253b3e20bfbc6991bfd75a08498f_::operator()(v22, (__int64)v28);
        goto LABEL_9;
      }
    }
    else if ( a2 == 1 )
    {
LABEL_9:
      *v12 = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextArtificialSpectrumId,
        ((unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)&MPCInputInfoHelper::m_nextArtificialSpectrumId)
       + 1294967296)
      % 0x3B9AC9FF
      - 1294967295);
      *(_DWORD *)(a1 + 3372) = std::_Atomic_storage<enum GestureOperationState,4>::load(v15);
      if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
      {
        v16 = *(_DWORD *)(a4 + 376);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
        MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v16, a3);
      }
      v19 = 2;
LABEL_17:
      v20 = *(_OWORD *)(a4 + 88);
      v23 = *(_OWORD *)(a4 + 72);
      v21 = *(_OWORD *)(a4 + 104);
      v24 = v20;
      v25 = v21;
      lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator()((__int64)&v30, (__int64)Src, v19, a2, a3, &v23);
      if ( v27 == 3 )
      {
        v27 = 6;
        memcpy_0(v28, Src, sizeof(v28));
        lambda_d868253b3e20bfbc6991bfd75a08498f_::operator()(v22, (__int64)v28);
        v27 = 3;
      }
      memcpy_0(v28, Src, sizeof(v28));
      lambda_d868253b3e20bfbc6991bfd75a08498f_::operator()(v22, (__int64)v28);
      return 0LL;
    }
    *v12 = 0;
    if ( a2 )
    {
      if ( a2 != 2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x323,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v11);
      v19 = 4;
    }
    else
    {
      v19 = 3;
    }
    goto LABEL_17;
  }
  return 0LL;
}
