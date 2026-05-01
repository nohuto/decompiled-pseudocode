/*
 * XREFs of ?_ShouldHandleKey@CMultitaskingViewFrameElement@@AEAA_NI@Z @ 0x1804B9BB0
 * Callers:
 *     ?KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804B82F0 (-KeyDown@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804B8470 (-KeyUp@CMultitaskingViewFrameElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMultitaskingViewFrameElement::_ShouldHandleKey(CMultitaskingViewFrameElement *this, int a2)
{
  if ( a2 == 9 )
    return *((_QWORD *)this + 34) != 0LL;
  else
    return a2 == 27;
}
