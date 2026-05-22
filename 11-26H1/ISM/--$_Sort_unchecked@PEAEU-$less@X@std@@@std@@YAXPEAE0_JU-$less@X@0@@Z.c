/*
 * XREFs of ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E9FC8
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E9FC8 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EC148 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x1800E971C (--$_Partition_by_median_guess_unchecked@PEAEU-$less@X@std@@@std@@YA-AU-$pair@PEAEPEAE@0@PEAE0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800E9CE0 (--$_Pop_heap_hole_by_index@PEAEEU-$less@X@std@@@std@@YAXPEAE_J1$$QEAEU-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E9FC8 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

void __fastcall std::_Sort_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r8
  unsigned __int8 *v9; // r14
  __int64 v10; // r9
  __int64 i; // rbp
  unsigned __int8 *v12; // rsi
  __int64 v13; // r14
  unsigned __int8 *j; // rbx
  unsigned __int8 v15; // bp
  unsigned __int8 *v16; // rcx
  unsigned __int8 *k; // rax
  unsigned __int8 *v18; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 *v19; // [rsp+38h] [rbp-20h]
  unsigned __int8 v20; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = a2 - a1;
    if ( a2 - a1 <= 32 )
      break;
    if ( a3 <= 0 )
    {
      for ( i = v8 >> 1;
            i > 0;
            std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>((__int64)a1, i, v8, &v20) )
      {
        v20 = a1[--i];
      }
      v12 = a2 - 1;
      v13 = 1LL - (_QWORD)a1;
      do
      {
        if ( (__int64)&v12[v13] >= 2 )
        {
          v20 = *v12;
          *v12 = *a1;
          std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>((__int64)a1, 0LL, v12 - a1, &v20);
        }
        --v12;
      }
      while ( (__int64)&v12[v13] >= 2 );
      return;
    }
    std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(&v18, a1, a2);
    v9 = v19;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( v18 - a1 >= a2 - v19 )
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v19, a2, a3, v10);
      a2 = v18;
    }
    else
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(a1, v18, a3, v10);
      a1 = v9;
    }
  }
  if ( a1 != a2 )
  {
    for ( j = a1 + 1; j != a2; ++j )
    {
      v15 = *j;
      v16 = j;
      if ( *j >= *a1 )
      {
        for ( k = j; v15 < *--k; v16 = k )
          *v16 = *k;
        *v16 = v15;
      }
      else
      {
        memmove_0(a1 + 1, a1, j - a1);
        *a1 = v15;
      }
    }
  }
}
