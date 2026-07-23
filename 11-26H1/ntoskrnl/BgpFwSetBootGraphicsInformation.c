/*
 * XREFs of BgpFwSetBootGraphicsInformation @ 0x14071ADF0
 * Callers:
 *     BgSetBootGraphicsInformation @ 0x14071A7DC (BgSetBootGraphicsInformation.c)
 * Callees:
 *     BgpFwMapFrameBuffer @ 0x14071AD4C (BgpFwMapFrameBuffer.c)
 */

__int64 __fastcall BgpFwSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( LOBYTE(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) )
    return (unsigned int)-1073741637;
  *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[48] = *(_OWORD *)a2;
  *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[64] = *(_OWORD *)(a2 + 16);
  LODWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink) = *(_DWORD *)(a2 + 8);
  HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) = *(_DWORD *)(a2 + 12);
  HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    LODWORD(gLoadedDiffHivesLock.Timer.Dpc) = 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    LODWORD(gLoadedDiffHivesLock.Timer.Dpc) = 5;
LABEL_7:
    LOWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) = 1;
    gLoadedDiffHivesLock.WaitBlock[0].WaitListEntry.Flink = *(struct _LIST_ENTRY **)a2;
    BgpFwMapFrameBuffer((__int64)&gLoadedDiffHivesLock.Timer.TimerListEntry);
    return v2;
  }
  return (unsigned int)-1073741637;
}
