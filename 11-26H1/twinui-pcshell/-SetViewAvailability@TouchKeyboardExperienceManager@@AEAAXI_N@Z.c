/*
 * XREFs of ?SetViewAvailability@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180214C30
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024D5F8 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180473C34 (-UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::SetViewAvailability(TouchKeyboardExperienceManager *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 176LL))(*(_QWORD *)(*((_QWORD *)this + 73) + 48LL));
}
