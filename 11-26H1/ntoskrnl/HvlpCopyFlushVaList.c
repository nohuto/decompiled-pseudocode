/*
 * XREFs of HvlpCopyFlushVaList @ 0x14032DF20
 * Callers:
 *     HvlpFastFlushListTbEx @ 0x1402F4568 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x1402F4CD8 (HvlpSlowFlushListTbEx.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvlpDmaFastFlushDeviceDomainVaList @ 0x1405C0FD4 (HvlpDmaFastFlushDeviceDomainVaList.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405C10B4 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405C1330 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlpCopyFlushVaList(unsigned int a1, __int64 *a2, char a3, __int64 a4)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r8
  char v10; // cl
  unsigned __int64 v11; // rax
  __int64 v12; // r8

  if ( a3 )
  {
    v7 = 0LL;
    if ( a1 )
    {
      v8 = a1;
      do
      {
        v9 = *a2;
        if ( (((unsigned __int64)*a2 >> 10) & 3) != 0 && (v9 & 0x3FF) != 0 )
        {
          v10 = 9 * (((unsigned __int64)*a2 >> 10) & 3);
          v11 = v9 & 0xFFFFFFFFFFFFF000uLL;
          v12 = (*a2 & 0x3FF) + 1;
          do
          {
            *(_QWORD *)(a4 + 8 * v7) = v11;
            v11 += 4096LL << v10;
            v7 = (unsigned int)(v7 + 1);
            --v12;
          }
          while ( v12 );
        }
        else
        {
          *(_QWORD *)(a4 + 8 * v7) = v9 & 0xFFFFFFFFFFFFF3FFuLL;
          v7 = (unsigned int)(v7 + 1);
        }
        ++a2;
        --v8;
      }
      while ( v8 );
    }
  }
  else if ( a1 )
  {
    v4 = (char *)a2 - a4;
    v5 = a1;
    do
    {
      v6 = *(_QWORD *)&v4[a4];
      a4 += 8LL;
      *(_QWORD *)(a4 - 8) = v6 & 0x800 | (v6 + (v6 & 0xC00));
      --v5;
    }
    while ( v5 );
  }
}
