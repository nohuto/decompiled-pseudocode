/*
 * XREFs of RtlSetSystemGlobalData @ 0x1404B81B0
 * Callers:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1404DEEA0 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTscFallback @ 0x140586130 (HalpTscFallback.c)
 *     HalpTimerConfigureQpcBypass @ 0x1405871F8 (HalpTimerConfigureQpcBypass.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v5; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v14; // edx
  int v15; // ecx

  if ( DataId > GlobalDataIdLastSystemRITEventTickCount )
  {
    v6 = DataId - 14;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              return -1073741811;
            if ( Size == 8 )
            {
              *(_QWORD *)(MmWriteableSharedUserData + 952) = *(_QWORD *)Buffer;
              return 0;
            }
          }
          else if ( Size == 2 )
          {
            *(_WORD *)(MmWriteableSharedUserData + 966) = *(_WORD *)Buffer;
            return 0;
          }
        }
        else if ( Size == 1 )
        {
          *(_BYTE *)(MmWriteableSharedUserData + 966) = *(_BYTE *)Buffer;
          return 0;
        }
      }
      else if ( Size == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 48) = *(_WORD *)Buffer;
        return 0;
      }
    }
    else if ( Size == 4 )
    {
      v15 = *(_DWORD *)Buffer;
      if ( (*(_DWORD *)Buffer & 0x40000000) != 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v15 & 0xBFFFFFFF);
        return 0;
      }
      if ( v15 < 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v15 & 0x7FFFFFFF);
        return 0;
      }
    }
  }
  else
  {
    if ( DataId == GlobalDataIdLastSystemRITEventTickCount )
    {
      if ( Size == 4 )
      {
        *(_DWORD *)(MmWriteableSharedUserData + 740) = *(_DWORD *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    v5 = DataId - 1;
    if ( !v5 )
    {
      if ( Size == 8 )
      {
        *(_QWORD *)(MmWriteableSharedUserData + 592) = *(_QWORD *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    v10 = v5 - 3;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 4 )
            return -1073741811;
          if ( Size == 1 )
          {
            *(_BYTE *)(MmWriteableSharedUserData + 724) = *(_BYTE *)Buffer;
            return 0;
          }
        }
        else if ( Size == 4 )
        {
          if ( PsIsCurrentThreadInServerSilo() )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LODWORD(CurrentServerSiloGlobals[80].Blink[36].Blink) = v14;
          }
          else
          {
            *(_DWORD *)(MmWriteableSharedUserData + 576) = *(_DWORD *)Buffer;
          }
          return 0;
        }
      }
      else if ( Size == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 46) = *(_WORD *)Buffer;
        return 0;
      }
    }
    else if ( Size == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 44) = *(_WORD *)Buffer;
      return 0;
    }
  }
  return -1073741306;
}
