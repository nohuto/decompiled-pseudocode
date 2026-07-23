/*
 * XREFs of PoInitHeteroDetection @ 0x140CD4948
 * Callers:
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140BF951C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeWpsWorkloadClasses @ 0x140BFA144 (KiInitializeWpsWorkloadClasses.c)
 *     PpmInitHeteroEngine @ 0x140CDA674 (PpmInitHeteroEngine.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140CDAB70 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PpmHeteroInitializeWpsSimSupport @ 0x140CDD1B4 (PpmHeteroInitializeWpsSimSupport.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CDD248 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140CDD668 (PpmHeteroInitializeAmdWpsSupport.c)
 */

char PoInitHeteroDetection()
{
  struct _KPRCB *CurrentPrcb; // rax
  char v1; // bl
  unsigned __int8 CpuVendor; // al
  __int64 v3; // rcx
  int HeteroConfigBuffer; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 1;
  if ( PpmWpsSimulationOverride )
  {
    PpmHeteroInitializeWpsSimSupport();
  }
  else
  {
    CpuVendor = CurrentPrcb->CpuVendor;
    if ( CpuVendor == 2 )
    {
      PpmHeteroInitializeIntelWpsSupport();
    }
    else if ( CpuVendor == 1 )
    {
      PpmHeteroInitializeAmdWpsSupport();
    }
  }
  if ( (int)PpmInitHeteroEngine() < 0 )
    return 0;
  PpmUpdateArchitecturalEfficiencyClass();
  KiInitializeWpsWorkloadClasses(v3);
  HeteroConfigBuffer = KiAllocateHeteroConfigBuffer();
  if ( HeteroConfigBuffer < 0 )
    KeBugCheckEx(0x32u, HeteroConfigBuffer, 0xDuLL, 0LL, 0LL);
  return v1;
}
