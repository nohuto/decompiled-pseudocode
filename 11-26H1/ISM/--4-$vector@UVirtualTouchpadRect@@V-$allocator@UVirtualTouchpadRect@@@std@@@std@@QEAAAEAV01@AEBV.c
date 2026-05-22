/*
 * XREFs of ??4?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A5658
 * Callers:
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801A5238 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextMe.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801A5700 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A5860 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXPEAUVirtualTouchpadRect@@_K@Z @ 0x1801A52E8 (--$_Assign_counted_range@PEAUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@U.c)
 */

char **__fastcall std::vector<VirtualTouchpadRect>::operator=(char **a1, __int64 a2)
{
  if ( a1 != (char **)a2 )
    std::vector<VirtualTouchpadRect>::_Assign_counted_range<VirtualTouchpadRect *>(
      a1,
      *(char **)a2,
      0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3));
  return a1;
}
