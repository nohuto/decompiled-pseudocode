/*
 * XREFs of BuildNvmePropertyGetCommand @ 0x140118F1C
 * Callers:
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

char __fastcall BuildNvmePropertyGetCommand(int a1, _BYTE *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  bool v8; // cl
  char v9; // al
  char result; // al

  v3 = a1;
  memset_0(a2, 0, 0x40uLL);
  v4 = (unsigned int)(v3 - 56);
  *a2 = 127;
  a2[4] = 4;
  v8 = 0;
  if ( (unsigned int)v4 > 0x30 || (v5 = 0x1111100001111LL, !_bittest64(&v5, v4)) )
  {
    if ( (unsigned int)v3 > 0x24 || (v6 = 0x1110111100LL, !_bittest64(&v6, v3)) )
    {
      if ( (unsigned int)(v3 - 3584) > 0x18 || (v7 = 17895697, !_bittest(&v7, v3 - 3584)) )
        v8 = 1;
    }
  }
  v9 = a2[40] & 0xF8;
  *((_DWORD *)a2 + 11) = v3;
  result = v8 | v9;
  a2[40] = result;
  return result;
}
