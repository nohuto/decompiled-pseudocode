/*
 * XREFs of AslFree @ 0x18013CDD4
 * Callers:
 *     AslEnvBuildBasic @ 0x18013AABC (AslEnvBuildBasic.c)
 *     AslRegistryGetStringExpand @ 0x18013C080 (AslRegistryGetStringExpand.c)
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013C2DC (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslRegistryGetString @ 0x18013CB10 (AslRegistryGetString.c)
 *     PiiFilterDelete @ 0x1802CDF8C (PiiFilterDelete.c)
 *     PiiFilterEmbeddedPathsExecute @ 0x1806502D0 (PiiFilterEmbeddedPathsExecute.c)
 *     PiiFilterExecute @ 0x180650730 (PiiFilterExecute.c)
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
