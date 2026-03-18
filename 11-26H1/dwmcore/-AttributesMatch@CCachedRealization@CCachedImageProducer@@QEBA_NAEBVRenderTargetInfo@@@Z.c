/*
 * XREFs of ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058410
 * Callers:
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1800579DC (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058168 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x18005822C (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedImageProducer::CCachedRealization::AttributesMatch(
        CCachedImageProducer::CCachedRealization *this,
        const struct RenderTargetInfo *a2)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  return COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        *((float *)a2 + 4)
                      - *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 88LL))(
                                     *(_QWORD *)this,
                                     v3)
                                 + 16)) & _xmm) <= 0.0000011920929;
}
