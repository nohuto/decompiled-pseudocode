/*
 * XREFs of MmAllocateNonCachedMemory @ 0x140B39F30
 * Callers:
 *     DifMmAllocateNonCachedMemoryWrapper @ 0x140669B50 (DifMmAllocateNonCachedMemoryWrapper.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 v3; // r8
  struct _MDL *PagesForMdl; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rbx
  struct _MDL *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v11; // rbx

  if ( NumberOfBytes > 0xFFFFFFFF )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (int)&MiSystemPartition,
                                 0,
                                 -1,
                                 0LL,
                                 v3,
                                 0,
                                 IdealNodeNumberThread,
                                 4,
                                 (__int64)KeGetCurrentThread()->ApcState.Process,
                                 0LL);
  if ( !PagesForMdl )
    return 0LL;
  v7 = MiReservePtes((__int64)&unk_140E34BC0, v1, v5, v6);
  if ( !v7 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  v8 = PagesForMdl + 1;
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x21FFFFFFFFF0LL) = PagesForMdl;
  v9 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612724);
  v11 = v7 - (_QWORD)v8;
  do
  {
    ValidPte = ((__int64)v8->Next << 12) ^ (((__int64)v8->Next << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
    *(struct _MDL **)((char *)&v8->Next + v11) = (struct _MDL *)ValidPte;
    v8 = (struct _MDL *)((char *)v8 + 8);
    --v1;
  }
  while ( v1 );
  return (PVOID)v9;
}
