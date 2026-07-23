/*
 * XREFs of PsGetProcessMachine @ 0x140A96400
 * Callers:
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     PspSelectMachineForProcess @ 0x140A9629C (PspSelectMachineForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessMachine(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1772);
}
