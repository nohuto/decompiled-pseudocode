/*
 * XREFs of wil::details::lambda_call__CDWriteText::UpdateText_::_72_::_lambda_1___::_lambda_call__CDWriteText::UpdateText_::_72_::_lambda_1___ @ 0x180077E24
 * Callers:
 *     _CDWriteText::UpdateText_::_1_::dtor$5 @ 0x1800E6DEA (_CDWriteText--UpdateText_--_1_--dtor$5.c)
 *     _CBitmapSource::CreateCompSurfaceFromWICBitmap_::_1_::dtor$5 @ 0x1800E6F88 (_CBitmapSource--CreateCompSurfaceFromWICBitmap_--_1_--dtor$5.c)
 *     _CBitmapSource::CreateCompSurfaceFromWICBitmap_::_1_::dtor$3 @ 0x1800E7E15 (_CBitmapSource--CreateCompSurfaceFromWICBitmap_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__CDWriteText::UpdateText_::_72_::_lambda_1___::_lambda_call__CDWriteText::UpdateText_::_72_::_lambda_1___(
        __int64 **a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = **a1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 72) + 32LL))(*(_QWORD *)(v2 + 72));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 24) + 40LL))(*(_QWORD *)(v2 + 24));
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 32LL))(*a1[1]);
  }
  return result;
}
