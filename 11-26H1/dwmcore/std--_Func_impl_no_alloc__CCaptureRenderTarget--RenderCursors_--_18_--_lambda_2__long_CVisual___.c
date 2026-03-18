/*
 * XREFs of std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree___::_Copy @ 0x180258050
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree_____CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2____::_2_::_Guard_type::__Guard_type @ 0x180256A60 (_std--_Global_new_std--_Func_impl_no_alloc__CCaptureRenderTarget--RenderCursors_--_18_--_lambda_.c)
 */

char *__fastcall std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree___::_Copy(
        __int64 a1,
        __int64 a2)
{
  char *v3; // rdi
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x48uLL, a2);
  v5 = 0LL;
  *(_QWORD *)v3 = &off_1802E8830;
  *(_OWORD *)(v3 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(v3 + 24) = *(_OWORD *)(a1 + 24);
  *(_OWORD *)(v3 + 40) = *(_OWORD *)(a1 + 40);
  *(_OWORD *)(v3 + 56) = *(_OWORD *)(a1 + 56);
  std::_Global_new_std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree_____CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2____::_2_::_Guard_type::__Guard_type(&v5);
  return v3;
}
