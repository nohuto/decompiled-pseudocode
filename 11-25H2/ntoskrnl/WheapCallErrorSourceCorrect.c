/*
 * XREFs of WheapCallErrorSourceCorrect @ 0x140651704
 * Callers:
 *     WheapInitializeErrorSource @ 0x1407B70C0 (WheapInitializeErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048BF8C (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceCorrect(__int64 a1)
{
  __int64 result; // rax

  if ( WheapGetErrorSourceFunction(a1, 0, 0) )
    result = guard_dispatch_icall_no_overrides(a1 + 96);
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
