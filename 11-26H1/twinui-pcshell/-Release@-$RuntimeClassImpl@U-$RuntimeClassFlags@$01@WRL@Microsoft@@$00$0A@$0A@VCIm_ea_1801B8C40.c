/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8C40
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180230DF0 (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??1?$ComPtr@VCMultitaskingViewServiceProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1804965A8 (--1-$ComPtr@VCMultitaskingViewServiceProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1804968F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1804968F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180496900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180496900.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x180496910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180496910.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x180496920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180496920.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::Release(
        __int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *(unsigned int *)(a1 + 108);
  while ( (_DWORD)v2 != 0x7FFFFFFF
       && (_DWORD)v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24) + 64LL))(
        a1 + 24,
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
