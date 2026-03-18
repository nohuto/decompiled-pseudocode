/*
 * XREFs of ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x14005B99C
 * Callers:
 *     DxgkGetCachedHybridQueryValue @ 0x1403C0EE0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1403D8280 (DxgkCacheHybridQueryValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetGpuPreferenceDListState(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2);
  if ( v2 )
    return *(unsigned int *)(v2 + 104);
  WdLogSingleEntry1(3LL);
  result = 0LL;
  WdLogGlobalForLineNumber = 977;
  return result;
}
