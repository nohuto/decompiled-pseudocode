/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x140429C68
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D6328 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTimeTo @ 0x140429470 (PpmConvertTimeTo.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x14042AB2C (PopBatteryGetEnergyDrainFromDischage.c)
 */

void __fastcall PopDiagTraceCsResiliencyExit(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  KIRQL v12; // r14
  char v13; // r10
  __int64 v14; // r9
  int EnergyDrainFromDischage; // edx
  int v16; // ecx
  unsigned __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int128 v20; // [rsp+20h] [rbp-18h]

  DWORD1(v20) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  v13 = stru_140F10828.Spare35[1];
  *(_OWORD *)&stru_140F10828.KcsanThread = *(_OWORD *)a8;
  *(_OWORD *)&stru_140F10828.SchedulerAssistLastYieldBoostTime = *(_OWORD *)(a8 + 16);
  v14 = a5;
  stru_140F10828.Padding[1] = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(
                                HIDWORD(stru_140F10828.Spare35[0]),
                                *(unsigned int *)(a2 + 12));
    LODWORD(v20) = stru_140F10828.Spare36 | *(_DWORD *)a4;
    *((_QWORD *)&v20 + 1) = (char *)stru_140F10828.SystemAffinityTokenListHead.Next - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v20 + 1) = 0LL;
    LODWORD(v20) = stru_140F10828.Spare36;
  }
  v16 = 0;
  if ( BYTE2(stru_140F10828.Spare35[0]) )
    v16 = 2;
  if ( BYTE1(stru_140F10828.Spare35[0]) )
    v16 |= 1u;
  if ( !v13 || !a3 )
    v16 |= 4u;
  if ( BYTE3(stru_140F10828.Spare35[0]) )
    v16 |= 8u;
  if ( BYTE1(stru_140F10828.SchedulerSharedSwappablePage) )
    v16 |= 0x10u;
  if ( LOBYTE(stru_140F10828.SchedulerSharedSwappablePage) )
    v16 |= 0x20u;
  *(_DWORD *)(a1 + 68) = stru_140F10828.SchedulerSharedOffset;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)&stru_140F10828.ResourceIndex;
  *(_QWORD *)(a1 + 56) = stru_140F10828.IptSaveArea;
  *(_QWORD *)(a1 + 72) = stru_140F10828.Spare32;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  *(_QWORD *)(a1 + 24) = a7;
  *(_DWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = v14;
  *(_OWORD *)(a1 + 40) = v20;
  *(_QWORD *)(a1 + 120) = PpmConvertTimeTo(stru_140F10828.Padding[4], 0xF4240uLL);
  *(_QWORD *)(a1 + 128) = PpmConvertTimeTo(unk_140F10CE8, 0xF4240uLL);
  *(_QWORD *)(a1 + 136) = PpmConvertTimeTo(unk_140F10CF0, 0xF4240uLL);
  v17 = (unsigned __int64 *)&unk_140F10D58;
  v18 = 11LL;
  *(_DWORD *)(a1 + 144) = unk_140F10CF8;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&stru_140F10828.KcsanThread;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&stru_140F10828.SchedulerAssistLastYieldBoostTime;
  *(_QWORD *)(a1 + 112) = stru_140F10828.Padding[1];
  v19 = a1 - (_QWORD)&unk_140F10D58;
  do
  {
    *(unsigned __int64 *)((char *)v17 + v19 + 152) = PpmConvertTimeTo(*v17, 0xF4240uLL);
    ++v17;
    --v18;
  }
  while ( v18 );
  LOBYTE(stru_140F10828.Spare35[0]) = 0;
  KeReleaseSpinLock(&stru_140F10070.Spare35[1], v12);
}
