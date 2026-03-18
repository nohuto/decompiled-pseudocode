/*
 * XREFs of WheapCallErrorSourceInitialize @ 0x140651744
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x14064F8EC (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1407B71B0 (WheaAddErrorSource.c)
 *     WheaInitializeProcessor @ 0x140B519F4 (WheaInitializeProcessor.c)
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048BF8C (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  __int64 ErrorSourceFunction; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    ErrorSourceFunction = WheapGetErrorSourceFunction(a1, 1, 0);
    result = 0LL;
    if ( ErrorSourceFunction )
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56));
  }
  else if ( WheapGetErrorSourceFunction(a1, 1, 0) )
  {
    result = guard_dispatch_icall_no_overrides(a2);
  }
  else
  {
    result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
