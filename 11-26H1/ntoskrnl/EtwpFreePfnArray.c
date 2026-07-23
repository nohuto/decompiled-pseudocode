/*
 * XREFs of EtwpFreePfnArray @ 0x14082C000
 * Callers:
 *     EtwpAllocateTraceBufferPool @ 0x140AB272C (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x140AB295C (EtwpAllocatePhysicalMemoryForTraceBuffers.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     EtwpMdlInit @ 0x14082D004 (EtwpMdlInit.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePfnArray(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned __int64 v9; // rsi
  PMDL v10; // rcx
  PMDL v11; // rcx

  v4 = *(unsigned __int64 **)(a1 + 1600);
  if ( v4 )
  {
    v6 = 0LL;
    v7 = *(_QWORD *)(a1 + 1592);
    v8 = *(_DWORD *)(a1 + 4) >> 12;
    v9 = 1LL;
    if ( *v4 )
    {
      do
      {
        *(_QWORD *)(v7 + 8 * v6 + 48) = v4[v9];
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v8 )
        {
          EtwpMdlInit(v7, v6, 0LL, a4);
          MmFreePagesFromMdl(v10);
          v6 = 0LL;
        }
        v4 = *(unsigned __int64 **)(a1 + 1600);
        ++v9;
      }
      while ( v9 <= *v4 );
      if ( (_DWORD)v6 )
      {
        EtwpMdlInit(v7, v6, 0LL, a4);
        MmFreePagesFromMdl(v11);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1600), 0);
    *(_QWORD *)(a1 + 1600) = 0LL;
  }
}
