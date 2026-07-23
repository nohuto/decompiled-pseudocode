/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x1406DA944
 * Callers:
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1404C3684 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    v3 = 0;
    if ( !WheapGetErrorSourceFunction(a1, 4, 1) )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  v3 = 0;
  if ( WheapGetErrorSourceFunction(a1, 4, 1) )
LABEL_3:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), v2);
  return v3;
}
