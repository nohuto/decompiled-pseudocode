/*
 * XREFs of IvtExtendScalableModePasidTables @ 0x1405A8BA0
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     IvtGrowPasidTable @ 0x1405A9220 (IvtGrowPasidTable.c)
 * Callees:
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     IvtInitializeScalableModePasidTables @ 0x1405A98F4 (IvtInitializeScalableModePasidTables.c)
 */

__int64 __fastcall IvtExtendScalableModePasidTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  int v11; // ebp
  LARGE_INTEGER v13; // [rsp+68h] [rbp+10h] BYREF

  v13.QuadPart = 0LL;
  if ( a3 < *(_DWORD *)(a2 + 36) )
  {
    v8 = *(_DWORD *)(a2 + 32);
    v7 = 0;
    if ( v8 <= a3 )
    {
      v9 = (v8 >> 6) & 0x3FFF;
      v10 = ((a3 + 64) >> 6) & 0x3FFF;
      if ( v9 < v10 )
      {
        v11 = (v9 + 1) << 6;
        do
        {
          v7 = ExtEnvAllocatePhysicalMemory(
                 a2 + 8 * (v9 + 8LL),
                 0x1000u,
                 0x1000u,
                 (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272),
                 &v13,
                 (PVOID *)(a2 + 8 * (v9 + 8LL)));
          if ( v7 < 0 )
            break;
          *(_DWORD *)(a2 + 32) = v11;
          IvtInitializeScalableModePasidTables(a1, a4);
          ++v9;
          v11 += 64;
        }
        while ( v9 < v10 );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
