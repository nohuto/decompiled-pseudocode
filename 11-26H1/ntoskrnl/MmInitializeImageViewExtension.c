/*
 * XREFs of MmInitializeImageViewExtension @ 0x140CFA084
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     MxInstallMoreMemory @ 0x1406E73E8 (MxInstallMoreMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1409C1B90 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     MiMapSecurePureReserveView @ 0x140AC4500 (MiMapSecurePureReserveView.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
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
                *(ULONG_PTR *)&stru_140E2D150.WaitBlockFill11[16],
                &qword_140E2D648,
                &v4,
                &SecureHandle) < 0 )
      MxInstallMoreMemory(49);
    MmUnsecureVirtualMemory(SecureHandle);
    MiUnmapViewOfSection(PsInitialSystemProcess, qword_140E2D648, 0, 0);
    LOBYTE(v2) = 1;
    MmInitializeImageViewExtensionCfg(v2);
    result = LODWORD(stru_140E2D150.QueueListEntry.Flink);
    *(_DWORD *)&stru_140E2D150.BamQosLevel = stru_140E2D150.QueueListEntry.Flink;
  }
  else
  {
    LODWORD(stru_140E2D150.LastXStateSaveDebugInfo) = 0;
    result = (unsigned int)(HIDWORD(stru_140E36558.SListFaultAddress) + 4096);
    LODWORD(stru_140E2D150.QueueListEntry.Flink) = HIDWORD(stru_140E36558.SListFaultAddress) + 4096;
    if ( HIDWORD(stru_140E36558.SListFaultAddress) )
      stru_140E2D150.ThreadFlags2 = 4096;
  }
  return result;
}
