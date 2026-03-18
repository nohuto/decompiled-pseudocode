/*
 * XREFs of ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x18005822C
 * Callers:
 *     ?HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801DB820 (-HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1800582E4 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058410 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CWindowBackgroundBitmapProducer::HasValidRealization(
        CWindowBackgroundBitmapProducer *this,
        const struct RenderTargetInfo *a2,
        char a3)
{
  CCachedImageProducer::CCachedRealization **v4; // rbx
  CCachedImageProducer::CCachedRealization **v6; // rdi
  char v7; // si
  char v8; // r15

  v4 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 4);
  v6 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 5);
  v7 = 0;
  v8 = *((_BYTE *)g_pComposition + 6458);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 0;
    if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)*v4 + 24LL))(*(_QWORD *)*v4) >= 0
      && CCachedImageProducer::CCachedRealization::IsUsableOnTarget(*v4, a2, v8)
      && CCachedImageProducer::CCachedRealization::AttributesMatch(*v4, a2) )
    {
      break;
    }
    ++v4;
  }
  if ( !*v4 )
    return 0;
  if ( !a3 || *((_QWORD *)*v4 + 1) )
    return 1;
  return v7;
}
