/*
 * XREFs of MiSetBasicInfoPartitionId @ 0x1404B820C
 * Callers:
 *     MiQueryBasicInfo @ 0x140AA3200 (MiQueryBasicInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetBasicInfoPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 20) = a2;
}
