/*
 * XREFs of wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::operator() @ 0x18050F480
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_ @ 0x1804389B8 (_lambda_5fb34dca825284ea67ff945056291927_--_lambda_5fb34dca825284ea67ff945056291927_.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x18050E6BC (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl_bool_const____::operator()(
        __int64 a1,
        char *a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rbx
  volatile int *v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8);
  v8 = v2;
  v4 = *(_QWORD *)(v3 + 568);
  v5 = (volatile int *)lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_(
                         (__int64)v7,
                         v3,
                         (__int64 *)(a1 + 16),
                         &v8);
  return CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___(v4, v5);
}
