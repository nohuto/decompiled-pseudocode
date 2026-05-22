/*
 * XREFs of ??4?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A6214
 * Callers:
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801A5D68 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextM.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801A62C0 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A6400 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x1801A5E18 (--$_Assign_counted_range@PEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator.c)
 */

void **__fastcall std::vector<DisplayOcclusionRect>::operator=(void **a1, __int64 a2)
{
  if ( a1 != (void **)a2 )
    std::vector<DisplayOcclusionRect>::_Assign_counted_range<DisplayOcclusionRect *>(
      a1,
      *(char **)a2,
      0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4));
  return a1;
}
