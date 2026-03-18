/*
 * XREFs of ObNormalizeHandleValue @ 0x1409FA514
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409F9428 (SeAuditHandleDuplication.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  bool v1; // dl
  unsigned __int64 v2; // rax

  v1 = a1 <= 0xFFFFFFFFFFFFFFFDuLL && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL;
  v2 = a1 ^ 0xFFFFFFFF80000000uLL;
  if ( !v1 )
    v2 = a1;
  return v2 & 0xFFFFFFFFFFFFFFFCuLL;
}
