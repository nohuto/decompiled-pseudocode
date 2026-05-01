/*
 * XREFs of _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::_lambda_2a8f8fa06f2e0b1768a49123f6915af2_ @ 0x180431478
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800FA334 (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_2a8f8fa06f2e0b1768a49123f6915af2_::_lambda_2a8f8fa06f2e0b1768a49123f6915af2_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = a2[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a3;
  v6 = *a4;
  *a4 = 0LL;
  a1[3] = v6;
  a1[4] = a5;
  return a1;
}
