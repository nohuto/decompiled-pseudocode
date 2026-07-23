/*
 * XREFs of HvlpMapGhcb @ 0x1405C251C
 * Callers:
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
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
