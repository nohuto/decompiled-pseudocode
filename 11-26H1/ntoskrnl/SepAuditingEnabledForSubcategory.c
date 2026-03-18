/*
 * XREFs of SepAuditingEnabledForSubcategory @ 0x1404703B0
 * Callers:
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409FB810 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAuditingEnabledForSubcategory(int a1, char a2, char a3)
{
  __int64 v3; // rax

  v3 = (unsigned int)(a1 - 100);
  return *((_BYTE *)&SepRmCapTableLock.MiscFlags + 2 * v3 + 4) && a2
      || *((_BYTE *)&SepRmCapTableLock.MiscFlags + 2 * v3 + 5) && a3;
}
