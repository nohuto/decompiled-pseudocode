/*
 * XREFs of IsNvmeControllerGone @ 0x140032940
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsNvmeControllerGone(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 400LL) + 184LL) & 0x40000000) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 920) + 40LL) == -1LL;
}
