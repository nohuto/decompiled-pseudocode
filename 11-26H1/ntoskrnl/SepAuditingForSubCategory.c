/*
 * XREFs of SepAuditingForSubCategory @ 0x1404C210C
 * Callers:
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     SeAssignPrimaryToken @ 0x140A2C3D0 (SeAssignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 * Callees:
 *     <none>
 */

char __fastcall SepAuditingForSubCategory(int a1, char a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)(a1 - 100);
  if ( a2 )
    return *((_BYTE *)&SepRmCapTableLock.MiscFlags + 2 * v2 + 4);
  else
    return *((_BYTE *)&SepRmCapTableLock.MiscFlags + 2 * v2 + 5);
}
