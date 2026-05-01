/*
 * XREFs of ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C880
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005E1E4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x18005E638 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_ @ 0x1802ED524 (_lambda_dafc2c99c39dbaf60a815ea558bf8360_--_lambda_dafc2c99c39dbaf60a815ea558bf8360_.c)
 *     CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_ @ 0x1802FBC20 (CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__-_--CAsyncCallbackWithLambda_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rdi
  void *v3; // rax
  __int64 v4; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v2 = *((_QWORD *)this + 19);
  v6 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  lambda_dafc2c99c39dbaf60a815ea558bf8360_::_lambda_dafc2c99c39dbaf60a815ea558bf8360_(v5, &v6, this);
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____::CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____(
           v3,
           v5);
  else
    v4 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 232LL))(*((_QWORD *)this + 18), v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v5[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5[0] + 16LL))(v5[0]);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
