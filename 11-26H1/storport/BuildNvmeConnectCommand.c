/*
 * XREFs of BuildNvmeConnectCommand @ 0x140118D18
 * Callers:
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int16 __fastcall BuildNvmeConnectCommand(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  int v5; // ecx

  memset_0(a2, 0, 0x40uLL);
  *a2 = 127;
  a2[4] = 1;
  *((_WORD *)a2 + 21) = *(_WORD *)(a1 + 136);
  LOWORD(v4) = *(_WORD *)(a1 + 124);
  a2[46] |= 4u;
  LOWORD(v4) = v4 - 1;
  *((_WORD *)a2 + 22) = v4;
  if ( !*(_WORD *)(a1 + 136) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)(v4 + 1076);
    if ( v5 )
      *((_DWORD *)a2 + 12) = v5;
  }
  return v4;
}
