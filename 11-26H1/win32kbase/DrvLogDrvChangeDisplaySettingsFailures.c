/*
 * XREFs of DrvLogDrvChangeDisplaySettingsFailures @ 0x14014F9A0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall DrvLogDrvChangeDisplaySettingsFailures(__int64 a1, int a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  ULONG TimeIncrement; // eax

  v3 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v5 = 56LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1360), 1u) + 1) & 7);
  v6 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  *(_DWORD *)(v5 + v4 + 1376) = v3;
  *(_QWORD *)(v5 + v4 + 1368) = v6 * TimeIncrement;
  *(_DWORD *)(v5 + v4 + 1380) = a2;
  *(_DWORD *)(v5 + v4 + 1384) = (unsigned int)PsGetCurrentThreadId();
  RtlCaptureStackBackTrace(1u, 4u, (PVOID *)(v5 + v4 + 1392), 0LL);
  return DrvDxgkLogCodePointPacket(119LL, v3, 0LL);
}
