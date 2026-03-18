/*
 * XREFs of ?at@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBAAEBUVisualTreePathUnit@CVisualTreePath@@_K@Z @ 0x1801CE120
 * Callers:
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= (__int64)(a1[1] - *a1) >> 4 )
  {
    std::_Xout_of_range("index too big");
    __debugbreak();
    JUMPOUT(0x1801CE158LL);
  }
  return *a1 + 16 * a2;
}
