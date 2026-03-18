/*
 * XREFs of ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003B5A4
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD454 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOC.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F7884 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003B5E0 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
        VIDMM_RECYCLE_HEAP_MGR *this,
        unsigned __int8 a2)
{
  int v2; // eax

  if ( a2 )
    return VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(this, a2);
  v2 = dword_14008A524;
  if ( (unsigned __int64)qword_14008A318 > 0x53333333 )
    v2 = dword_14008A514;
  return (unsigned int)(v2 << 20);
}
