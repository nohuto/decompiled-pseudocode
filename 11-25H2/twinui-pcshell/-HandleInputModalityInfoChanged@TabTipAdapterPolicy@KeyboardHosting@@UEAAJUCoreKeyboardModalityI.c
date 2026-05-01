/*
 * XREFs of ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180037C50
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleInputModalityInfoChanged@AEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180037CE8 (--$HandleInputModalityInfoChanged@AEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Wind.c)
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(
        __int64 a1,
        __int32 *a2,
        _DWORD *a3)
{
  _BYTE *v3; // rsi

  v3 = (_BYTE *)(a1 + 660);
  *a3 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 660)
    && KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(
         (KeyboardHosting::TabTipAdapterPolicy *)a1,
         *(_DWORD *)(a1 + 656))
    && *a2 == 4 )
  {
    *a3 = 2;
    *v3 = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 628), *a2);
  TouchKeyboardExperienceTelemetryLogger::HandleInputModalityInfoChanged<std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    a1 + 628,
    a3);
  return 0LL;
}
