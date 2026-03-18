/*
 * XREFs of ADAPTER_RENDER_DdiResumeFromPageFault @ 0x140074D10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z @ 0x140072664 (-DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z.c)
 */

void __fastcall ADAPTER_RENDER_DdiResumeFromPageFault(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_RESUME_FROM_PAGE_FAULT *a2)
{
  ADAPTER_RENDER::DdiResumeFromPageFault(a1, a2);
}
