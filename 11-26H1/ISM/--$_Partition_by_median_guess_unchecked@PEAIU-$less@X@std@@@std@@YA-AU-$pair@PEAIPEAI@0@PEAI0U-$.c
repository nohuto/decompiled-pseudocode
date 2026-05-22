/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800F9DF8
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI00U?$less@X@0@@Z @ 0x1800F9DC0 (--$_Med3_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI00U-$less@X@0@@Z.c)
 */

int **__fastcall std::_Partition_by_median_guess_unchecked<unsigned int *,std::less<void>>(int **a1, int *a2, int *a3)
{
  int *v3; // r14
  int *v7; // rcx
  int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  int *v15; // rdx
  int *v16; // r8
  int *v17; // rdx
  unsigned int v18; // eax
  int *v19; // rcx
  int *v20; // r8
  int *v21; // r9
  unsigned int v22; // ecx
  int v23; // eax
  int *v24; // r10
  bool v25; // zf
  int *v26; // rcx
  unsigned int v27; // r11d
  int v28; // eax
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int **result; // rax

  v3 = a3 - 1;
  v7 = a2;
  v8 = &a2[((char *)a3 - (char *)a2) >> 3];
  v9 = a3 - 1 - a2;
  if ( v9 <= 40 )
  {
    v16 = a3 - 1;
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = &a2[v10];
    std::_Med3_unchecked<unsigned int *,std::less<void>>(a2, v11, &a2[2 * v10]);
    std::_Med3_unchecked<unsigned int *,std::less<void>>((int *)((char *)v8 - v12), v8, (int *)((char *)v8 + v12));
    std::_Med3_unchecked<unsigned int *,std::less<void>>((int *)((char *)v3 - v14), (int *)((char *)v3 - v13), v3);
    v16 = v15;
    v7 = v11;
  }
  std::_Med3_unchecked<unsigned int *,std::less<void>>(v7, v8, v16);
  v17 = v8 + 1;
  if ( a2 < v8 )
  {
    v18 = *v8;
    do
    {
      v19 = v8 - 1;
      if ( *(v8 - 1) < v18 )
        break;
      if ( *(v8 - 1) > v18 )
        break;
      v18 = *v19;
      --v8;
    }
    while ( a2 < v19 );
  }
  while ( v17 < a3 && *v17 >= (unsigned int)*v8 && *v17 <= (unsigned int)*v8 )
    ++v17;
  v20 = v17;
  v21 = v8;
  while ( 1 )
  {
    while ( v20 < a3 )
    {
      v22 = *v20;
      if ( *v8 < (unsigned int)*v20 )
        goto LABEL_20;
      if ( *v8 > v22 )
        break;
      if ( v17 != v20 )
      {
        v23 = *v17;
        *v17 = v22;
        *v20 = v23;
      }
      ++v17;
LABEL_20:
      ++v20;
    }
    v24 = v21;
    v25 = v21 == a2;
    if ( v21 > a2 )
    {
      v26 = v21 - 1;
      do
      {
        v27 = *v26;
        if ( *v26 >= (unsigned int)*v8 )
        {
          if ( v27 > *v8 )
            break;
          if ( --v8 != v26 )
          {
            v28 = *v8;
            *v8 = v27;
            *v26 = v28;
          }
        }
        --v21;
        --v26;
        v24 = v21;
      }
      while ( a2 < v21 );
      v25 = v21 == a2;
    }
    if ( v25 )
      break;
    --v21;
    if ( v20 != a3 )
    {
      v33 = *v20;
      *v20 = *(v24 - 1);
      *(v24 - 1) = v33;
      goto LABEL_20;
    }
    if ( v24 - 1 != --v8 )
    {
      v31 = *v21;
      *v21 = *v8;
      *v8 = v31;
    }
    v32 = *v8;
    *v8 = *--v17;
    *v17 = v32;
  }
  if ( v20 != a3 )
  {
    if ( v17 != v20 )
    {
      v29 = *v8;
      *v8 = *v17;
      *v17 = v29;
    }
    v30 = *v8;
    ++v17;
    *v8++ = *v20;
    *v20 = v30;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
