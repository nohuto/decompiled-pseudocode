/*
 * XREFs of IsNvmeExtendedCommandCompleted @ 0x140032758
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsNvmeExtendedCommandCompleted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)a1 + 4256LL) & 0x4000) != 0 && (*(_DWORD *)(*(_QWORD *)a1 + 4256LL) & 8) == 0;
}
