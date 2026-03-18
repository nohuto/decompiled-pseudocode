/*
 * XREFs of FlushTemporaryResourcesForAllocation_0 @ 0x140117CA8
 * Callers:
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140117C90 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALL.c)
 * Callees:
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 */

void __fastcall FlushTemporaryResourcesForAllocation_0(struct VIDMM_PHYSICAL_ADAPTER_LEGACY *a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rcx

  if ( *(_QWORD *)(a2 + 216) )
  {
    v3 = (_QWORD *)(a2 + 152);
    v4 = *(_QWORD *)(a2 + 152);
    if ( *(_QWORD *)(v4 + 8) != a2 + 152 || (v5 = *(_QWORD **)(a2 + 160), (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    *(_QWORD *)(a2 + 160) = 0LL;
    VidMmReleaseTemporaryResourcesForLegacyAllocation(
      a1,
      (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)a2,
      *(_BYTE *)(a2 + 56) & 1);
  }
}
