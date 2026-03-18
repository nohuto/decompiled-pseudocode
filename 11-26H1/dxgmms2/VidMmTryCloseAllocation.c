/*
 * XREFs of VidMmTryCloseAllocation @ 0x14003DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4AA8 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDIC.c)
 */

__int64 __fastcall VidMmTryCloseAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct _KEVENT **a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4)
{
  return VIDMM_GLOBAL::CloseAllocation(a1, a2, 1, 0LL, a4, a3);
}
