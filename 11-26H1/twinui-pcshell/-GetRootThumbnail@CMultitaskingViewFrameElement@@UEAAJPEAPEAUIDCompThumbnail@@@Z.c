/*
 * XREFs of ?GetRootThumbnail@CMultitaskingViewFrameElement@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x1804CA090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::GetRootThumbnail(
        CMultitaskingViewFrameElement *this,
        struct IDCompThumbnail **a2)
{
  struct IDCompThumbnail **v2; // rbx

  v2 = (struct IDCompThumbnail **)((char *)this + 280);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 35);
  *a2 = *v2;
  return 0LL;
}
