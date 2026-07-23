/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x140AB272C
 * Callers:
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x140219B3C (EtwpAllocateFreeBuffers.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     EtwpFreePfnArray @ 0x14082C000 (EtwpFreePfnArray.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140AB286C (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x140AB295C (EtwpAllocatePhysicalMemoryForTraceBuffers.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(_DWORD *a1)
{
  int UsedProcessorCount; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int SystemMaximumBufferCount; // eax
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned int FreeBuffers; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  unsigned int v20; // eax

  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v4, v3, v5);
  v7 = a1[3];
  v8 = 2 * UsedProcessorCount;
  v9 = SystemMaximumBufferCount;
  if ( (v7 & 0x4000000) != 0 && (v7 & 0x400) != 0 )
    v8 += 4;
  v10 = v8;
  if ( SystemMaximumBufferCount < v8 )
    v9 = v8;
  v11 = v9;
  if ( a1[59] > v8 )
    v10 = a1[59];
  v12 = a1[56];
  if ( v10 < v9 )
    v11 = v10;
  a1[59] = v11;
  if ( v12 > v8 )
    v8 = v12;
  if ( v8 < v9 )
    v9 = v8;
  a1[56] = v9;
  if ( v9 > v11 )
  {
    a1[59] = v9;
    v11 = v9;
  }
  if ( (v7 & 0x400) != 0 )
  {
    a1[59] = v9;
    v11 = v9;
  }
  if ( (v7 & 0x40000) != 0 )
    return 0LL;
  v13 = a1[53];
  if ( v13 )
  {
    v20 = ~UsedProcessorCount + v11;
    if ( v13 > v20 )
      a1[53] = v20;
  }
  if ( (a1[204] & 0x20000000) == 0 || (result = EtwpAllocatePhysicalMemoryForTraceBuffers(a1), (int)result >= 0) )
  {
    v14 = a1[56];
    FreeBuffers = EtwpAllocateFreeBuffers((ULONG_PTR)a1, v14);
    if ( (a1[204] & 0x20000000) != 0 )
      EtwpFreePfnArray((__int64)a1, v15, v17, v18);
    return FreeBuffers < v14 ? 0xC0000017 : 0;
  }
  return result;
}
