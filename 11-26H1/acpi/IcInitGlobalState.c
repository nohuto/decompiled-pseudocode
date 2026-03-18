/*
 * XREFs of IcInitGlobalState @ 0x1400BEC08
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400D73C4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_14008F3D8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
