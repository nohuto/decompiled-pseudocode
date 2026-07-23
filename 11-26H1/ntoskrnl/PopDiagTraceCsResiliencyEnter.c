/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x140516910
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopIsRemoteDesktopEnabled @ 0x140B4706C (PopIsRemoteDesktopEnabled.c)
 */

void __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  KIRQL v7; // di
  int v8; // eax

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset_0(PopCsResiliencyStats, 0, 0x150uLL);
  byte_140F100B1 = PopPdcDeviceListLock.Spare35[1];
  byte_140F10081 = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 0;
  dword_140F100A0 = dword_140E67A2C;
  word_140F10082 = WORD2(PpmIdlePolicyLock.ReadOperationCount);
  dword_140F100A4 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  dword_140F100AC = PopNetStandbyReason;
  dword_140F10084 = v8;
  qword_140F10108 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140F100B0 = IsRemoteDesktopEnabled;
  byte_140F10088 = a2;
  xmmword_140F10090 = *a3;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v7);
}
