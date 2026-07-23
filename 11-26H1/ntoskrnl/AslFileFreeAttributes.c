/*
 * XREFs of AslFileFreeAttributes @ 0x1408925F0
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

void __fastcall AslFileFreeAttributes(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rsi
  int v4; // eax

  if ( a1 )
  {
    v2 = a1 + 16;
    v3 = 36LL;
    do
    {
      v4 = *((_DWORD *)v2 + 2);
      if ( (v4 & 1) != 0 && *((_DWORD *)v2 - 4) == 4 && (v4 & 4) != 0 )
        AslFree(a1, *(_QWORD *)v2);
      v2 += 32;
      --v3;
    }
    while ( v3 );
    memset_0(a1, 0, 0x480uLL);
  }
}
