/*
 * XREFs of CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::_CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_ @ 0x1803006D0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::_scalar_deleting_destructor_ @ 0x180300BD0 (CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__-_--_scalar_deleting_destruct.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____::_CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
