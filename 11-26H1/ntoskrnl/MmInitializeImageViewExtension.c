/*
 * XREFs of MmInitializeImageViewExtension @ 0x140D00404
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     MiMapSecurePureReserveView @ 0x140AC6170 (MiMapSecurePureReserveView.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 */

__int64 __fastcall MmInitializeImageViewExtension(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  HANDLE SecureHandle; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  SecureHandle = 0LL;
  if ( a1 )
  {
    v4 = 0LL;
    if ( (int)MiMapSecurePureReserveView(
                (ULONG_PTR)PsInitialSystemProcess,
                *(ULONG_PTR *)&stru_140E2D2D0.WaitBlockFill11[16],
                &qword_140E2D7C8,
                &v4,
                &SecureHandle) < 0 )
      MxInstallMoreMemory(49);
    MmUnsecureVirtualMemory(SecureHandle);
    MiUnmapViewOfSection(PsInitialSystemProcess, qword_140E2D7C8, 0LL, 0);
    LOBYTE(v2) = 1;
    MmInitializeImageViewExtensionCfg(v2);
    result = LODWORD(stru_140E2D2D0.QueueListEntry.Flink);
    *(_DWORD *)&stru_140E2D2D0.BamQosLevel = stru_140E2D2D0.QueueListEntry.Flink;
  }
  else
  {
    LODWORD(stru_140E2D2D0.LastXStateSaveDebugInfo) = 0;
    result = (unsigned int)(HIDWORD(stru_140E366D8.SListFaultAddress) + 4096);
    LODWORD(stru_140E2D2D0.QueueListEntry.Flink) = HIDWORD(stru_140E366D8.SListFaultAddress) + 4096;
    if ( HIDWORD(stru_140E366D8.SListFaultAddress) )
      stru_140E2D2D0.ThreadFlags2 = 4096;
  }
  return result;
}
