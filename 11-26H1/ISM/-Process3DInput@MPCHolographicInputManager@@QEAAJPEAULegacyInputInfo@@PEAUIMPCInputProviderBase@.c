/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74
 * Callers:
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18000C260 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180023B90 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E40 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BE6B0 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C49D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C648C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C8770 (-Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C9460 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18000BA30 (-MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18000BF50 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?Update@MPCGamepadInputHelper@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18000C044 (-Update@MPCGamepadInputHelper@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x18000C35C (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000C844 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x18000C9E0 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18000CB14 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18000D310 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18000D3AC (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18000D58C (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x18000EDFC (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18000EE4C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x1800921D4 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB658 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rax
  const char *v12; // r9
  __int64 v13; // rdi
  void (__fastcall *v14)(__int64, struct LegacyInputInfo *, __int64, struct IMPCTarget **); // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // cl
  unsigned int v18; // ebx
  MPCHolographicInputManager *v19; // rcx
  bool v20; // di
  MPCHolographicInputManager *v21; // rcx
  char *v22; // r8
  struct IMPCInputProviderBase *v23; // rdx
  const char *v24; // r9
  MPCGamepadInputHelper *Instance; // rax
  ISMTracing *v27; // rcx
  struct LegacyInputInfo ***v28; // rax
  int v29; // eax
  int v30; // edi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned __int8 v33; // cl
  ISMTracing *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  struct ISystemInputRouter *v37; // rax
  struct LegacyInputInfo *v38; // rbx
  const char *v39; // r9
  _OWORD *v40; // rax
  _OWORD *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _OWORD *v44; // rax
  _OWORD *v45; // rcx
  _OWORD *v46; // rax
  _OWORD *v47; // rcx
  __int64 v48; // r8
  struct LegacyInputInfo *v49; // rbx
  int v50; // [rsp+20h] [rbp-E0h]
  _BYTE v51[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+38h] [rbp-C8h] BYREF
  struct LegacyInputInfo **v53; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall ***v54)(); // [rsp+70h] [rbp-90h]
  _BYTE v55[424]; // [rsp+78h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  struct LegacyInputInfo *v57; // [rsp+250h] [rbp+150h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x156,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
  if ( !*((_QWORD *)this + 412) )
  {
    v36 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 264LL))(a3);
    Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((char *)this + 3296, v36);
    v37 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 412) + 72LL))(*((_QWORD *)this + 412));
    MPCHolographicInputManager::SetMPCInputRouter(this, v37);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 224LL))(a3, a2);
  if ( !*((_QWORD *)this + 410) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x161,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v10);
  MPCHolographicInputManager::UpdatePrimary(this, v8, v9, v10);
  v11 = *(_QWORD *)a3;
  if ( *((_BYTE *)a2 + 3001) )
  {
    v38 = (struct LegacyInputInfo *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v11 + 240))(a3);
    v57 = v38;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v57);
    if ( !v38 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v39);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v57);
    *a4 = v38;
    v40 = (_OWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 248LL))(a3);
    v41 = v55;
    v42 = 3LL;
    v43 = 3LL;
    do
    {
      *v41 = *v40;
      v41[1] = v40[1];
      v41[2] = v40[2];
      v41[3] = v40[3];
      v41[4] = v40[4];
      v41[5] = v40[5];
      v41[6] = v40[6];
      v41 += 8;
      *(v41 - 1) = v40[7];
      v40 += 8;
      --v43;
    }
    while ( v43 );
    *v41 = *v40;
    v41[1] = v40[1];
    v44 = (_OWORD *)((char *)a2 + 240);
    v45 = v55;
    do
    {
      *v44 = *v45;
      v44[1] = v45[1];
      v44[2] = v45[2];
      v44[3] = v45[3];
      v44[4] = v45[4];
      v44[5] = v45[5];
      v44[6] = v45[6];
      v44 += 8;
      *(v44 - 1) = v45[7];
      v45 += 8;
      --v42;
    }
    while ( v42 );
    *v44 = *v45;
    v44[1] = v45[1];
    goto LABEL_56;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(v11 + 72))(a3) )
  {
    if ( !*((_QWORD *)this + 418) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x173,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v12);
    v46 = (_OWORD *)((char *)a2 + 240);
    v47 = (_OWORD *)((char *)this + 504);
    v48 = 3LL;
    do
    {
      *v46 = *v47;
      v46[1] = v47[1];
      v46[2] = v47[2];
      v46[3] = v47[3];
      v46[4] = v47[4];
      v46[5] = v47[5];
      v46[6] = v47[6];
      v46 += 8;
      *(v46 - 1) = v47[7];
      v47 += 8;
      --v48;
    }
    while ( v48 );
    *v46 = *v47;
    v46[1] = v47[1];
    v49 = (struct LegacyInputInfo *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 418) + 232LL))(*((_QWORD *)this + 418));
    v57 = v49;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v57);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v57);
    *a4 = v49;
