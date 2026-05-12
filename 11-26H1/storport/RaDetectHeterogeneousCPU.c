/*
 * XREFs of RaDetectHeterogeneousCPU @ 0x140091C0C
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

char RaDetectHeterogeneousCPU()
{
  ULONG ActiveProcessorCount; // eax
  ULONG v1; // ebp
  char v2; // si
  char v3; // di
  ULONG i; // ebx
  char v5; // al
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+98h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  ProcNumber = 0;
  v1 = ActiveProcessorCount;
  v2 = 0;
  v3 = 0;
  memset_0(&Information, 0, sizeof(Information));
  Length = 80;
  for ( i = 0; i <= v1; ++i )
  {
    if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) < 0
      || KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorCore, &Information, &Length) < 0 )
    {
      continue;
    }
    if ( Information.Processor.EfficiencyClass )
    {
      v5 = v3;
      if ( !v3 )
        v5 = 1;
      v3 = v5;
      if ( !v2 )
        continue;
    }
    else if ( !v2 )
    {
      v2 = 1;
    }
    if ( v3 )
      return 1;
  }
  return 0;
}
