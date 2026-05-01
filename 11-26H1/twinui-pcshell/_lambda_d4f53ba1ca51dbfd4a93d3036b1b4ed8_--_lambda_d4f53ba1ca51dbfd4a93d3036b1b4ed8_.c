/*
 * XREFs of _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_ @ 0x18030451C
 * Callers:
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18020F390 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 8) = *a3;
  result = a1;
  *(_QWORD *)(a1 + 16) = a4;
  return result;
}
