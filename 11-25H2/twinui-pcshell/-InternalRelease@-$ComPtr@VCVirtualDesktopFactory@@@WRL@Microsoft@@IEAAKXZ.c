/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A18C4
 * Callers:
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18009FF58 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A18F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopF.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopFactory>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopFactory>::Release(v1);
  }
  return result;
}
