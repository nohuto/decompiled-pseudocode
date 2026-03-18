/*
 * XREFs of ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058168
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1800582E4 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800583D4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058410 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CWindowBackgroundTreatment::HasValidRenderingRealization(
        CWindowBackgroundTreatment *this,
        const struct RenderTargetInfo *a2)
{
  char v4; // si
  __int64 v5; // rdi
  CCachedImageProducer::CCachedRealization **v6; // rbx
  CCachedImageProducer::CCachedRealization **v7; // rdi
  char v8; // r14

  v4 = 0;
  if ( CWindowBackgroundTreatment::HasValidSource(this) )
  {
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
    {
      v6 = *(CCachedImageProducer::CCachedRealization ***)(v5 + 32);
      v7 = *(CCachedImageProducer::CCachedRealization ***)(v5 + 40);
      v8 = *((_BYTE *)g_pComposition + 6458);
      while ( v6 != v7 )
      {
        if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)*v6 + 24LL))(*(_QWORD *)*v6) >= 0
          && CCachedImageProducer::CCachedRealization::IsUsableOnTarget(*v6, a2, v8)
          && CCachedImageProducer::CCachedRealization::AttributesMatch(*v6, a2) )
        {
          if ( !*v6 || !*((_QWORD *)*v6 + 1) )
            return v4;
          return 1;
        }
        ++v6;
      }
    }
    else
    {
      return 1;
    }
  }
  return v4;
}
