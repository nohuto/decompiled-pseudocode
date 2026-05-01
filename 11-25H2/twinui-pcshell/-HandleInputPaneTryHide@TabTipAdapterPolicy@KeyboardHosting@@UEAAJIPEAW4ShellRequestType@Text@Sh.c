/*
 * XREFs of ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804745C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DEC4C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     ??$HandleInputPaneTryHide@AEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180472FD8 (--$HandleInputPaneTryHide@AEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardE.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  *(_DWORD *)a3 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal((RTL_SRWLOCK *)this, *((_DWORD *)this + 164))
    && (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)this + 157) != 512
    && !std::_Atomic_storage<bool,1>::load((__int64)this + 660) )
  {
    *(_DWORD *)a3 = 2;
  }
  TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryHide<unsigned int &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v6,
    (char *)a3);
  return 0LL;
}
