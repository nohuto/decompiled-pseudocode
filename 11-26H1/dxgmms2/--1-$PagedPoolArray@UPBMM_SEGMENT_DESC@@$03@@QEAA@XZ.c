/*
 * XREFs of ??1?$PagedPoolArray@UPBMM_SEGMENT_DESC@@$03@@QEAA@XZ @ 0x1400A69E8
 * Callers:
 *     ?VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400A6C3C (-VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 *     InitializePhysicalAdapter @ 0x1400AF7BC (InitializePhysicalAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<PBMM_SEGMENT_DESC,4>::~PagedPoolArray<PBMM_SEGMENT_DESC,4>(void **a1)
{
  if ( *a1 != a1 + 1 )
    operator delete(*a1);
}
