/*
 * XREFs of ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A120
 * Callers:
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14001A094 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 */

CFlipManagerSignal *__fastcall CFlipManagerSignal::CFlipManagerSignal(
        CFlipManagerSignal *this,
        __int64 a2,
        char a3,
        struct FlipManagerTokenIFlipInfo *a4)
{
  CFlipManagerSignal *result; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CFlipManagerSignal::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a2;
  *((_BYTE *)this + 64) = a3;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() && a4 )
  {
    v8 = *((_QWORD *)a4 + 13);
    v9 = 0LL;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    *((_QWORD *)this + 3) = v9;
  }
  result = this;
  v7 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v7[1] = v7;
  *v7 = v7;
  return result;
}
