/*
 * XREFs of IvtBuildScalableModePasidTableS1Entry @ 0x1405247C8
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1405246E4 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtInitializeScalableModePasidTables @ 0x1405A98F4 (IvtInitializeScalableModePasidTables.c)
 *     IvtSetPasidAddressSpace @ 0x1405AA240 (IvtSetPasidAddressSpace.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall IvtBuildScalableModePasidTableS1Entry(
        __int64 a1,
        char a2,
        __int64 a3,
        char a4,
        int a5,
        char a6,
        __int16 a7,
        unsigned __int64 *a8)
{
  unsigned __int64 result; // rax
  int v13; // r10d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // r9d
  unsigned int v17; // r8d
  unsigned __int64 v18; // rdx

  result = (unsigned __int64)memset_0(a8, 0, 0x40uLL);
  v13 = 0;
  if ( a3 )
  {
    v14 = ((unsigned __int64)(a2 & 7) << 6) | 1;
    *a8 = v14;
    *a8 = v14 | (4LL * (*(_DWORD *)(a1 + 248) & 7));
    *((_WORD *)a8 + 4) = a7;
    if ( (*(_BYTE *)(a1 + 230) & 1) != 0 )
      a8[1] |= 0x800000uLL;
    v15 = a6 & 1 ^ (a8[2] & 0xFFFFFFFFFFFFFFDCuLL | 0x20);
    if ( a6 )
      LOWORD(v15) = v15 | 0x50;
    a8[2] = (a3 << 12) | v15 & 0xFF3 ^ (4 * a4) & 0xC;
    result = *(unsigned int *)(a1 + 224);
    if ( (result & 0x2000000) != 0 )
    {
      result = __readmsr(0x277u);
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = result >> v17;
        v17 += 8;
        LODWORD(v18) = (v18 & 0xF) << v16;
        v16 += 4;
        v13 |= v18;
      }
      while ( v17 < 0x40 );
      *((_DWORD *)a8 + 3) = v13;
    }
  }
  return result;
}
