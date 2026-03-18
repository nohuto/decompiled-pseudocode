/*
 * XREFs of MiCreateMdl @ 0x140A560A8
 * Callers:
 *     MiCreateImageMapSectionHeaders @ 0x140A55B2C (MiCreateImageMapSectionHeaders.c)
 *     MiCreateImageMapReadNtHeader @ 0x140A55D18 (MiCreateImageMapReadNtHeader.c)
 *     MiCreateImageMapHeader @ 0x140A55DDC (MiCreateImageMapHeader.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024C4E0 (MmBuildMdlForNonPagedPool.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiDeleteImageCreationMdls @ 0x140A5620C (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

struct _MDL *__fastcall MiCreateMdl(ULONG *a1, unsigned int a2, ULONG_PTR a3, int a4)
{
  ULONG_PTR v5; // rbp
  PMDL Mdl; // rax
  __int64 v9; // r9
  struct _MDL *v10; // rdi
  struct _MDL *v11; // r14
  ULONG_PTR i; // rsi
  PVOID MappedSystemVa; // rax
  __int64 PageForHeader; // rax
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  void *v18; // rbx
  struct _MDL *v19; // rax

  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v10 = Mdl;
    if ( Mdl )
    {
      v11 = Mdl + 1;
      for ( i = 0LL; i < v5; ++i )
      {
        PageForHeader = MiGetPageForHeader(a1, a2, 0, v9);
        if ( PageForHeader == -1 )
        {
          v10->ByteCount = (_DWORD)i << 12;
LABEL_14:
          MiDeleteImageCreationMdls(v10);
          return 0LL;
        }
        if ( !i )
          v10->MdlFlags |= 0x4002u;
        v11->Next = (struct _MDL *)PageForHeader;
        v11 = (struct _MDL *)((char *)v11 + 8);
      }
      if ( (v10->MdlFlags & 5) != 0 )
        MappedSystemVa = v10->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
        goto LABEL_14;
      return v10;
    }
  }
  else
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (void *)ExAllocatePoolMm(64LL, a3, 2021158221, CurrentProcessorColor | 0x80000000);
    v18 = PoolMm;
    if ( PoolMm )
    {
      v19 = IoAllocateMdl(PoolMm, a3, 0, 0, 0LL);
      v10 = v19;
      if ( v19 )
      {
        MmBuildMdlForNonPagedPool(v19);
        v10->MdlFlags |= 0x4000u;
        return v10;
      }
      ExFreePoolWithTag(v18, 0);
    }
  }
  return 0LL;
}
