/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1400272FC
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x140033D60 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x140027488 (ACPIPowerScheduleDpc.c)
 */

_QWORD *__fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // r10

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    result = (_QWORD *)AcpiPowerSynchronizeList;
    if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) != &AcpiPowerSynchronizeList )
      goto LABEL_12;
    *a2 = AcpiPowerSynchronizeList;
    a2[1] = &AcpiPowerSynchronizeList;
    result[1] = a2;
    AcpiPowerSynchronizeList = (__int64)a2;
  }
  else
  {
    v4 = (_QWORD *)(a1 + 584);
    result = a2 + 2;
    v6 = (_QWORD *)v4[1];
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v4 == v4 )
    {
      if ( v7 != v4 )
        goto LABEL_12;
      *result = v4;
      a2[3] = v6;
      *v6 = result;
      v4[1] = result;
      if ( (v3 & 1) == 0 )
      {
        result = (_QWORD *)qword_140090C48;
        if ( *(__int64 **)qword_140090C48 == &AcpiPowerQueueList )
        {
          *a2 = &AcpiPowerQueueList;
          a2[1] = result;
          *result = a2;
          qword_140090C48 = (__int64)a2;
          goto LABEL_7;
        }
LABEL_12:
        __fastfail(3u);
      }
      result = (_QWORD *)qword_140090C38;
      if ( *(__int64 **)qword_140090C38 != &AcpiPowerDelayedQueueList )
        goto LABEL_12;
      *a2 = &AcpiPowerDelayedQueueList;
      a2[1] = result;
      *result = a2;
      qword_140090C38 = (__int64)a2;
    }
    else
    {
      if ( v7 != v4 )
        goto LABEL_12;
      *result = v4;
      a2[3] = v6;
      *v6 = result;
      v4[1] = result;
    }
  }
LABEL_7:
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    return (_QWORD *)ACPIPowerScheduleDpc();
  return result;
}
