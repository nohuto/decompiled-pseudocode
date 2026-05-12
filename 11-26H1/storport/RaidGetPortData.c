/*
 * XREFs of RaidGetPortData @ 0x140039F08
 * Callers:
 *     StorEtwEnableCallback @ 0x140038A60 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x140038EB8 (StorpLogStatistics.c)
 *     RaUnitSendInstanceCounters @ 0x140039378 (RaUnitSendInstanceCounters.c)
 *     RaUnitGetInstances @ 0x140039F84 (RaUnitGetInstances.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x140071D84 (RemoveNvmeIceInterfaceFromList.c)
 *     StorPortInitialize @ 0x140076DD0 (StorPortInitialize.c)
 *     StorEtwResetCounters @ 0x1400B24B8 (StorEtwResetCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetPortData()
{
  __int64 result; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax

  if ( RaidpPortData )
  {
    _InterlockedIncrement((volatile signed __int32 *)RaidpPortData);
    return RaidpPortData;
  }
  result = ExAllocatePool2(64LL, 40LL, 1146118482LL);
  v1 = result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 8);
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 24));
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)v1 = 1;
    RaidpPortData = v1;
    return RaidpPortData;
  }
  return result;
}
