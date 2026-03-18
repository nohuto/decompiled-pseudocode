/*
 * XREFs of ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x140112AA0
 * Callers:
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x140112990 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x140112B4C (-ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ReportBlockStates(VIDMM_RECYCLE_HEAP *this)
{
  char *v1; // rdi
  char *i; // rbx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v1; i = *(char **)i )
  {
    if ( (byte_14008A202 & 4) != 0 )
    {
      v4 = *((_QWORD *)i + 3);
      v5 = *((_QWORD *)i + 4) - v4;
      v6 = *(unsigned int *)this;
      if ( (_DWORD)v6 == 3 || (unsigned int)(v6 - 4) <= 2 )
        v4 = *((_QWORD *)i + 5);
      LODWORD(v9) = 1;
      LODWORD(v8) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 24LL);
      LODWORD(v7) = *(_DWORD *)this;
      McTemplateK0pxqqt_EtwWriteTransfer(v6, &EventCreateProcessAllocation, (unsigned int)v8, v4, v5, v7, v8, v9);
    }
    VIDMM_RECYCLE_BLOCK::ReportStates((VIDMM_RECYCLE_BLOCK *)(i - 16));
  }
}
