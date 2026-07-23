/*
 * XREFs of MiFindZeroCloneBlock @ 0x140494758
 * Callers:
 *     MiHandleForkZeroPte @ 0x1402ECDE8 (MiHandleForkZeroPte.c)
 *     MiHandleForkDemandZeroPte @ 0x14049460C (MiHandleForkDemandZeroPte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFindZeroCloneBlock(__int64 a1, int a2)
{
  unsigned __int64 i; // r8

  for ( i = *(_QWORD *)(a1 + 24); i <= *(_QWORD *)(a1 + 32); i += 32LL )
  {
    if ( (*(_DWORD *)(i + 16) & 0x1F) == a2 )
      return i;
  }
  return 0LL;
}
