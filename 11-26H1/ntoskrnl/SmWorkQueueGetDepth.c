/*
 * XREFs of SmWorkQueueGetDepth @ 0x140491FB8
 * Callers:
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmWorkQueueGetDepth(_DWORD *a1, int a2)
{
  unsigned int v2; // eax

  v2 = a1[639];
  if ( !a2 )
    v2 >>= 8;
  return a1[638] + a1[766] + v2;
}
