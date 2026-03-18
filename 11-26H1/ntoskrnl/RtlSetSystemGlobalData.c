/*
 * XREFs of RtlSetSystemGlobalData @ 0x1404BE960
 * Callers:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1404E5900 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTscFallback @ 0x140583C10 (HalpTscFallback.c)
 *     HalpTimerConfigureQpcBypass @ 0x140584CD8 (HalpTimerConfigureQpcBypass.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(int a1, _QWORD *a2, int a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v14; // edx
  int v15; // ecx

  if ( a1 > 13 )
  {
    v6 = a1 - 14;
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
              return 3221225485LL;
            if ( a3 == 8 )
            {
              *(_QWORD *)(MmWriteableSharedUserData + 952) = *a2;
              return 0LL;
            }
          }
          else if ( a3 == 2 )
          {
            *(_WORD *)(MmWriteableSharedUserData + 966) = *(_WORD *)a2;
            return 0LL;
          }
        }
        else if ( a3 == 1 )
        {
          *(_BYTE *)(MmWriteableSharedUserData + 966) = *(_BYTE *)a2;
          return 0LL;
        }
      }
      else if ( a3 == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 48) = *(_WORD *)a2;
        return 0LL;
      }
    }
    else if ( a3 == 4 )
    {
      v15 = *(_DWORD *)a2;
      if ( (*(_DWORD *)a2 & 0x40000000) != 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v15 & 0xBFFFFFFF);
        return 0LL;
      }
      if ( v15 < 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v15 & 0x7FFFFFFF);
        return 0LL;
      }
    }
  }
  else
  {
    if ( a1 == 13 )
    {
      if ( a3 == 4 )
      {
        *(_DWORD *)(MmWriteableSharedUserData + 740) = *(_DWORD *)a2;
        return 0LL;
      }
      return 3221225990LL;
    }
    v5 = a1 - 1;
    if ( !v5 )
    {
      if ( a3 == 8 )
      {
        *(_QWORD *)(MmWriteableSharedUserData + 592) = *a2;
        return 0LL;
      }
      return 3221225990LL;
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
            return 3221225485LL;
          if ( a3 == 1 )
          {
            *(_BYTE *)(MmWriteableSharedUserData + 724) = *(_BYTE *)a2;
            return 0LL;
          }
        }
        else if ( a3 == 4 )
        {
          if ( PsIsCurrentThreadInServerSilo() )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LODWORD(CurrentServerSiloGlobals[80].Blink[36].Blink) = v14;
          }
          else
          {
            *(_DWORD *)(MmWriteableSharedUserData + 576) = *(_DWORD *)a2;
          }
          return 0LL;
        }
      }
      else if ( a3 == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 46) = *(_WORD *)a2;
        return 0LL;
      }
    }
    else if ( a3 == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 44) = *(_WORD *)a2;
      return 0LL;
    }
  }
  return 3221225990LL;
}
