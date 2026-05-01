/*
 * XREFs of _lambda_8d97bc2f35cacd2ea4b9e438817592f8_::operator() @ 0x18035434C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___::Run @ 0x180355770 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8d97bc2f35cacd2ea4b9e438817592f8___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180353C54 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180356538 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
 */

__int64 __fastcall lambda_8d97bc2f35cacd2ea4b9e438817592f8_::operator()(RTL_SRWLOCK **a1)
{
  _QWORD *v2; // rax
  const char *v3; // r9
  bool v4; // di
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
                   a1 + 1,
                   &v7);
  v4 = *v2 && (*a1)[10].Ptr;
  if ( v7 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v7);
  try
  {
    if ( v4 )
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::operator()<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
        *a1 + 10,
        (__int64)*a1,
        (unsigned int *)a1 + 4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x373,
                           (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
                           v3);
  }
  return result;
}
