/*
 * XREFs of MxInstallMoreMemory @ 0x1406EC098
 * Callers:
 *     MiInitializeDebuggerSupport @ 0x140703A9C (MiInitializeDebuggerSupport.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 *     MiInitializeKasan @ 0x140CF9930 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140D037E8 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeKernelCfg @ 0x140D04D10 (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MxInstallMoreMemory(int a1)
{
  if ( !stru_140E2ED08.QuantumTarget )
    KeBugCheckEx(0x1Au, 0x303031FuLL, qword_140E3D550, qword_14101FBF8, a1);
  KeBugCheckEx(0x7Du, qword_140E3D550, qword_140E3D540, BugCheckParameter3, a1);
}
