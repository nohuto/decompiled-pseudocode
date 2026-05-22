/*
 * XREFs of ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BE520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF1B4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCVoiceProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct MPCGestureHandlerManager *Instance; // rax
  unsigned __int64 v13; // rdx
  MPCGestureHandlerManager *v14; // rbx
  __int64 *v15; // rax
  const char *v16; // r9
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a2 + 240) )
  {
    MPCConstantManager::GetInstance(v5, v4, v6, v7);
    *(_QWORD *)&v17 = L"AllowDownleveling";
    *((_QWORD *)&v17 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"AllowDownleveling");
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(v8, this & -(__int64)(this != 24), &v17) )
    {
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v9, (__int64)a2, 4);
      Instance = MPCGestureHandlerManager::GetInstance(v11, v10);
      v13 = this & -(__int64)(this != 24);
      v14 = Instance;
      v15 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v18,
              v13);
      MPCGestureHandlerManager::DownLevelTo2D(v14, a2, v15, v16);
    }
  }
}
