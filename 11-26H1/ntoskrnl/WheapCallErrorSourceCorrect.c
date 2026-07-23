/*
 * XREFs of WheapCallErrorSourceCorrect @ 0x1406DA88C
 * Callers:
 *     WheapInitializeErrorSource @ 0x14084D8E4 (WheapInitializeErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1404C3684 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
