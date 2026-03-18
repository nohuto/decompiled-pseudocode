/*
 * XREFs of LinkNodeInitGlobalState @ 0x1400BC3D8
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400D73C4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_14008F4B8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
