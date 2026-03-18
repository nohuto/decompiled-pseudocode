/*
 * XREFs of FlushTemporaryResourcesForAllocation @ 0x1400AF62C
 * Callers:
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011B000 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC.c)
 * Callees:
 *     ReleaseTemporaryResourcesForAllocation @ 0x1400AFF9C (ReleaseTemporaryResourcesForAllocation.c)
 */

_QWORD *__fastcall FlushTemporaryResourcesForAllocation(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rcx

  v3 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    result = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v5 = result[2];
    v6 = result - 6;
    v7 = *(result - 6);
    if ( *(_QWORD **)(v7 + 8) != result - 6 || (v8 = (_QWORD *)*(result - 5), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    v6[1] = 0LL;
    ReleaseTemporaryResourcesForAllocation(a1, v5, v6);
  }
  return result;
}
