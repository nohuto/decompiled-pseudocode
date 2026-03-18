/*
 * XREFs of IsNsobjPciBus @ 0x1400C83A4
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1400C8260 (IsPciBusExtension.c)
 *     IsPciBus @ 0x1400C827C (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 * Callees:
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 *     AMLIGetNSObjectContext @ 0x14003A0B4 (AMLIGetNSObjectContext.c)
 */

char __fastcall IsNsobjPciBus(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  memset(Event, 0, sizeof(Event));
  if ( !a1 )
    return 0;
  v3 = AMLIGetNSObjectContext(a1);
  if ( !v3 )
    goto LABEL_6;
  v4 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 0x2000000) != 0 )
    return 1;
  if ( (v4 & 0x100000000LL) != 0 )
    return 0;
LABEL_6:
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  v7 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (__int64)AmlisuppCompletePassive, (__int64)Event, &v7) != 259 )
    return v7;
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  if ( *(int *)&Event[24] >= 0 )
    return v7;
  return v1;
}
