/*
 * XREFs of ?get_EffectiveSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x1804698F0
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DEC4C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::get_EffectiveSetting(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // rdx

  v2 = a1 + 48;
  if ( !a1 )
    v2 = 64LL;
  v3 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)v2);
  *v4 = v3;
  return 0LL;
}
