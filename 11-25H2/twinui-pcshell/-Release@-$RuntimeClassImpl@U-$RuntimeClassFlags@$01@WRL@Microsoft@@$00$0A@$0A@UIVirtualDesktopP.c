/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180208860
 * Callers:
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18020882C (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18029F270 (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 *     ??$Make@VCTempAppVisualArray@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTempAppVisualArray@@@12@XZ @ 0x18052245C (--$Make@VCTempAppVisualArray@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCTempAppVisualArray@@@12.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805229C4 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006B110 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopPersistence>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
