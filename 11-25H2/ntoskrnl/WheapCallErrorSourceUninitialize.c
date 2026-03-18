/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x1406517BC
 * Callers:
 *     WheaRemoveErrorSource @ 0x1407B7430 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048BF8C (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  unsigned int v2; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    v2 = 0;
    if ( !WheapGetErrorSourceFunction(a1, 4, 1) )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  v2 = 0;
  if ( WheapGetErrorSourceFunction(a1, 4, 1) )
LABEL_3:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56));
  return v2;
}
