/*
 * XREFs of PoSetThermalActiveCooling @ 0x1407CE750
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x1407D871C (PopDiagTraceThermalRequestActiveUpdate.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 *     PoGetThermalRequestSupport @ 0x140B5FE40 (PoGetThermalRequestSupport.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // r14
  char v9; // bp
  __int64 v10; // rdx
  char v11; // al

  v7 = 0;
  if ( (unsigned __int8)PoGetThermalRequestSupport(a1, 1LL) )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = a2 != 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)(v8 + 32), v4, v5, v6);
    if ( *(_BYTE *)(a1 + 18) )
    {
      v11 = *(_BYTE *)(a1 + 17);
      if ( v11 != v9 )
      {
        LOBYTE(v10) = v11 == 0;
        PopThermalUpdateActiveTimeTracking(a1 + 40, v10);
        *(_BYTE *)(a1 + 17) = v9;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v8);
      }
    }
    else
    {
      v7 = -1073741431;
    }
    PopReleaseRwLock((struct _KTHREAD *)(v8 + 32));
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v7;
}