LABEL_56:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
    goto LABEL_9;
  }
  *((_OWORD *)a2 + 180) = *((_OWORD *)this + 1);
  *((_OWORD *)a2 + 181) = *((_OWORD *)this + 2);
  *((_OWORD *)a2 + 182) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 183) = *((_OWORD *)this + 4);
  MPCHolographicInputManager::PrepAndStabilizeTargetingRay(this, a2, a3);
  v13 = *((_QWORD *)this + 411);
  v14 = *(void (__fastcall **)(__int64, struct LegacyInputInfo *, __int64, struct IMPCTarget **))(*(_QWORD *)v13 + 64LL);
  v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 232LL))(a3);
  v14(v13, a2, v15, a4);
  if ( ISMTracing::IsEnabled(v17, v16) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(v27, a2);
  }
LABEL_9:
  v18 = 1;
  if ( *((_DWORD *)a2 + 16) == 4 )
    *((_BYTE *)a2 + 3000) = 1;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 216LL))(a3, (char *)a2 + 240);
  MPCHolographicInputManager::UpdateGazeCursor(this, a2);
  v57 = a2;
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    Instance = MPCGamepadInputHelper::GetInstance();
    MPCGamepadInputHelper::Update(Instance, v57);
    v52 = off_1801E39C0;
    v53 = &v57;
    v54 = &v52;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v52);
  }
  MPCHolographicInputManager::ProcessCapture(v19, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 208LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 128LL))(
    a3,
    this,
    a2);
  v20 = !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 272LL))(**((_QWORD **)this + 450))
     && (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 72LL))(**((_QWORD **)this + 450))
     && a3 == *((struct IMPCInputProviderBase **)this + 418);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) || v20 )
  {
    if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
      *((_BYTE *)this + 3272) = *((_BYTE *)a2 + 636) != 0;
    LOBYTE(v57) = 0;
    v52 = off_1801DF208;
    v53 = &v57;
    v54 = &v52;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v52);
    if ( !*((_BYTE *)a2 + 3000) )
    {
      if ( !MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v21, a3) )
        v18 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 328LL))(a3);
      if ( v20 )
      {
        v22 = (char *)this + 504;
        v23 = (struct IMPCInputProviderBase *)**((_QWORD **)this + 450);
      }
      else
      {
        v22 = (char *)a2 + 240;
        v23 = a3;
      }
      MPCHolographicInputManager::ProcessCursorData(this, v23, v22, v18, (char *)a2 + 656);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 360LL))(a3)
      && (*((_QWORD *)this + 451) - *((_QWORD *)this + 450) == 8LL
       || (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 328LL))(a3) != 2) )
    {
      if ( *((_QWORD *)this + 462) != *((_QWORD *)this + 463) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1CE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v24);
      if ( *((_QWORD *)this + 465) != *((_QWORD *)this + 466) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1CF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v24);
      v28 = (struct LegacyInputInfo ***)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(
                                          v51,
                                          this);
      v54 = 0LL;
      v52 = off_1801DF238;
      v53 = *v28;
      v54 = &v52;
      MPCHolographicInputManager::ForEachActiveProvider(this, &v52);
      v29 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 422) + 80LL))(
              *((_QWORD *)this + 422),
              0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 463) - *((_QWORD *)this + 462)) >> 3));
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v29,
          v50);
      v30 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 48LL))(a3);
      v31 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 463) - *((_QWORD *)this + 462)) >> 3);
      if ( ISMTracing::IsEnabled(v33, v32) )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_SendPoints_(v34, (unsigned int)v31, v30);
      }
      v35 = *((_QWORD *)this + 462);
      if ( v35 != *((_QWORD *)this + 463) )
        *((_QWORD *)this + 463) = v35;
    }
  }
  return 0LL;
}
