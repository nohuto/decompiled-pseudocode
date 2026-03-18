/*
 * XREFs of PsGetProcessMachine @ 0x140A918B0
 * Callers:
 *     MiLogHotPatchRundownForProcess @ 0x1406FC34C (MiLogHotPatchRundownForProcess.c)
 *     PspSelectMachineForProcess @ 0x140A9174C (PspSelectMachineForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessMachine(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1772);
}
