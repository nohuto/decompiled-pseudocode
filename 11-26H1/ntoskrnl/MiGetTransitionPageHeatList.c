/*
 * XREFs of MiGetTransitionPageHeatList @ 0x140704D74
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x14050A470 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInitializePageHeatList @ 0x14046BE50 (MiInitializePageHeatList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiGetTransitionPageHeatList()
{
  PSLIST_ENTRY v0; // rax
  PSLIST_ENTRY v1; // r11
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  v0 = RtlpInterlockedPopEntrySList(&stru_140E348F0);
  v1 = v0;
  if ( v0 )
  {
    MiInitializePageHeatList((__int64)v0, 1, 0, 16);
  }
  else
  {
    v2 = dword_140E34900;
    while ( v2 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&dword_140E34900, v2 - 1, v2);
      if ( v3 == v2 )
        return (__int64)v1;
    }
    return -1LL;
  }
  return (__int64)v1;
}
