/*
 * XREFs of ?get_Bounds@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18035CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AURect@Foundation@56@XZ @ 0x18035AF08 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-AURec.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_Bounds(
        __int64 a1,
        __m128i *a2)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a2 = _mm_loadu_si128((const __m128i *)winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
                                             v2,
                                             (__int64)v4));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
