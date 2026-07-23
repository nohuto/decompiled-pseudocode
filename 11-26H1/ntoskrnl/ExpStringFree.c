/*
 * XREFs of ExpStringFree @ 0x140B2E40C
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140B2E22C (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}
