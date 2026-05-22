/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C4F4C
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C47E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800B7A78 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA594 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA83C (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ @ 0x1801C9BB8 (-ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801C9BD0 (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C9C10 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rcx
  char v5; // r12
  _QWORD *ButtonHoldHelper; // rax
  char v7; // cl
  _QWORD *v8; // rax
  char v9; // r15
  __int64 v10; // rdx
  char v11; // bl
  std::_Ref_count_base *v12; // rcx
  MPCGestureCancelTracker *v13; // rcx
  int v14; // ebx
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v16; // rcx
  _BYTE *v17; // rbp
  MPCGestureHandlerManager *v18; // rbx
  __int64 *v19; // rax
  const char *v20; // r9
  struct MPCHolographicInputManager *v21; // rax
  const char *v22; // r9
  int v23; // eax
  struct MPCHolographicInputManager *v24; // rax
  const char *v25; // r9
  int v26; // eax
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v28; // [rsp+38h] [rbp-40h]
  __int64 v29; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v30; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v32; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v32) = 0;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)this, (__int64)a2, 0);
  v5 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(v4 + 4288), &v27) + 10LL);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 536), &v29);
  v7 = 1;
  if ( *(_BYTE *)(*ButtonHoldHelper + 10LL)
    || (v8 = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 536), &v27), v7 = 3, *(_BYTE *)(*v8 + 12LL)) )
  {
    v9 = 1;
    if ( (v7 & 2) == 0 )
      goto LABEL_9;
  }
  else
  {
    v9 = 0;
  }
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
LABEL_9:
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  v11 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 536), &v29) + 8LL);
  v12 = v30;
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v11 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 4296),
      (MPCGamepadProcessor *)((char *)this + 4204));
  if ( v9 )
  {
    v13 = (MPCGamepadProcessor *)((char *)this + 4296);
    v14 = v5 != 0;
    if ( v5 )
    {
      MPCGestureCancelTracker::StartTracking(v13, (MPCGamepadProcessor *)((char *)this + 4204), 0.025);
    }
    else if ( MPCGestureCancelTracker::ShouldCancel(v13) )
    {
      v14 = 2;
      *((_WORD *)this + 2156) = 0;
      *((_QWORD *)this + 540) = 0LL;
    }
    Instance = MPCHolographicInputManager::GetInstance();
    v16 = *((_QWORD *)this + 455);
    if ( !v16 )
      v16 = *((_QWORD *)this + 456);
    v17 = (char *)a2 + 240;
    MPCHolographicInputManager::InjectInteractionState(
      (__int64)Instance,
      v14,
      **((_DWORD **)this + 7),
      (__int64)a2 + 240,
      v16);
  }
  else
  {
    v17 = (char *)a2 + 240;
  }
  if ( (*((_BYTE *)this + 3708) & 1) == 0 && (*((_BYTE *)this + 3704) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 4u, 1u);
  if ( *v17 && *((_BYTE *)a2 + 242) && !*((_DWORD *)this + 1046) && v9 )
  {
    *((_DWORD *)a2 + 214) = 2 - (v5 != 0);
    v18 = MPCGestureHandlerManager::GetInstance((__int64)v12, v10);
    v19 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v32,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCGestureHandlerManager::DownLevelTo2D(v18, a2, v19, v20);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 535) + 12LL) )
  {
    v21 = MPCHolographicInputManager::GetInstance();
    v23 = MPCHolographicInputManager::InjectRightClick((__int64)v21, 1, *((_DWORD *)a2 + 68), v22, *((float *)a2 + 62));
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v23);
    v24 = MPCHolographicInputManager::GetInstance();
    v26 = MPCHolographicInputManager::InjectRightClick((__int64)v24, 0, *((_DWORD *)a2 + 68), v25, *((float *)a2 + 62));
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v26);
  }
}
