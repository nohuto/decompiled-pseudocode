/*
 * XREFs of PopIdleChooseDozeS4Time @ 0x14060FCBC
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     <none>
 */

char __fastcall PopIdleChooseDozeS4Time(unsigned __int64 *a1, int *a2)
{
  unsigned __int64 v3; // r10
  char v4; // bl
  int v5; // r11d
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 10000000LL * *(unsigned int *)(PpmIdlePolicyLock.WriteOperationCount + 88);
  if ( *(_BYTE *)(*(_QWORD *)&PopPdcDeviceListLock.Spare36 + 2LL) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)&PopPdcDeviceListLock.Spare36 + 48LL);
    v5 = 6;
    if ( v7 )
    {
      v8 = v7 - MEMORY[0xFFFFF78000000014];
      if ( v8 >= 0 )
        v3 = v8;
      goto LABEL_15;
    }
  }
  else if ( qword_140F10338 > MEMORY[0xFFFFF78000000014] && PopSmartUserPresenceAction == 1 )
  {
    if ( MEMORY[0xFFFFF78000000008] - qword_140F10368 <= 10000000
                                                       * (unsigned __int64)(unsigned int)PopSmartUserPresenceGracePeriod )
      v3 = 10000000LL * (unsigned int)PopSmartUserPresenceGracePeriod - (MEMORY[0xFFFFF78000000008] - qword_140F10368);
    if ( (__int64)(v3 + MEMORY[0xFFFFF78000000014]) >= qword_140F10338
                                                     - 10000000 * ((unsigned int)PopSmartUserPresenceWakeOffset + 60LL)
      || v3 && v6 && v3 >= v6 )
    {
      goto LABEL_16;
    }
    v5 = 2;
LABEL_15:
    v4 = 1;
LABEL_16:
    v3 = -(__int64)v3;
  }
  if ( v6 && !v5 )
  {
    v4 = 1;
    v3 = -10000000LL * *(unsigned int *)(PpmIdlePolicyLock.WriteOperationCount + 88);
    v5 = 1;
  }
  *a1 = v3;
  if ( a2 )
    *a2 = v5;
  return v4;
}
