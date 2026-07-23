/*
 * XREFs of EtwInitializeProcessorActivityId @ 0x14082AC9C
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     EtwpInitializeActivityIdSeed @ 0x14082C2F8 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessorActivityId(__int64 a1)
{
  EtwpInitializeActivityIdSeed(*(_QWORD *)(a1 + 35816), *(unsigned int *)(a1 + 36));
  return 0LL;
}
