/*
 * XREFs of ?GetGradientThumbnail@CMultitaskingViewFrameElement@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x1804B81F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::GetGradientThumbnail(
        CMultitaskingViewFrameElement *this,
        struct IDCompThumbnail **a2)
{
  struct IDCompThumbnail **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IDCompThumbnail **)((char *)this + 320);
  if ( *((_QWORD *)this + 40) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 40);
    *a2 = *v2;
  }
  return 0LL;
}
