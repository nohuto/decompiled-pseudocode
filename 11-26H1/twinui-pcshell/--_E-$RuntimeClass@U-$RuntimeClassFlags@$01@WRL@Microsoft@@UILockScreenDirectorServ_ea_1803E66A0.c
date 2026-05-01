/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803E66A0
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@WDA@EAAPEAXI@Z @ 0x1803E6680 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@.c)
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180091DDC (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCWRLObject.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[31] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>((CWRLObjectWithGITSite *)(a1 + 2));
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
