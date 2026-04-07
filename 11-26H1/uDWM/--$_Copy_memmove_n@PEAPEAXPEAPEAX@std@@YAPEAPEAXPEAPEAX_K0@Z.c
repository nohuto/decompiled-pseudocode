/*
 * XREFs of ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x1800737B8
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800735C4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18007C654 (--$_Assign_counted_range@PEAPEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Copy_memmove_n<void * *,void * *>(void *a1, __int64 a2, void *a3)
{
  return std::_Copy_memmove_tail<CVisualProxy * *>(a1, a3);
}
