/*
 * XREFs of ExpHeapInitLfhStartCallback @ 0x1406D7000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapEnableLFH @ 0x14063B88C (RtlpHpHeapEnableLFH.c)
 */

__int64 __fastcall ExpHeapInitLfhStartCallback(__int64 a1)
{
  return RtlpHpHeapEnableLFH(a1);
}
