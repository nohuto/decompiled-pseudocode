/*
 * XREFs of ?ndisIsHeterogeneousCpuSystem@@YAEXZ @ 0x1400A5864
 * Callers:
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018F23C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

unsigned __int8 ndisIsHeterogeneousCpuSystem(void)
{
  ULONG i; // ebx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  ProcNumber = 0;
  Length = 80;
  memset(&Information, 0, sizeof(Information));
  for ( i = 0; i <= ndisNumberOfActiveProcessorsAtBoot; ++i )
  {
    if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorCore, &Information, &Length) >= 0
      && Information.Processor.EfficiencyClass )
    {
      return 1;
    }
  }
  return 0;
}
