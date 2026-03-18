/*
 * XREFs of AddPendingTemporaryResourceLegacy @ 0x1400BE18C
 * Callers:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@T_LARGE_INTEGER@@PEA_N@Z @ 0x14011BE88 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@W4_DXGK_MEMORY_T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddPendingTemporaryResourceLegacy(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v4[3] = *(_QWORD *)(a2 + 64);
    v4[4] = *(unsigned int *)(a2 + 56);
    v4[5] = *(int *)(a2 + 60);
    WdLogGlobalForLineNumber = 138;
  }
  result = a1 + 1792;
  v6 = *(_QWORD **)(a1 + 1800);
  if ( *v6 != a1 + 1792 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v6;
  *v6 = a2;
  *(_QWORD *)(a1 + 1800) = a2;
  return result;
}
