/*
 * XREFs of RaidNotifyPerProcessorCompletions @ 0x1400552C0
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidNotifyPerProcessorCompletions(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  __int64 v5; // r9

  if ( (*(_BYTE *)(a1 + 4724) & 1) != 0 )
  {
    v2 = *a2;
    if ( FeatureFixKcsanRacyAccessV2 )
    {
      if ( v2 < g_RaidPerfRedirectGroupCount )
      {
        v3 = *((unsigned __int8 *)a2 + 2);
        if ( v3 < *((_DWORD *)g_RaidDPCRedirectionProcessors + *a2)
          && !*((_DWORD *)g_RaidPerProcessorState + 32 * (unsigned __int64)((*a2 << 6) + v3) + 24) )
        {
          _InterlockedExchange(
            (volatile __int32 *)g_RaidPerProcessorState
          + 2048 * (unsigned __int64)*a2
          + 32 * *((unsigned __int8 *)a2 + 2)
          + 24,
            2);
          return 1;
        }
      }
    }
    else if ( v2 < g_RaidPerfRedirectGroupCount )
    {
      v5 = *((unsigned __int8 *)a2 + 2);
      if ( (unsigned int)v5 < *((_DWORD *)g_RaidDPCRedirectionProcessors + *a2)
        && !*((_DWORD *)g_RaidPerProcessorState + 32 * (unsigned __int64)((unsigned int)v5 + (*a2 << 6)) + 24) )
      {
        _InterlockedExchange(
          (volatile __int32 *)g_RaidPerProcessorState + 2048 * (unsigned __int64)*a2 + 32 * v5 + 24,
          2);
        return 1;
      }
    }
  }
  return 0;
}
