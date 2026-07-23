/*
 * XREFs of HalpAllocateMapRegisters @ 0x140783F60
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404E95F4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 *     IoFreeMapRegistersThunk @ 0x14057C140 (IoFreeMapRegistersThunk.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B3305C (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B65DD0 (HalpDmaGrowContiguousMapBuffers.c)
 */

__int64 __fastcall HalpAllocateMapRegisters(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 *v14; // r15
  __int64 MapRegisters; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax

  v5 = a3;
  v7 = HalpDmaExtractFromVerifierShadowAdapter(a1);
  v10 = *(_QWORD *)(v7 + 160);
  if ( *(_DWORD *)(v7 + 384) != -1 )
    return 3221225488LL;
  if ( (_DWORD)v5 * a2 && *(_BYTE *)(v7 + 440) )
  {
    if ( (unsigned int)v5 * a2 > 0x800 )
      return 3221225626LL;
    v12 = *(_DWORD *)(v7 + 232);
    if ( !v12 )
      return 3221225626LL;
    if ( a2 > v12 )
      return 3221225485LL;
    v13 = 0;
    if ( (_DWORD)v8 )
    {
      v14 = a4;
      do
      {
        MapRegisters = HalpDmaAllocateMapRegisters(v7, a2, v8, v9);
        *v14 = MapRegisters;
        if ( !MapRegisters )
        {
          v16 = (a2 + 16) << 12;
          if ( *(_BYTE *)(v7 + 442) )
            HalpDmaGrowScatterMapBuffers(v10, v16);
          else
            HalpDmaGrowContiguousMapBuffers(v10, v16);
          v19 = HalpDmaAllocateMapRegisters(v7, a2, v17, v18);
          *v14 = v19;
          if ( !v19 )
            goto LABEL_20;
        }
        ++v13;
        v14 += 2;
      }
      while ( v13 < (unsigned int)v5 );
    }
    if ( v13 != (_DWORD)v5 )
    {
LABEL_20:
      while ( v13 )
      {
        --v13;
        IoFreeMapRegistersThunk(v7);
      }
      return 3221225626LL;
    }
  }
  else if ( (_DWORD)v8 )
  {
    v20 = v5;
    do
    {
      *a4 = 0LL;
      a4 += 2;
      --v20;
    }
    while ( v20 );
  }
  return 0LL;
}
