/*
 * XREFs of MiNumberWsSwapPagefiles @ 0x140207558
 * Callers:
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402074A8 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberWsSwapPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 22296);
  v2 = 0;
  if ( v1 )
  {
    v3 = (__int64 *)(a1 + 22304);
    v4 = v1;
    do
    {
      v5 = *v3;
      v6 = v2 + 1;
      ++v3;
      if ( (*(_BYTE *)(v5 + 172) & 0x10) == 0 )
        v6 = v2;
      v2 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
