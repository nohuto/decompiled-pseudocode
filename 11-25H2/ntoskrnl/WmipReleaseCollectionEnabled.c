/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140AB8E14
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x1409B364C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B7738 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x1409B8E9C (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x140A8B8B0 (WmipSendEnableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
