/*
 * XREFs of MiSplitPageChain @ 0x1404C418C
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402D60A8 (MiDetermineThreadFaultCluster.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiGetCachedPoolPages @ 0x1404B2E60 (MiGetCachedPoolPages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSplitPageChain(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r10
  _QWORD *result; // rax

  v3 = *(_QWORD **)a1;
  v4 = 1LL;
  *a3 = *(_QWORD *)a1;
  while ( v4 != a2 && *v3 )
  {
    v3 = (_QWORD *)*v3;
    ++v4;
  }
  result = (_QWORD *)*v3;
  *(_QWORD *)a1 = *v3;
  if ( !result )
    *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) -= v4;
  *v3 = 0LL;
  a3[1] = v3;
  a3[2] = v4;
  return result;
}
