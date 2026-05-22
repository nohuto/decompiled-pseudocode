/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C648C
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C6280 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007AFE8 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800B7A78 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800BA100 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA594 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800BAAFC (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5F34 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801C5F40 (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801C5FC0 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ @ 0x1801C9BB8 (-ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801C9BD0 (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C9C10 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r9
  MPCHolographicInputManager *Instance; // rbx
  int v15; // eax
  const char *v16; // r9
  unsigned int v17; // ebx
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  char v20; // r12
  int v21; // r14d
  struct MPCHolographicInputManager *v22; // rax
  bool v24; // al
  __int64 v25; // r9
  unsigned int v26; // ecx
  int v27; // r8d
  MPCHolographicInputManager *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  const char *v31; // r9
  MPCHolographicInputManager *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  const char *v35; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  _DWORD v37[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v39[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  _BYTE v41[4]; // [rsp+140h] [rbp+40h] BYREF
  float v42; // [rsp+144h] [rbp+44h]
  float v43; // [rsp+148h] [rbp+48h]
  int v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  char v46; // [rsp+188h] [rbp+88h]
  char v47; // [rsp+2CCh] [rbp+1CCh]
  bool v48; // [rsp+C09h] [rbp+B09h]
  wil::details::in1diag3 *retaddr; // [rsp+C58h] [rbp+B58h]

  if ( (*((_WORD *)a3 + 46) & 0xC00) != 0 )
    v6 = *((__int16 *)a3 + 47);
  else
    v6 = 0;
  *((_DWORD *)this + 1323) = v6;
  v7 = (__int64)this + 40;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this + 40) )
  {
    memset_0(v39, 0, 0xBC0uLL);
    v40 = 3008;
    v48 = *((_QWORD *)this + 456) && (*((_BYTE *)this + 5393) || !*((_DWORD *)a3 + 25) && !*((_DWORD *)a3 + 26));
    *(_QWORD *)&v38 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    v15 = MPCHolographicInputManager::Process3DInput(
            Instance,
            (struct LegacyInputInfo *)v39,
            (struct IMPCInputProviderBase *)(v7 & -(__int64)(this != 0LL)),
            (struct IMPCTarget **)&v38);
    v17 = v15;
    v18 = retaddr;
    if ( v15 >= 0 )
    {
      if ( !(_QWORD)v38 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          v16);
      if ( v46 )
      {
        v20 = 1;
        *((_QWORD *)a3 + 8) = v45;
        *((_DWORD *)a3 + 18) = 1;
      }
      else
      {
        v20 = 0;
      }
      if ( (*((_BYTE *)this + 5300) & 0x10) != 0 )
        MPCGestureCancelTracker::TrackPosition(
          (MPCMouseProcessor *)((char *)this + 5408),
          (MPCMouseProcessor *)((char *)this + 5316));
      v37[0] = 0;
      if ( !MPCMouseProcessor::ButtonToInteractionState(
              this,
              *((_DWORD *)a2 + 4),
              16,
              (enum MPCHolographicInputManager::InteractionState *)v37) )
        goto LABEL_31;
      v21 = v37[0];
      if ( v37[0] == 1 )
        MPCGestureCancelTracker::StartTracking(
          (MPCMouseProcessor *)((char *)this + 5408),
          (MPCMouseProcessor *)((char *)this + 5316),
          0.0125);
      if ( MPCGestureCancelTracker::ShouldCancel((MPCMouseProcessor *)((char *)this + 5408)) )
      {
        v21 = 2;
        *((_WORD *)this + 2712) = 0;
        *((_QWORD *)this + 679) = 0LL;
      }
      v22 = MPCHolographicInputManager::GetInstance();
      v15 = MPCHolographicInputManager::InjectInteractionState(
              (__int64)v22,
              v21,
              **((_DWORD **)this + 8),
              (__int64)v41,
              v38);
      v17 = v15;
      if ( v15 >= 0 )
      {
LABEL_31:
        v24 = v41[0] != 0;
        *((_BYTE *)this + 5352) = v41[0] != 0;
        if ( v24 )
        {
          v25 = (unsigned int)(int)v42;
          *((_DWORD *)a3 + 25) = v25;
          v26 = (int)v43;
          *((_DWORD *)a3 + 26) = (int)v43;
          *((_DWORD *)a3 + 10) = v44;
          *((_BYTE *)a3 + 122) = 1;
          MPCMouseProcessor::DownLevelInput(this, a2, a3, v25, v26, v47 != 0);
        }
        else if ( *((_BYTE *)this + 5353) && !*((_QWORD *)this + 455) )
        {
          *((_DWORD *)a3 + 10) = *((_DWORD *)this + 1339);
          *((_BYTE *)a3 + 122) = 1;
          MPCMouseProcessor::DownLevelInput(
            this,
            a2,
            a3,
            *((unsigned int *)this + 1340),
            *((_DWORD *)this + 1341),
            *((_DWORD *)this + 1342) != 0);
        }
        v37[0] = 0;
        if ( MPCMouseProcessor::ButtonToInteractionState(
               this,
               *((_DWORD *)a2 + 4),
               32,
               (enum MPCHolographicInputManager::InteractionState *)v37)
          && !v37[0] )
        {
          MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, v27 - 29, v27 - 30);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
        if ( v20 )
          goto LABEL_46;
        goto LABEL_40;
      }
      v18 = retaddr;
      v19 = 299LL;
    }
    else
    {
      v19 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      v18,
      (void *)v19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    return v17;
  }
  if ( (*((_BYTE *)this + 5300) & 0x70) != 0
    || (v12 = *((_DWORD *)this + 1322),
        MPCConstantManager::GetInstance(v9, v8, v10, v11),
        *(_QWORD *)&v38 = L"ActivationDelta",
        *((_QWORD *)&v38 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ActivationDelta"),
        v12 > (unsigned int)MPCConstantManager::GetConstant<unsigned long>(v13, v7, &v38)) )
  {
    MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 16));
    *((_BYTE *)this + 5352) = 0;
    *((_DWORD *)this + 1343) = 1;
  }
LABEL_40:
  v28 = MPCHolographicInputManager::GetInstance();
  if ( (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v28, v29, v30, v31)
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3366) )
    {
      *((_DWORD *)a3 + 29) = 1;
    }
    else
    {
      v32 = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v32, v33, v34, v35);
      *((_DWORD *)a3 + 10) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
      MPCMouseProcessor::DownLevelInput(this, a2, a3, *((unsigned int *)a3 + 25), *((_DWORD *)a3 + 26), 0);
    }
    *((_BYTE *)this + 5352) = 0;
  }
LABEL_46:
  *((_DWORD *)this + 1324) = *((_DWORD *)a2 + 4);
  return 0LL;
}
