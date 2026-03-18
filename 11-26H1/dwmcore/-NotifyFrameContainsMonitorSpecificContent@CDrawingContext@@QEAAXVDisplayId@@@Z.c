/*
 * XREFs of ?NotifyFrameContainsMonitorSpecificContent@CDrawingContext@@QEAAXVDisplayId@@@Z @ 0x1801B6280
 * Callers:
 *     ?RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802AE070 (-RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::NotifyFrameContainsMonitorSpecificContent(__int64 a1, int a2)
{
  if ( a2 == -1 || a2 == *(_DWORD *)(a1 + 56) || *(_DWORD *)(a1 + 56) == -3 )
    *(_BYTE *)(a1 + 7981) = 1;
  else
    *(_BYTE *)(a1 + 7984) = 1;
}
