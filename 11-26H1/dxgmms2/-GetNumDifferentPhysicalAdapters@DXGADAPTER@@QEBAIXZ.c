/*
 * XREFs of ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x14003244C
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14003233C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400CA438 (--0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetNumDifferentPhysicalAdapters(DXGADAPTER *this)
{
  if ( *((int *)this + 694) < 0x2000 )
    return 1LL;
  else
    return *((unsigned int *)this + 74);
}
