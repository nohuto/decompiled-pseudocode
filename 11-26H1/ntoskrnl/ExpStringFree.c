/*
 * XREFs of ExpStringFree @ 0x140B2C38C
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140B2C1AC (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}
