/*
 * XREFs of ?SetCachedCpuClipAntialiasSink@CCpuClippingData@@QEAAXPEAVCCpuClipAntialiasSink@@@Z @ 0x1801CD9DC
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCpuClippingData::SetCachedCpuClipAntialiasSink(
        CCpuClippingData *this,
        struct CCpuClipAntialiasSink *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx

  v2 = (__int64 *)*((_QWORD *)this + 7);
  v3 = *v2;
  *v2 = (__int64)a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct CCpuClipAntialiasSink *))a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
