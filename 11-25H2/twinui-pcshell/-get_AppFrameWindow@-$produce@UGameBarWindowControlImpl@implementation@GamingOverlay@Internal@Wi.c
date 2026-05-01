/*
 * XREFs of ?get_AppFrameWindow@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_K@Z @ 0x180356620
 * Callers:
 *     <none>
 * Callees:
 *     ?AppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_KXZ @ 0x18035452C (-AppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QE.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_AppFrameWindow(
        __int64 a1,
        __int64 *a2)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a2 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::AppFrameWindow(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
