/*
 * XREFs of ?HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18015CE10
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleAllowInputPanelMdmPolicyUpdated@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18015CE74 (--$HandleAllowInputPanelMdmPolicyUpdated@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@.c)
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180170FA4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleAllowInputPanelMdmPolicyUpdated(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  bool *v4; // rcx
  __int64 v5; // r8
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = (bool *)this + 909;
  *(_DWORD *)a3 = 0;
  *v4 = a2 != 0;
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v4)
    && KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(
         (KeyboardHosting::TabTipAdapterPolicy *)(v5 - 16),
         *(_DWORD *)(v5 - 16 + 920)) )
  {
    *(_DWORD *)a3 = 2;
  }
  TouchKeyboardExperienceTelemetryLogger::HandleAllowInputPanelMdmPolicyUpdated<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    &v7,
    a3);
  return 0LL;
}
