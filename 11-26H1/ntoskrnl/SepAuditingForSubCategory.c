/*
 * XREFs of SepAuditingForSubCategory @ 0x1404BB95C
 * Callers:
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
 * Callees:
 *     <none>
 */

char __fastcall SepAuditingForSubCategory(int a1, char a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)(a1 - 100);
  if ( a2 )
    return *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v2);
  else
    return *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v2 + 1);
}
