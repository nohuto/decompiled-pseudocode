/*
 * XREFs of ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1400A75D0
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x14009B8C0 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400E1560 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::UnmapPagingQueueGpuVAs(VIDMM_DEVICE *this)
{
  unsigned int i; // edi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = *((_QWORD *)this + 9);
    v4 = 32LL * i;
    if ( v3 )
      VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + v4));
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
      VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v5 + v4));
    v6 = *((_QWORD *)this + 11);
    if ( v6 )
      VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v4 + v6));
  }
}
