/*
 * XREFs of MxInstallMoreMemory @ 0x1406E73E8
 * Callers:
 *     MiInitializeDebuggerSupport @ 0x1406FEDCC (MiInitializeDebuggerSupport.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140CF267C (MiAllocateDummyPage.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     MiInitializeKasan @ 0x140CF35B0 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF36E4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MxCreateSparsePfnDatabase @ 0x140CF64E4 (MxCreateSparsePfnDatabase.c)
 *     MmInitializeImageViewExtension @ 0x140CFA084 (MmInitializeImageViewExtension.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140CFD468 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeKernelCfg @ 0x140CFE970 (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MxInstallMoreMemory(int a1)
{
  if ( !stru_140E2EB88.QuantumTarget )
    KeBugCheckEx(0x1Au, 0x303031FuLL, qword_140E3D3D0, qword_14101EBF8, a1);
  KeBugCheckEx(0x7Du, qword_140E3D3D0, qword_140E3D3C0, BugCheckParameter3, a1);
}
