/*
 * XREFs of ?add_StateChanged@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180356390
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@56@@Z @ 0x18035604C (-StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window_ea_18035604C.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::add_StateChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v5 = a2;
    *a3 = *(_QWORD *)winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::StateChanged(
                       (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
                       (__int64)v4,
                       &v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
