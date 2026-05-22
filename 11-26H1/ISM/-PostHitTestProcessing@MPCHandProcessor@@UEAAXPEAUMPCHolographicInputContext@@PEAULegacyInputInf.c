/*
 * XREFs of ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800C0A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2008 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF1B4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCHandProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char v3; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // r9
  unsigned int v11; // r12d
  bool v12; // di
  __int64 v13; // rdx
  char v14; // bl
  std::_Ref_count_base *v15; // rcx
  MPCButtonHoldHelper **v16; // rax
  int v17; // xmm0_4
  int v18; // eax
  char v19; // bl
  int v20; // eax
  char v21; // bl
  std::_Ref_count_base *v22; // rcx
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v24; // rax
  MPCButtonHoldHelper **v25; // rsi
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  __int64 v29; // rdi
  struct MPCGestureHandlerManager *v30; // rbx
  __int64 *v31; // rax
  char IsInjecting; // al
  const void *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  MPCGestureHandlerManager *v36; // rbx
  __int64 *v37; // rax
  const char *v38; // r9
  __int128 v39; // [rsp+30h] [rbp-50h] BYREF
  __int64 v40; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v41; // [rsp+48h] [rbp-38h]
  __int64 v42; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v43; // [rsp+C8h] [rbp+48h]

  v3 = 0;
  LODWORD(v42) = 0;
  if ( !MPCInputProviderBase::IsPrimary(this) )
    return;
  MPCConstantManager::GetInstance(v7, v6, v8, v9);
  *(_QWORD *)&v39 = L"DisableInputInjection";
  v43 = this & -(__int64)(this != 24);
  *((_QWORD *)&v39 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"DisableInputInjection");
  if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(v10, this & -(__int64)(this != 24), &v39) )
    return;
  v11 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCButtonHoldHelper ***)(this + 3656),
    *((_BYTE *)a3 + 651) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 61),
    *((float *)a3 + 62),
    1.0);
  v12 = 0;
  if ( *((_BYTE *)a3 + 650) )
  {
    if ( *((_BYTE *)a3 + 652) )
    {
      v3 = 1;
      if ( !*(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v39) + 12LL) )
        v12 = 1;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    if ( *((_QWORD *)&v39 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v39 + 1));
  }
  if ( v12 )
    goto LABEL_43;
  v14 = v3 | 2;
  if ( !*(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v40) + 8LL)
    && (v14 = 4, !*(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v39) + 12LL))
    || (v12 = 1, (v14 & 4) != 0) )
  {
    if ( *((_QWORD *)&v39 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v39 + 1));
  }
  v15 = v41;
  if ( v41 )
    std::_Ref_count_base::_Decref(v41);
  if ( v12 )
  {
    v16 = *(MPCButtonHoldHelper ***)(this + 3656);
    if ( !*((_BYTE *)v16 + 13) )
    {
      v17 = *((_DWORD *)v16 + 2);
      v18 = *((_DWORD *)v16 + 1);
      *((_DWORD *)a3 + 62) = v17;
      *((_DWORD *)a3 + 61) = v18;
    }
    v19 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v40) + 8LL);
    if ( v41 )
      std::_Ref_count_base::_Decref(v41);
    if ( v19 )
    {
      memcpy_0((void *)(this + 3672), a3, 0xBC0uLL);
LABEL_47:
      v11 = 7;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  if ( *((_BYTE *)a3 + 240) )
  {
    v20 = *(_DWORD *)a3 & 0x662600;
    if ( *(_BYTE *)(this + 3640) )
    {
      if ( v20 )
      {
        if ( *((_DWORD *)a3 + 16) == 2 )
        {
          v11 = 1;
          goto LABEL_32;
        }
        if ( *((_DWORD *)a3 + 16) == 3 )
          goto LABEL_31;
      }
      goto LABEL_32;
    }
    if ( v20 )
    {
      if ( *((_DWORD *)a3 + 16) == 3 )
      {
LABEL_31:
        v11 = 2;
        goto LABEL_32;
      }
      if ( *((_DWORD *)a3 + 16) == 2 )
        goto LABEL_44;
    }
    Instance = MPCGestureHandlerManager::GetInstance((__int64)v15, v13);
    v24 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v42,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)Instance, v24) )
    {
LABEL_44:
      v25 = *(MPCButtonHoldHelper ***)(this + 3648);
      v26 = *((float *)a3 + 76);
      v27 = *((float *)a3 + 62);
      v28 = *((float *)a3 + 61);
      v29 = *((_QWORD *)a3 + 2);
      v30 = MPCGestureHandlerManager::GetInstance((__int64)v15, v13);
      v31 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v42,
              v43);
      IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v30, v31);
      MPCSlateDeadzoneHelper::UpdateState(v25, IsInjecting, v29, v28, v27, v26);
      if ( ((*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 2)
        && !*(_BYTE *)(*(_QWORD *)(this + 3648) + 13LL) )
      {
        goto LABEL_32;
      }
      goto LABEL_47;
    }
    if ( (*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 6 )
      goto LABEL_32;
LABEL_43:
    v11 = 4;
  }
LABEL_32:
  v21 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v40) + 12LL);
  v22 = v41;
  if ( v41 )
    std::_Ref_count_base::_Decref(v41);
  if ( v21 )
  {
    a3 = (struct LegacyInputInfo *)(this + 3672);
  }
  else if ( !*((_BYTE *)a3 + 240) && *(_DWORD *)(this + 7536) == 4 )
  {
    a3 = (struct LegacyInputInfo *)(this + 6680);
    v11 = 0;
  }
  if ( *(_QWORD *)(this + 3600) && *(_BYTE *)(this + 3624) && !*((_BYTE *)a3 + 240) )
  {
    a3 = (struct LegacyInputInfo *)(this + 6680);
    v11 = 7;
  }
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v22, a3, v11);
  if ( *((_BYTE *)a3 + 240) )
  {
    memcpy_0((void *)(this + 6680), v33, 0xBC0uLL);
    v36 = MPCGestureHandlerManager::GetInstance(v35, v34);
    v37 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v42,
            this & -(__int64)(this != 24));
    MPCGestureHandlerManager::DownLevelTo2D(v36, a3, v37, v38);
  }
}
