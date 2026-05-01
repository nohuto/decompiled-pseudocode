/*
 * XREFs of ?HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804748B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$HandleOnScreenKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180473294 (--$HandleOnScreenKeyboardVisibilityChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleOnScreenKeyboardVisibilityChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  bool *v4; // rcx
  __int64 v5; // r8
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *(_DWORD *)a3 = 0;
  v4 = (bool *)this + 609;
  *v4 = a2 != 0;
  if ( std::_Atomic_storage<bool,1>::load((__int64)v4)
    && KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal((RTL_SRWLOCK *)(v5 - 16), *(_DWORD *)(v5 - 16 + 656)) )
  {
    *(_DWORD *)a3 = 2;
  }
  TouchKeyboardExperienceTelemetryLogger::HandleOnScreenKeyboardVisibilityChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v7,
    (char *)a3);
  return 0LL;
}
