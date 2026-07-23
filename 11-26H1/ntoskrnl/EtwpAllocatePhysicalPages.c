/*
 * XREFs of EtwpAllocatePhysicalPages @ 0x14082B258
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1404B67A4 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x140AB295C (EtwpAllocatePhysicalMemoryForTraceBuffers.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

size_t __fastcall EtwpAllocatePhysicalPages(char *Base, __int64 a2)
{
  size_t v4; // rsi
  unsigned __int64 v5; // rdi
  SIZE_T v6; // r13
  PMDL PagesForMdl; // rax
  _DWORD *v8; // r15
  unsigned __int64 v9; // rbx
  ULONG v11[2]; // [rsp+30h] [rbp-50h]
  PHYSICAL_ADDRESS SkipBytes; // [rsp+38h] [rbp-48h]
  int v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  unsigned __int64 v21; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v22; // [rsp+D0h] [rbp+50h]

  v19 = 1;
  SkipBytes.QuadPart = 0x200000LL;
  v14 = 0x200000LL;
  v20 = 0LL;
  v11[0] = 97;
  v4 = 0LL;
  v15 = 97;
  v16 = 0x10000LL;
  v5 = 0LL;
  v18 = 0x10000LL;
  v13 = 33;
  v17 = 33;
  while ( 1 )
  {
    v22 = v5;
    v21 = a2 << 12;
    v6 = a2 << 12;
    if ( (unsigned __int64)(a2 << 12) > 0xFFE00000 )
      v6 = 4292870144LL;
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    *(&SkipBytes + 2 * v5),
                    v6,
                    MmCached,
                    v11[4 * v5]);
    ++v5;
    v8 = PagesForMdl;
    if ( PagesForMdl )
    {
      v9 = (unsigned __int64)PagesForMdl->ByteCount >> 12;
      memmove(&Base[8 * v4], &PagesForMdl[1], 8 * v9);
      v4 += v9;
      a2 -= v9;
      ExFreePoolWithTag(v8, 0);
      if ( v21 > 0xFFE00000 && v8[10] == v6 )
        v5 = v22;
    }
    if ( !a2 )
      break;
    if ( v5 >= 5 )
      return v4;
  }
  qsort(Base, v4, 8uLL, EtwpComparePfn);
  return v4;
}
