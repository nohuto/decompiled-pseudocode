/*
 * XREFs of _CPinnedList::PinShellLink_::_1_::dtor$1 @ 0x180706184
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CBackupLocationManager *__fastcall CPinnedList::PinShellLink_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
           (CBackupLocationManager **)(a2 + 48),
           a2);
}
