/*
 * XREFs of MiInitializeKernelCfg @ 0x140D04D10
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     VslInitializeSecureKernelCfg @ 0x1405C5C44 (VslInitializeSecureKernelCfg.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140B32F4C (MiProcessKernelCfgAddressTakenImports.c)
 */

void __fastcall MiInitializeKernelCfg(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax

  if ( (MiFlags & 0x100000) != 0 )
  {
    v4 = qword_140E37D70;
    v5 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 0x20u, a3, a4);
    if ( !v5
      || (int)VslInitializeSecureKernelCfg(v4, (__int64)(v5 << 25) >> 16) < 0
      || (stru_140E2D2D0.WaitBlock[0].SparePtr = (PVOID)v4,
          stru_140E2D2D0.WaitBlock[0].Object = (PVOID)0x100000000000LL,
          !(unsigned int)MiMakeZeroedPageTables(
                           (unsigned int)(v4 >> 9) & 0xFFFFFFF8,
                           (unsigned int)((v4 + 0x1FFFFFFFFFFLL) >> 9) & 0xFFFFFFF8,
                           2048,
                           8)) )
    {
      MxInstallMoreMemory(32);
    }
    stru_140E2D2D0.WaitBlock[1].WaitListEntry.Flink = 0LL;
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 0LL, 0);
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 1LL, 0);
    MiProcessKernelCfgAddressTakenImports(0LL);
    guard_icall_bitmap = (__int64)stru_140E2D2D0.WaitBlock[0].SparePtr - 0x3FFFE0000000000LL;
  }
}
