/*
 * XREFs of KiInitializeTimer2 @ 0x14044E75C
 * Callers:
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     ExAllocateTimerInternal2 @ 0x14044E590 (ExAllocateTimerInternal2.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405F7538 (KiInitializeIdealProcessorRebalancer.c)
 *     KiAllocateForceParkingData @ 0x1405FB2A0 (KiAllocateForceParkingData.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140640E84 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HalpBlkInitSystem @ 0x140CBA568 (HalpBlkInitSystem.c)
 *     PopThermalInit @ 0x140CD7954 (PopThermalInit.c)
 *     PpmCheckInit @ 0x140CD8DAC (PpmCheckInit.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140CEA100 (ExInitializeTimeRefresh.c)
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x14044E890 (PsTimerResolutionActive.c)
 */

char __fastcall KiInitializeTimer2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE *v4; // r11
  __int64 v5; // r10
  char v6; // r9
  __int64 v7; // rcx
  char result; // al

  v4 = (_BYTE *)a1;
  v5 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) + 24;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(
                                         a1 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ a2),
                                         KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(
                                          a1 ^ _byteswap_uint64((__int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ a3),
                                          KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(
                                          a1 ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink),
                                          KiWaitNever);
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(
                                          a1 ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink),
                                          KiWaitNever);
  v6 = a4 & 0x2E;
  if ( !v6
    && !KeGetPcr()->Prcb.NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process) )
  {
    v6 = 16;
  }
  v4[129] = v6;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= 9 )
      __fastfail(5u);
    v7 = 3 * v5;
    if ( KiTimer2Combinations[3 * v5] == v6 )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  v4[130] = KiTimer2Combinations[v7 + 1];
  result = KiTimer2Combinations[v7 + 2];
  v4[131] = result;
  return result;
}
