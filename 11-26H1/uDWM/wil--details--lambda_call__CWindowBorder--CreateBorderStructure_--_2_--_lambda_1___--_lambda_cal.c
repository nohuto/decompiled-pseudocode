/*
 * XREFs of wil::details::lambda_call__CWindowBorder::CreateBorderStructure_::_2_::_lambda_1___::_lambda_call__CWindowBorder::CreateBorderStructure_::_2_::_lambda_1___ @ 0x180079A54
 * Callers:
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$3 @ 0x1800E6E9E (_CWindowBorder--CreateBorderStructure_--_1_--dtor$3.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180063F18 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::lambda_call__CWindowBorder::CreateBorderStructure_::_2_::_lambda_1___::_lambda_call__CWindowBorder::CreateBorderStructure_::_2_::_lambda_1___(
        __int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 )
    {
      result = *(_QWORD **)(a1 + 8);
      v3 = result[27];
      if ( v3 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v3 + 16), 0LL);
        return (_QWORD *)CVisual::SetIgnoreClipForHitTest(*(CVisual **)(*(_QWORD *)(a1 + 8) + 216LL), 0);
      }
    }
  }
  return result;
}
