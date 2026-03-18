/*
 * XREFs of EtwInitializeProcessorActivityId @ 0x140824A5C
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     EtwpInitializeActivityIdSeed @ 0x1408260B8 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessorActivityId(__int64 a1)
{
  EtwpInitializeActivityIdSeed(*(_QWORD *)(a1 + 35816), *(unsigned int *)(a1 + 36));
  return 0LL;
}
