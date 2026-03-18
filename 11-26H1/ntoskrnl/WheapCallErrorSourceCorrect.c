/*
 * XREFs of WheapCallErrorSourceCorrect @ 0x1406D67AC
 * Callers:
 *     WheapInitializeErrorSource @ 0x140847684 (WheapInitializeErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1404C9C54 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceCorrect(__int64 a1)
{
  __int64 result; // rax

  if ( WheapGetErrorSourceFunction(a1, 0, 0) )
    result = guard_dispatch_icall_no_overrides(a1 + 96, a1 + 68);
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
