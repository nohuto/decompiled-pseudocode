/*
 * XREFs of ?CommitProjectedMemoryUsage@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E56D8
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CommitProjectedMemoryUsage(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  unsigned int i; // r9d
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r8

  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6952LL); *(_QWORD *)(v4 + v2 + 104) = *(_QWORD *)(304 * v3 + v2 + 136) )
  {
    v2 = *((_QWORD *)this + 1);
    v3 = (unsigned __int16)i++;
    v4 = 304 * v3;
    *(_QWORD *)(v4 + v2 + 80) = *(_QWORD *)(304 * v3 + v2 + 112);
    *(_QWORD *)(v4 + v2 + 88) = *(_QWORD *)(304 * v3 + v2 + 120);
    *(_QWORD *)(v4 + v2 + 96) = *(_QWORD *)(304 * v3 + v2 + 128);
  }
}
