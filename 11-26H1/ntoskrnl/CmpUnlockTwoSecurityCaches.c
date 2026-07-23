/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1408E57C4
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a1 == a2 )
    v2 = a1;
  else
    CmUnlockHiveSecurity(a1);
  return CmUnlockHiveSecurity(v2);
}
