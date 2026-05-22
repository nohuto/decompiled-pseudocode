/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180023640
 * Callers:
 *     <none>
 * Callees:
 *     ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x18000D480 (-Display3DCursor@MPCHeadProcessor@@UEAA_NXZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024128 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  __int64 v5; // rcx
  bool v6; // al
  MPCGestureHandlerManager *Instance; // rbx
  struct MPCGestureHandlerManager *v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rax
  char v11; // cl
  __int64 v12; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) && *((_BYTE *)a3 + 240) )
  {
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v5, a3, 4LL);
    v6 = *((_BYTE *)a3 + 900) || !MPCHeadProcessor::Display3DCursor((MPCHeadProcessor *)this);
    *((_BYTE *)a3 + 900) = v6;
    Instance = MPCGestureHandlerManager::GetInstance();
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
      &v13,
      this & -(__int64)(this != 24));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, a3);
    v8 = MPCGestureHandlerManager::GetInstance();
    v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v13,
           this & -(__int64)(this != 24));
    MPCGestureHandlerManager::OnGazeUpdate(v8, v9);
  }
  v10 = (_BYTE *)(this + 3640);
  v11 = *((_BYTE *)a3 + 312) != 0;
  if ( !*(_BYTE *)(this + 3641) || *v10 != v11 )
  {
    *v10 = v11;
    v12 = *(_QWORD *)(this + 24);
    *(_BYTE *)(this + 3641) = 1;
    *(_BYTE *)(v12 + 1488) = v11;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 16) + 48LL))(
      *(_QWORD *)(this + 16),
      *(_QWORD *)(this + 24));
  }
}
