/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x1404235B0
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x140423CBC (PopBatteryGetEnergyDrainFromDischage.c)
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
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int128 v20; // [rsp+20h] [rbp-18h]

  DWORD1(v20) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140F10088;
  xmmword_140F100C8 = *(_OWORD *)a8;
  xmmword_140F100D8 = *(_OWORD *)(a8 + 16);
  v14 = a5;
  qword_140F100E8 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(
                                (unsigned int)dword_140F10084,
                                *(unsigned int *)(a2 + 12));
    LODWORD(v20) = xmmword_140F10090 | *(_DWORD *)a4;
    *((_QWORD *)&v20 + 1) = *((_QWORD *)&xmmword_140F10090 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v20 + 1) = 0LL;
    LODWORD(v20) = xmmword_140F10090;
  }
  v16 = 0;
  if ( byte_140F10082 )
    v16 = 2;
  if ( byte_140F10081 )
    v16 |= 1u;
  if ( !v13 || !a3 )
    v16 |= 4u;
  if ( byte_140F10083 )
    v16 |= 8u;
  if ( byte_140F100B1 )
    v16 |= 0x10u;
  if ( byte_140F100B0 )
    v16 |= 0x20u;
  *(_DWORD *)(a1 + 68) = dword_140F100AC;
  *(_DWORD *)(a1 + 64) = dword_140F100A8;
  *(_DWORD *)(a1 + 56) = dword_140F100A0;
  *(_DWORD *)(a1 + 60) = dword_140F100A4;
  *(_QWORD *)(a1 + 72) = qword_140F100C0;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  *(_QWORD *)(a1 + 24) = a7;
  *(_DWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = v14;
  *(_OWORD *)(a1 + 40) = v20;
  *(_QWORD *)(a1 + 120) = PpmConvertTimeTo(qword_140F10100, 1000000LL);
  *(_QWORD *)(a1 + 128) = PpmConvertTimeTo(qword_140F10108, 1000000LL);
  *(_QWORD *)(a1 + 136) = PpmConvertTimeTo(qword_140F10110, 1000000LL);
  v17 = &unk_140F10178;
  v18 = 11LL;
  *(_DWORD *)(a1 + 144) = dword_140F10118;
  *(_OWORD *)(a1 + 80) = xmmword_140F100C8;
  *(_OWORD *)(a1 + 96) = xmmword_140F100D8;
  *(_QWORD *)(a1 + 112) = qword_140F100E8;
  v19 = a1 - (_QWORD)&unk_140F10178;
  do
  {
    *(_QWORD *)((char *)v17 + v19 + 152) = PpmConvertTimeTo(*v17, 1000000LL);
    ++v17;
    --v18;
  }
  while ( v18 );
  PopCsResiliencyStats[0] = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v12);
}
