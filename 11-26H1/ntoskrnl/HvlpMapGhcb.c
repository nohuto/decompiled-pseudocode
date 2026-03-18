/*
 * XREFs of HvlpMapGhcb @ 0x1405BFCAC
 * Callers:
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140363DC0 (MmMapIoSpaceEx.c)
 */

__int64 HvlpMapGhcb()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = MmMapIoSpaceEx(__readmsr(0xC0010130), 4096LL, 4u);
  CurrentPrcb->Ghcb = (void *)result;
  *(_WORD *)(result + 4090) = 1;
  return result;
}
