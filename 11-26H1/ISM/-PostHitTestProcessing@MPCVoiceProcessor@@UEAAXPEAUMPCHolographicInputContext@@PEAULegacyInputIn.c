/*
 * XREFs of ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801BE5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF1B4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCVoiceProcessor::PostHitTestProcessing(
        __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3,
        const char *a4)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct MPCGestureHandlerManager *Instance; // rax
  unsigned __int64 v12; // rdx
  MPCGestureHandlerManager *v13; // rbx
  __int64 *v14; // rax
  const char *v15; // r9
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(this + 3548) )
  {
    if ( *((_BYTE *)a3 + 240) )
    {
      MPCConstantManager::GetInstance(this, (__int64)a2, (__int64)a3, a4);
      *(_QWORD *)&v16 = L"AllowDownleveling";
      *((_QWORD *)&v16 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"AllowDownleveling");
      if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(v6, this & -(__int64)(this != 24), &v16) )
      {
        if ( *((_DWORD *)a3 + 16) != 7 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x67,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
            v8);
        MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v7, (__int64)a3, 3);
        Instance = MPCGestureHandlerManager::GetInstance(v10, v9);
        v12 = this & -(__int64)(this != 24);
        v13 = Instance;
        v14 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v18,
                v12);
        MPCGestureHandlerManager::DownLevelTo2D(v13, a3, v14, v15);
      }
    }
  }
}
