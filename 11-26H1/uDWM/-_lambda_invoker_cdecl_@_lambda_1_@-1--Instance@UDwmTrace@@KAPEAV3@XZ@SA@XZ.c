/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1??Instance@UDwmTrace@@KAPEAV3@XZ@SA@XZ @ 0x1800CC010
 * Callers:
 *     <none>
 * Callees:
 *     ??_GAnimationClockLogging@@UEAAPEAXI@Z @ 0x180090BC0 (--_GAnimationClockLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall `UDwmTrace::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_()
{
  __int64 v0; // r8
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  AnimationClockLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2) )
  {
    if ( !v1 )
      AnimationClockLogging::`scalar deleting destructor'(v2, 0LL, v0);
  }
}
