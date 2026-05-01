/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804C8BF8
 * Callers:
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_ @ 0x1804C8F50 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--_scalar_d.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804C8FCC (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

__int64 __fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_180724DB0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ElementDragData::CancelDrag(*(ElementDragData **)(a1 + 24));
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
