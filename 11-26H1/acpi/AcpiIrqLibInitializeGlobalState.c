/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1400D73C4
 * Callers:
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 * Callees:
 *     PcisuppInitGlobalState @ 0x1400A99CC (PcisuppInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1400AA02C (ArbInitializeArbiterInstance.c)
 *     LinkNodeInitGlobalState @ 0x1400BC3D8 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1400BEC08 (IcInitGlobalState.c)
 *     ProcessorInitGlobalState @ 0x1400DCBDC (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_14008F558 = (__int64)IrqArbTestAllocation;
  qword_14008F560 = (__int64)IrqArbRetestAllocation;
  qword_14008F568 = (__int64)IrqArbCommitAllocation;
  qword_14008F578 = (__int64)IrqArbBootAllocation;
  qword_14008F588 = (__int64)IrqArbQueryConflict;
  qword_14008F5A0 = (__int64)IrqArbPreprocessEntry;
  qword_14008F5B0 = (__int64)IrqArbGetNextAllocationRange;
  qword_14008F5B8 = (__int64)IrqArbFindSuitableRange;
  qword_14008F5D0 = (__int64)IrqArbOverrideConflict;
  qword_14008F5C0 = (__int64)IrqArbAddAllocation;
  qword_14008F5C8 = (__int64)IrqArbBacktrackAllocation;
  qword_14008F538 = (__int64)IrqArbUnpackRequirement;
  qword_14008F540 = (__int64)IrqArbPackResource;
  qword_14008F548 = (__int64)IrqArbUnpackResource;
  qword_14008F550 = (__int64)IrqArbScoreRequirement;
  qword_14008F5A8 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = PcisuppInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = LinkNodeInitGlobalState();
      if ( (int)result >= 0 )
      {
        result = IcInitGlobalState();
        if ( (int)result >= 0 )
          return ProcessorInitGlobalState();
      }
    }
  }
  return result;
}
