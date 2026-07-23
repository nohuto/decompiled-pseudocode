/*
 * XREFs of HvIsInPlaceBaseBlockValid @ 0x1408653CC
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

bool __fastcall HvIsInPlaceBaseBlockValid(_DWORD *a1)
{
  unsigned int v1; // eax
  int v2; // eax
  __int64 v3; // r9

  if ( *a1 != 1718052210 )
    return 0;
  if ( a1[7] )
    return 0;
  if ( a1[5] > 1u )
    return 0;
  if ( (unsigned int)(a1[6] - 3) > 3 )
    return 0;
  if ( a1[8] != 1 )
    return 0;
  v1 = a1[10];
  if ( !v1 || (v1 & 0xFFF) != 0 || v1 > 0x7FFFE000 )
    return 0;
  v2 = HvpHeaderCheckSum(a1);
  return v2 == *(_DWORD *)(v3 + 508);
}
