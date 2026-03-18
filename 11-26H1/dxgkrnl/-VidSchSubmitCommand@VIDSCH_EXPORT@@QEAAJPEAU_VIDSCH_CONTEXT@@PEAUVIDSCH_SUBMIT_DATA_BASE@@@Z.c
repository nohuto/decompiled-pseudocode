/*
 * XREFs of ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x14003D9D4
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSubmitCommand(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct VIDSCH_SUBMIT_DATA_BASE *))(*((_QWORD *)this + 1)
                                                                                               + 448LL))(
           a2,
           a3);
}
