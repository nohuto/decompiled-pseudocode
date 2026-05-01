/*
 * XREFs of ??$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA?A_PXZ @ 0x18014A13C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x18014B040 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

_QWORD *__fastcall winrt::make<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,>(_QWORD *a1)
{
  _QWORD *v2; // rbx

  v2 = operator new(0x70uLL);
  memset_0(v2, 0, 0x70uLL);
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::TouchKeyboardTapInvokeSetting((SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)v2);
  *v2 = &winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`vftable';
  *a1 = v2 + 2;
  return a1;
}
