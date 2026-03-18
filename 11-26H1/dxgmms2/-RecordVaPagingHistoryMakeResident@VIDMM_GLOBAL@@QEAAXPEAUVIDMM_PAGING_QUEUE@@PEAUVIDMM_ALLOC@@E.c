/*
 * XREFs of ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1400E52E8
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC *a3,
        char a4,
        unsigned __int64 a5)
{
  char *v6; // rbp
  char *v10; // rax
  char *v11; // r8
  __int64 v12; // rax

  v6 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  *((_QWORD *)v6 + 1) = KeGetCurrentThread();
  v10 = operator new(48, (VIDMM_GLOBAL *)((char *)this + 41168), 0xBu, 0);
  v11 = v10;
  if ( v10 )
  {
    v10[32] = a4;
    *((_QWORD *)v10 + 1) = a2;
    *((_QWORD *)v10 + 2) = a3;
    *((_QWORD *)v10 + 5) = a5 & -(__int64)(a4 != 0);
    v12 = *((_QWORD *)a3 + 2);
    if ( v12 )
      v12 = *(_QWORD *)(v12 + 32);
    *((_QWORD *)v11 + 3) = v12;
    *(_QWORD *)v11 = 0LL;
    if ( a2 )
      *(_QWORD *)v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 16LL);
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
