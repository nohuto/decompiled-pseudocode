/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180202200
 * Callers:
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0448 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x18020F93C (--$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAP.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDCompBatchAnimationCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180202230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDCompBatchAnima.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDCompBatchAnimationCallback>::Release(v1);
  }
  return result;
}
