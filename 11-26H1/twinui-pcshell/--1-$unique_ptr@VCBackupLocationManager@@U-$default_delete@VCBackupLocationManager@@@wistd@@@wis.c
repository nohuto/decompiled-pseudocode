/*
 * XREFs of ??1?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@QEAA@XZ @ 0x18068C12C
 * Callers:
 *     _CPinnedList::InternalModify_::_1_::dtor$6 @ 0x180706047 (_CPinnedList--InternalModify_--_1_--dtor$6.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$1 @ 0x180706184 (_CPinnedList--PinShellLink_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$0 @ 0x180706248 (_CPinList--_CreateTombstone_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18068C6A4 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 */

CBackupLocationManager *__fastcall wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
        CBackupLocationManager **a1,
        unsigned int a2)
{
  CBackupLocationManager *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CBackupLocationManager *)CBackupLocationManager::`scalar deleting destructor'(result, a2);
  return result;
}
