/*
 * XREFs of ?GetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1401260F8
 * Callers:
 *     VidMmGetAllocationPriority @ 0x140048570 (VidMmGetAllocationPriority.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetAllocationPriority(VIDMM_GLOBAL *this, struct VIDMM_MULTI_ALLOC *a2, unsigned int *a3)
{
  *a3 = *(_DWORD *)(***(_QWORD ***)a2 + 48LL);
}
