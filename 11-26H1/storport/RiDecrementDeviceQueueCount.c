/*
 * XREFs of RiDecrementDeviceQueueCount @ 0x1400241C8
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 *     RaidRemovePendingDeviceQueue @ 0x140057CFC (RaidRemovePendingDeviceQueue.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x140074394 (RaidLunQueueCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RiDecrementDeviceQueueCount(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    --*(_DWORD *)(a1 + 16);
  }
  else
  {
    result = 0xFFFFFFFF00000000uLL;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFF00000000uLL);
    if ( *(_BYTE *)(a2 + 22) )
      --*(_DWORD *)(a1 + 32);
  }
  if ( (*(_BYTE *)(a2 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 20);
  return result;
}
