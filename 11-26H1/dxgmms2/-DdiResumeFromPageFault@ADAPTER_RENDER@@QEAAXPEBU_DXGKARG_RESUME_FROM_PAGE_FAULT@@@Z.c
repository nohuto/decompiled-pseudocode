/*
 * XREFs of ?DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z @ 0x14004CEBC
 * Callers:
 *     ?VidMmEndFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x14004EC3C (-VidMmEndFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmProcessFaultAndStall@@YAJPEAVVIDMM_GLOBAL@@_KPEAXIII@Z @ 0x14004ED44 (-VidMmProcessFaultAndStall@@YAJPEAVVIDMM_GLOBAL@@_KPEAXIII@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall ADAPTER_RENDER::DdiResumeFromPageFault(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_RESUME_FROM_PAGE_FAULT *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_RESUME_FROM_PAGE_FAULT *))DxgCoreInterface[107])(
    this,
    a2);
}
