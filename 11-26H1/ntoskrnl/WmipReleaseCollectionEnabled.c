/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140A0ABC4
 * Callers:
 *     WmipSendEnableRequest @ 0x140A0AF48 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140A0B0B8 (WmipDoDisableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0C854 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0D350 (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
