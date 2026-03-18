/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 *     TryTrimWnfProcess @ 0x1400A6574 (TryTrimWnfProcess.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1400C8D90 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4)
{
  struct VIDMM_GLOBAL *v8; // rdx
  unsigned int i; // edi
  VIDMM_PROCESS_BUDGET_STATE *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 152LL) & 0x10) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      return;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1557;
  }
  v8 = *(struct VIDMM_GLOBAL **)this;
  for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6952LL); v8 = *(struct VIDMM_GLOBAL **)this )
  {
    v10 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)this + 1) + 8LL + 304LL * (unsigned __int16)i);
    v12 = 0LL;
    VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(v10, &v12, a3, a4, v8, i);
    v11 = v12;
    if ( *a2 > v12 )
      v11 = *a2;
    ++i;
    *a2 = v11;
  }
}
