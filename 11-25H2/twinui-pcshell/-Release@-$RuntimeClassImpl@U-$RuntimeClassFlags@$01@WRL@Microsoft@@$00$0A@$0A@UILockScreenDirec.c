/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180211850
 * Callers:
 *     ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802B0F74 (--$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 *     ??1?$ComPtr@VLockScreenDirectorServiceProviderImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CCCB0 (--1-$ComPtr@VLockScreenDirectorServiceProviderImpl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1803DDC00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILo_ea_1803DDC00.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1803DDC10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILo_ea_1803DDC10.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1803DDC20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILo_ea_1803DDC20.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006B110 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 124), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 48) + 64LL))(v3 + 48, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
