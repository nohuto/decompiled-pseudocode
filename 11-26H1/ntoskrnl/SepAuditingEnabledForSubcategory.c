/*
 * XREFs of SepAuditingEnabledForSubcategory @ 0x140469B30
 * Callers:
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920410 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAuditingEnabledForSubcategory(int a1, char a2, char a3)
{
  __int64 v3; // rax

  v3 = (unsigned int)(a1 - 100);
  return *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v3) && a2
      || *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v3 + 1) && a3;
}
