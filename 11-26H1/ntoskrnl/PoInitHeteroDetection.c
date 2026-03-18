/*
 * XREFs of PoInitHeteroDetection @ 0x140CCE7E8
 * Callers:
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140BF351C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeWpsWorkloadClasses @ 0x140BF4144 (KiInitializeWpsWorkloadClasses.c)
 *     PpmInitHeteroEngine @ 0x140CD44D4 (PpmInitHeteroEngine.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140CD47F0 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PpmHeteroInitializeWpsSimSupport @ 0x140CD6E60 (PpmHeteroInitializeWpsSimSupport.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CD6EF4 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140CD72F8 (PpmHeteroInitializeAmdWpsSupport.c)
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
