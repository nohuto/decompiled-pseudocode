/*
 * XREFs of std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B8174
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180287EC8 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180288788 (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 *     std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B7FAC (std--_Guess_median_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662a.c)
 */

__int64 **__fastcall std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 *a3)
{
  __int64 *v5; // rbx
  FILETIME v6; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  __int64 *v9; // rsi
  __int64 *v10; // r14
  __int64 *v11; // r13
  bool v12; // zf
  __int64 *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 **result; // rax

  v5 = (__int64 *)(a2 + 8 * ((__int64)((__int64)a3 - a2) >> 4));
  std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
    a2,
    (__int64)v5,
    (__int64)(a3 - 1));
  v7 = v5 + 1;
  if ( a2 < (unsigned __int64)v5 )
  {
    do
    {
      v8 = v5 - 1;
      if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v5 - 1, v5) )
        break;
      if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v5, v5 - 1) )
        break;
      --v5;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3
       && !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v7, v5)
       && !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v5, v7) )
    ++v7;
  v9 = v7;
  v10 = v5;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v5, v9) )
        goto LABEL_16;
      if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v9, v5) )
        break;
      if ( v7 != v9 )
      {
        v6 = (FILETIME)*v7;
        *v7 = *v9;
        *v9 = (__int64)v6;
      }
      ++v7;
LABEL_16:
      ++v9;
    }
    v11 = v10;
    v12 = v10 == (__int64 *)a2;
    if ( (unsigned __int64)v10 > a2 )
    {
      v13 = v10 - 1;
      do
      {
        if ( !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v13, v5) )
        {
          if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, v5, v13) )
            break;
          if ( --v5 != v13 )
          {
            v6 = (FILETIME)*v5;
            *v5 = *v13;
            *v13 = (__int64)v6;
          }
        }
        --v10;
        --v13;
        v11 = v10;
      }
      while ( a2 < (unsigned __int64)v10 );
      v12 = v10 == (__int64 *)a2;
    }
    if ( v12 )
      break;
    --v10;
    if ( v9 != a3 )
    {
      v6 = (FILETIME)*v9;
      *v9 = *(v11 - 1);
      *(v11 - 1) = (__int64)v6;
      goto LABEL_16;
    }
    if ( v11 - 1 != --v5 )
    {
      v15 = *v10;
      *v10 = *v5;
      *v5 = v15;
    }
    v6 = (FILETIME)*v5;
    *v5 = *--v7;
    *v7 = (__int64)v6;
  }
  if ( v9 != a3 )
  {
    if ( v7 != v9 )
    {
      v14 = *v5;
      *v5 = *v7;
      *v7 = v14;
    }
    v6 = (FILETIME)*v5;
    ++v7;
    *v5++ = *v9;
    *v9 = (__int64)v6;
    goto LABEL_16;
  }
  result = a1;
  *a1 = v5;
  a1[1] = v7;
  return result;
}
