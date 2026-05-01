/*
 * XREFs of ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180182A34
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180041BF8 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800420E0 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_ @ 0x1803004EC (CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__-_--CAsyncCallbackWithLambda_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v4; // rdi
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5[0] = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v5[1] = (__int64)this;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____::CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____(
           v3,
           v5);
  else
    v4 = 0LL;
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 232LL))(*((_QWORD *)this + 18), v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
