/*
 * XREFs of ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180474940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$HandleShellRequestedHide@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18047336C (--$HandleShellRequestedHide@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExp.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  *(_DWORD *)a2 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal((RTL_SRWLOCK *)this - 2, *((_DWORD *)this + 160))
    && (!std::_Atomic_storage<bool,1>::load((__int64)this + 644) || *((_BYTE *)this + 583)) )
  {
    *(_DWORD *)a2 = 2;
  }
  TouchKeyboardExperienceTelemetryLogger::HandleShellRequestedHide<enum Windows::Internal::Shell::Text::ShellRequestType &>((char *)a2);
  return 0LL;
}
