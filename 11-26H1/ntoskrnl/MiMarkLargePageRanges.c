/*
 * XREFs of MiMarkLargePageRanges @ 0x140CF9F2C
 * Callers:
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiMarkLargePageMappings @ 0x140CF9DF4 (MiMarkLargePageMappings.c)
 *     MxFindDescriptorByPfn @ 0x140CFCD38 (MxFindDescriptorByPfn.c)
 */

void __fastcall MiMarkLargePageRanges(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 DescriptorByPfn; // rax
  __int64 v14; // r11
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax

  MiMarkLargePageMappings();
  v2 = *(_DWORD *)MmPhysicalMemoryBlock;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v3 = 16LL * v2;
    do
    {
      v3 -= 16LL;
      --v2;
      v4 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v3 + 16);
      v5 = (v4 + *(_QWORD *)((char *)MmPhysicalMemoryBlock + v3 + 24)) & 0xFFFFFFFFFFFFFE00uLL;
      v6 = (v4 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v6 )
      {
        if ( v6 < v5 )
        {
          v7 = -1LL;
          v8 = 0LL;
          v9 = 48 * v6 - 0x220000000000LL;
          v10 = v9 + 48 * (v5 - v6);
          if ( v9 < v10 )
          {
            do
            {
              if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                && (*(_BYTE *)(v9 + 34) & 7) == 6
                && (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
              {
                v11 = 1LL;
                v12 = (__int64)(v9 + 0x220000000000LL) / 48;
                if ( !v8 )
                  v7 = (__int64)(v9 + 0x220000000000LL) / 48;
                DescriptorByPfn = MxFindDescriptorByPfn(
                                    a1,
                                    (__int64)(v9 + 0x220000000000LL) / 48,
                                    v6,
                                    0xFFFFDE0000000000uLL);
                if ( DescriptorByPfn )
                {
                  if ( (*(_DWORD *)(DescriptorByPfn + 28) & 1) == 0 )
                  {
                    v15 = *(_DWORD *)(DescriptorByPfn + 24);
                    if ( v15 != 2 && v15 != 24 )
                      v11 = *(_QWORD *)(DescriptorByPfn + 32) + *(_QWORD *)(DescriptorByPfn + 40) - v12;
                  }
                }
                v8 += v11;
                v16 = 48 * v11;
              }
              else
              {
                if ( v8 < 0x200 )
                {
                  if ( !v8 )
                    v7 = (__int64)(v9 + 0x220000000000LL) / 48;
                }
                else
                {
                  v8 &= 0xFFFFFFFFFFFFFE00uLL;
                  MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v8, 3);
                }
                v17 = v8 + 512;
                v8 = 0LL;
                v18 = (v7 + v17) & 0xFFFFFFFFFFFFFE00uLL;
                if ( !v18 )
                  goto LABEL_26;
                v14 = 48 * v18;
                v16 = 0xFFFFDE0000000000uLL;
              }
              v9 = v16 + v14;
            }
            while ( v9 < v10 );
            if ( v8 >= 0x200 )
              MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v8 & 0xFFFFFFFFFFFFFE00uLL, 3);
          }
        }
      }
LABEL_26:
      ;
    }
    while ( v2 );
  }
}
