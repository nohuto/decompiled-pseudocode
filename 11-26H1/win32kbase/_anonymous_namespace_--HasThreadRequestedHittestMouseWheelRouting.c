/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x14014523C
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401450CC (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x140145140 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x14014527C (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 */

char __fastcall anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 456) + 808LL) & 0x10000) != 0 )
    return 1;
  else
    return HIWORD(*(_DWORD *)(*(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(a1) + 456) + 808LL)) & 1;
}
