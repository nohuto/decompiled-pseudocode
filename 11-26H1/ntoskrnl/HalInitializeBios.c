/*
 * XREFs of HalInitializeBios @ 0x14057A9D0
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     _strupr @ 0x1405377E0 (_strupr.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     x86BiosInitializeBiosEx @ 0x1405831D8 (x86BiosInitializeBiosEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalInitializeBios(int a1, _QWORD *a2)
{
  char *v3; // rcx
  char *v5; // rax
  int *v6; // rax
  __int64 Pool2; // rax
  struct _MDL *v8; // rdi
  unsigned int v9; // edx
  __int64 *v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  _QWORD **v21; // rdx
  unsigned __int64 v22; // rax
  _QWORD *i; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  const void *v28; // r15
  int *v29; // rax

  v3 = (char *)a2[27];
  if ( !v3 || (v5 = strupr(v3), !strstr(v5, "NOVGA")) )
  {
    if ( a1 == -1 )
    {
      if ( (*(_BYTE *)(a2[30] + 2656LL) & 4) == 0 )
      {
        HalpVideoBiosPresent = 1;
        qword_140E00848 = (__int64)HalpBiosDisplayReset;
        HalpIoMemoryBase = 0LL;
        HalpFrameBufferBase = 0LL;
        x86BiosInitializeBiosEx(v3, 0LL, 0LL, 0x20000LL);
        v6 = x86BiosTranslateAddress(0, 0);
        memmove(v6, 0LL, 0x800uLL);
      }
      return;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = (struct _MDL *)Pool2;
    if ( !Pool2 )
      return;
    *(_QWORD *)Pool2 = 0LL;
    v9 = 0;
    *(_DWORD *)(Pool2 + 8) = 134350896;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    v10 = (__int64 *)(Pool2 + 48);
    *(_QWORD *)(Pool2 + 40) = 0x100000LL;
    v11 = 0LL;
    do
    {
      v12 = v11;
      if ( v9 - 160 <= 0x1F )
        v12 = 240LL;
      ++v9;
      ++v11;
      *v10++ = v12;
    }
    while ( v9 < 0x100 );
    v13 = a2[45];
    if ( (v13 & 1) != 0 )
    {
      if ( v13 == 1 )
        goto LABEL_32;
      v14 = v13 ^ ((unsigned __int64)(a2 + 44) | 1);
    }
    else
    {
      v14 = a2[45];
    }
    while ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      if ( v15 < 0x100 )
      {
        v16 = *(int *)(v14 + 24);
        if ( (_DWORD)v16 != 30 )
        {
          if ( (unsigned int)v16 > 0x23 || (v17 = 0xB80400040LL, !_bittest64(&v17, v16)) )
          {
            v18 = *(unsigned int *)(v14 + 32);
            v19 = v15 - 1 + *(_QWORD *)(v14 + 40);
            v20 = v18;
            if ( v19 > 0xFF )
              v19 = 255LL;
            if ( v18 <= v19 )
            {
              do
              {
                LODWORD(v18) = v18 + 1;
                *((_QWORD *)&v8[1].Next + v20) = 240LL;
                v20 = (unsigned int)v18;
              }
              while ( (unsigned int)v18 <= v19 );
            }
          }
        }
      }
      v21 = *(_QWORD ***)(v14 + 8);
      v22 = v14;
      if ( v21 )
      {
        v14 = *(_QWORD *)(v14 + 8);
        for ( i = *v21; i; i = (_QWORD *)*i )
          v14 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v14 || *(_QWORD *)v14 == v22 )
            break;
          v22 = v14;
        }
      }
    }
LABEL_32:
    HalpIoMemoryBase = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( HalpIoMemoryBase )
    {
      v25 = MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
      if ( v25 )
      {
        v26 = HalpMmAllocCtxAlloc(v24, 0x2000LL);
        if ( v26 )
        {
          HalpFrameBufferBase = v25 - 655360;
          x86BiosInitializeBiosEx(v27, HalpIoMemoryBase, v25 - 655360, v26);
          v28 = (const void *)MmMapIoSpaceEx(0LL, 2048LL, 4u);
          if ( v28 )
          {
            v29 = x86BiosTranslateAddress(0, 0);
            memmove(v29, v28, 0x800uLL);
            MiUnmapContiguousMemory((unsigned __int64)v28, 0x800uLL, 1);
            HalpVideoBiosPresent = 1;
            qword_140E00848 = (__int64)HalpBiosDisplayReset;
LABEL_40:
            ExFreePoolWithTag(v8, 0);
            return;
          }
        }
        MiUnmapContiguousMemory(v25, 0x20000uLL, 1);
        HalpFrameBufferBase = 0LL;
      }
    }
    if ( HalpIoMemoryBase )
    {
      MmUnmapLockedPages(HalpIoMemoryBase, v8);
      HalpIoMemoryBase = 0LL;
    }
    goto LABEL_40;
  }
}
