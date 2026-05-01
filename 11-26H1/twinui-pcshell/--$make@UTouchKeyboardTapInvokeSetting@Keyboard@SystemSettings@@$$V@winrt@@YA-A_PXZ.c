/*
 * XREFs of ??$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA?A_PXZ @ 0x1801073D8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1801083A0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
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
