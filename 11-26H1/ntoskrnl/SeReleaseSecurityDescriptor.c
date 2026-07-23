/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x140A60CA0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObDeleteCapturedInsertInfo @ 0x14093D2D0 (ObDeleteCapturedInsertInfo.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( a2 )
  {
    if ( a2 != 1 )
      return;
  }
  else if ( a3 != 1 )
  {
    return;
  }
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
