/*
 * XREFs of ExpInternalDriverObjectEntry @ 0x140CEAA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInternalDriverObjectEntry(unsigned __int64 a1)
{
  ExpSysDbgLock.QuantumTarget = a1;
  return 0LL;
}
