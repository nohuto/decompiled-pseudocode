/*
 * XREFs of ObNormalizeHandleValue @ 0x14091F114
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED80 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
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
