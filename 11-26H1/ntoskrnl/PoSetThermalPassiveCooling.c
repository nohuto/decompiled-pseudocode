/*
 * XREFs of PoSetThermalPassiveCooling @ 0x140B310B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceThermalRequestPassiveUpdate @ 0x140B311AC (PopDiagTraceThermalRequestPassiveUpdate.c)
 */

__int64 __fastcall PoSetThermalPassiveCooling(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  char v6; // si
  __int64 v9; // rdx

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = a2;
  if ( *(_QWORD *)(v4 + 136) )
  {
    if ( (unsigned __int8)a2 <= 0x64u )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(v4 + 32), a2, a3, a4);
      if ( *(_BYTE *)(a1 + 18) )
      {
        LOBYTE(v9) = *(_BYTE *)(a1 + 16);
        if ( (_BYTE)v9 != v6 )
        {
          PopThermalUpdatePassiveTimeTracking(a1 + 40, v9);
          *(_BYTE *)(a1 + 16) = v6;
          PopDiagTraceThermalRequestPassiveUpdate(a1);
          PopPropogateCoolingChange(v4);
        }
      }
      else
      {
        v5 = -1073741431;
      }
      PopReleaseRwLock((struct _KTHREAD *)(v4 + 32));
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
