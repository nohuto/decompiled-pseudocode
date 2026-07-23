/*
 * XREFs of MiNodeFreeZeroPages @ 0x14028E530
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiSignalLargePageRebuild @ 0x1402A7770 (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x1402AA1C0 (MiRebuildLargePages.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiFreeZeroPagesNeeded @ 0x1402AAA2C (MiFreeZeroPagesNeeded.c)
 *     MiCheckZeroFreeRebalance @ 0x14049AF4C (MiCheckZeroFreeRebalance.c)
 *     MiNodeAvailablePages @ 0x1404B7E38 (MiNodeAvailablePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v22; // [rsp+50h] [rbp+20h]

  v3 = (unsigned __int8)a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = ((unsigned int)~a3 >> 4) & 1;
  v7 = a1;
  v22 = v6;
  v8 = a3 & 0x80000;
  a2 = (unsigned __int8)a2;
  do
  {
    if ( (unsigned __int8)byte_140E2D898 > 1u )
      v9 = *(_QWORD *)(v7 + 8 * (v5 + 2 * a2) + 14064);
    else
      v9 = *(_QWORD *)(v7 + 8 * v5 + 3080);
    v4 += v9;
    if ( v8 )
    {
      v10 = 0LL;
      v11 = MiPageSizes;
      v12 = v7;
      v13 = 3LL;
      do
      {
        v14 = 0LL;
        if ( (_BYTE)v3 == 2 )
        {
          if ( v5 == 2 )
            v14 = *(_QWORD *)(v12 + 8);
          v18 = 8LL;
          if ( v5 != 2 )
            v18 = 8 * v5;
          v14 += *(_QWORD *)(v18 + v12 + 8);
        }
        else
        {
          v15 = 2LL;
          v16 = (__int64 *)(v12 + 8 * (v3 + 92 + 2 * v5));
          do
          {
            v17 = *v16;
            v16 += 4;
            v14 += v17;
            --v15;
          }
          while ( v15 );
        }
        v19 = v14 * *v11++;
        v12 += 1024LL;
        v10 += v19;
        --v13;
      }
      while ( v13 );
      v6 = v22;
      v4 += v10;
      v7 = a1;
      a2 = v3;
    }
    ++v5;
  }
  while ( v5 <= v6 );
  return v4;
}
