/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x14051BFF8
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D6328 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopIsRemoteDesktopEnabled @ 0x140B4536C (PopIsRemoteDesktopEnabled.c)
 */

void __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, _OWORD *a3)
{
  char IsRemoteDesktopEnabled; // bl
  KIRQL v7; // di
  int v8; // eax

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  memset_0(stru_140F10828.Spare35, 0, 0x150uLL);
  BYTE1(stru_140F10828.SchedulerSharedSwappablePage) = stru_140F0C428.WaitBlockFill7[121];
  BYTE1(stru_140F10828.Spare35[0]) = dword_140F106CC == 0;
  LODWORD(stru_140F10828.IptSaveArea) = dword_140E677C4;
  WORD1(stru_140F10828.Spare35[0]) = word_140F10724;
  HIDWORD(stru_140F10828.IptSaveArea) = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  stru_140F10828.SchedulerSharedOffset = PopNetStandbyReason;
  HIDWORD(stru_140F10828.Spare35[0]) = v8;
  unk_140F10CE8 = -1LL;
  LOBYTE(stru_140F10828.Spare35[0]) = 1;
  LOBYTE(stru_140F10828.SchedulerSharedSwappablePage) = IsRemoteDesktopEnabled;
  LOBYTE(stru_140F10828.Spare35[1]) = a2;
  *(_OWORD *)&stru_140F10828.Spare36 = *a3;
  KeReleaseSpinLock(&stru_140F10070.Spare35[1], v7);
}
