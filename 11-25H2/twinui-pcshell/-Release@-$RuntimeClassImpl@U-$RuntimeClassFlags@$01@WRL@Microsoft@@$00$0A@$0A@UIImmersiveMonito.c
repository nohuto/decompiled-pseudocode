/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052FA0
 * Callers:
 *     ??$MakeAndInitialize@VAppSizeConstraintsCache@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSizeConstraintsCache@@@Z @ 0x180052EE8 (--$MakeAndInitialize@VAppSizeConstraintsCache@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSizeCo.c)
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1800B91FC (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea__&_ @ 0x1800B9330 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____l.c)
 *     Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____::_ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____ @ 0x1800B9634 (Microsoft--WRL--ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____--_ComPt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 3);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 3, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
