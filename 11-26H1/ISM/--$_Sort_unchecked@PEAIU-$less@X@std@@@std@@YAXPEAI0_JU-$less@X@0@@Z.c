/*
 * XREFs of ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800FBB4C (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 * Callees:
 *     ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800F9DF8 (--$_Partition_by_median_guess_unchecked@PEAIU-$less@X@std@@@std@@YA-AU-$pair@PEAIPEAI@0@PEAI0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAIIU?$less@X@std@@@std@@YAXPEAI_J1$$QEAIU?$less@X@0@@Z @ 0x1800F9FC4 (--$_Pop_heap_hole_by_index@PEAIIU-$less@X@std@@@std@@YAXPEAI_J1$$QEAIU-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

void __fastcall std::_Sort_unchecked<unsigned int *,std::less<void>>(int *a1, int *a2, __int64 a3, char a4)
{
  __int64 v8; // r8
  int *v9; // r14
  __int64 v10; // r9
  __int64 i; // rbp
  unsigned int *v12; // rsi
  int *j; // rbx
  unsigned int v14; // ebp
  _DWORD *v15; // rcx
  int *k; // rax
  int *v17; // [rsp+30h] [rbp-28h] BYREF
  int *v18; // [rsp+38h] [rbp-20h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = a2 - a1;
    if ( v8 <= 32 )
      break;
    if ( a3 <= 0 )
    {
      for ( i = ((char *)a2 - (char *)a1) >> 3;
            i > 0;
            std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>((__int64)a1, i, v8, &v19) )
      {
        v19 = a1[--i];
      }
      v12 = (unsigned int *)(a2 - 1);
      do
      {
        v19 = *v12;
        *v12 = *a1;
        std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>(
          (__int64)a1,
          0LL,
          ((char *)v12-- - (char *)a1) >> 2,
          &v19);
      }
      while ( (__int64)(((unsigned __int64)v12 + 4LL - (_QWORD)a1) & 0xFFFFFFFFFFFFFFFCuLL) >= 8 );
      return;
    }
    std::_Partition_by_median_guess_unchecked<unsigned int *,std::less<void>>(&v17, a1, a2);
    v9 = v18;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v17 - (char *)a1) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)a2 - (char *)v18) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<unsigned int *,std::less<void>>(v18, a2, a3, v10);
      a2 = v17;
    }
    else
    {
      std::_Sort_unchecked<unsigned int *,std::less<void>>(a1, v17, a3, v10);
      a1 = v9;
    }
  }
  if ( a1 != a2 )
  {
    for ( j = a1 + 1; j != a2; ++j )
    {
      v14 = *j;
      v15 = j;
      if ( *j >= (unsigned int)*a1 )
      {
        for ( k = j; v14 < *--k; v15 = k )
          *v15 = *k;
        *v15 = v14;
      }
      else
      {
        memmove_0(a1 + 1, a1, (char *)j - (char *)a1);
        *a1 = v14;
      }
    }
  }
}
