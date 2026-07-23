/*
 * XREFs of RtlSetGlobalHeapFeatures @ 0x180144408
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlpHpFindImageNameInList @ 0x1800E6634 (RtlpHpFindImageNameInList.c)
 *     RtlpHpPgSamplingProcessInitialize @ 0x18011D004 (RtlpHpPgSamplingProcessInitialize.c)
 *     RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144E54 (RtlpHpApplyGlobalSegmentHeapConfigurations.c)
 *     RtlpHpSetHeapFeatures @ 0x1801450C4 (RtlpHpSetHeapFeatures.c)
 *     RtlpHpSetLowFragHeapGlobalFlags @ 0x1801451E4 (RtlpHpSetLowFragHeapGlobalFlags.c)
 */

struct _TEB *__fastcall RtlSetGlobalHeapFeatures(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  char v8; // bl
  struct _TEB *result; // rax

  v8 = 31;
  if ( a1 && (unsigned int)RtlpHpFindImageNameInList(a1) )
    v8 = 14;
  RtlpHpPgSamplingProcessInitialize(v8);
  RtlpHpApplyGlobalSegmentHeapConfigurations();
  RtlpHpSetHeapFeatures(a4, a5);
  result = (struct _TEB *)RtlpHpSetLowFragHeapGlobalFlags(a2, a3);
  if ( (RtlpHpHeapFeatures & 0x20) != 0 )
  {
    RtlpHpExportType = 2;
  }
  else
  {
    result = NtCurrentTeb();
    if ( (__int64)result->HeapPgSamplingCount > 0 || (RtlpHpExportType = 1, (RtlpHpHeapFeatures & 2) != 0) )
      RtlpHpExportType = 0;
  }
  return result;
}
