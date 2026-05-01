/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18020882C
 * Callers:
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18029F270 (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18029F37C (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Deta.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180208860 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopPersistence>::Release(v1);
  }
  return result;
}
