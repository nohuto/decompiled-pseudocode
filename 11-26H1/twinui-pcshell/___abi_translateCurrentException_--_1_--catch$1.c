/*
 * XREFs of ___abi_translateCurrentException_::_1_::catch$1 @ 0x1806E098B
 * Callers:
 *     <none>
 * Callees:
 *     RoOriginateError_0 @ 0x1802CA41B (RoOriginateError_0.c)
 *     ?__abi_FailFast@@YAXXZ_0 @ 0x1802D2A59 (-__abi_FailFast@@YAXXZ_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall __abi_translateCurrentException_::_1_::catch_1(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a2 + 64) )
  {
    __abi_FailFast();
    __debugbreak();
  }
  RoOriginateError_0(2147942414LL, 0LL);
  return &loc_1802D2A25;
}
