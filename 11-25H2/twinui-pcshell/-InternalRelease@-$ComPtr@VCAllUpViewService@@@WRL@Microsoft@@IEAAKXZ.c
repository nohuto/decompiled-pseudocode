/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x180221398
 * Callers:
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A8AA4 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1802A8B64 (--$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@.c)
 *     ??$MakeAndInitialize@VAppResizeView@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeView@@AEA_N@Z @ 0x18050AD7C (--$MakeAndInitialize@VAppResizeView@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeView@@AE.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___ @ 0x18050AF08 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___--_CTask.c)
 *     ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x18050AF30 (--1-$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x18050B09C (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x18050B410 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAllUpViewService@@UIEdgeUiTouchInvocation@@UIAllUpViewInvoker@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802213C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1802213C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IAllUpViewService,IEdgeUiTouchInvocation,IAllUpViewInvoker>::Release(v1);
  }
  return result;
}
