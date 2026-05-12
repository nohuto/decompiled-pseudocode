/*
 * XREFs of RaidUnitSavePowerCycleCountWorker @ 0x140045AE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitSavePowerCycleCount @ 0x140045B74 (RaidUnitSavePowerCycleCount.c)
 */

void __fastcall RaidUnitSavePowerCycleCountWorker(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  unsigned __int64 v5; // r9
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  RaidUnitSavePowerCycleCount(Context);
  *((_DWORD *)Context + 128) &= ~2u;
  v5 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v6 = *(_DWORD *)(v5 + *((_QWORD *)Context + 5));
  while ( (v6 & 1) == 0 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + *((_QWORD *)Context + 5)), v6 - 2, v6);
    if ( v7 == v6 )
      goto LABEL_7;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 520), 0, 0);
LABEL_7:
  IoFreeWorkItem(IoWorkItem);
}
