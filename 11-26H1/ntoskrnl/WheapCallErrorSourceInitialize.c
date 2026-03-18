/*
 * XREFs of WheapCallErrorSourceInitialize @ 0x1406D67EC
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x1406D4870 (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x140847770 (WheaAddErrorSource.c)
 *     WheaInitializeProcessor @ 0x140BFFBC8 (WheaInitializeProcessor.c)
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1404C9C54 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  void *ErrorSourceFunction; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    ErrorSourceFunction = WheapGetErrorSourceFunction(a1, 1, 0);
    result = 0LL;
    if ( ErrorSourceFunction )
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 124));
  }
  else if ( WheapGetErrorSourceFunction(a1, 1, 0) )
  {
    result = guard_dispatch_icall_no_overrides(a2, a1 + 96);
  }
  else
  {
    result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
