/*
 * XREFs of AslFree @ 0x18015C31C
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18015A37C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslEnvBuildBasic @ 0x18015A770 (AslEnvBuildBasic.c)
 *     AslRegistryGetString @ 0x18015C054 (AslRegistryGetString.c)
 *     AslRegistryGetStringExpand @ 0x18015C344 (AslRegistryGetStringExpand.c)
 *     AslStringDuplicate @ 0x18015C594 (AslStringDuplicate.c)
 *     AslEnvExpandStrings2 @ 0x18015CA50 (AslEnvExpandStrings2.c)
 *     PiiFilterDelete @ 0x1802C555C (PiiFilterDelete.c)
 *     PiiFilterEmbeddedPathsExecute @ 0x1806765FC (PiiFilterEmbeddedPathsExecute.c)
 *     PiiFilterExecute @ 0x180676A30 (PiiFilterExecute.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslFree(void *a1, void *a2)
{
  BOOLEAN result; // al

  if ( a2 )
    return RtlFreeHeap(a1, 0, a2);
  return result;
}
