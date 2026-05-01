/*
 * XREFs of std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B7FAC
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B8174 (std--_Partition_by_median_guess_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0.c)
 * Callees:
 *     std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B80F4 (std--_Med3_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp

  v3 = a3;
  v4 = (a3 - a1) >> 3;
  v5 = a2;
  if ( v4 > 40 )
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v8 = 8 * v6;
    v9 = 8 * v6 + a1;
    std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      a1,
      v9,
      16 * v6 + a1);
    std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      v5 - v8,
      v5,
      v8 + v5);
    std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      v3 - v7,
      v3 - v8,
      v3);
    a3 = v3 - v8;
    a2 = v5;
    a1 = v9;
  }
  return std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(a1, a2, a3);
}
