/*
 * XREFs of _lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::operator() @ 0x18035ABD8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::Run @ 0x18035C050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x18035A534 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18035CE20 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
 */

__int64 __fastcall lambda_d4d75362ac07d926fcc1fc2d8f09e59f_::operator()(RTL_SRWLOCK **a1)
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
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v7);
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
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                           v3);
  }
  return result;
}
