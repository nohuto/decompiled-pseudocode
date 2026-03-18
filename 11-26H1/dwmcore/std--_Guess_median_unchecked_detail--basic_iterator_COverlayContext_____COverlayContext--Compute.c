/*
 * XREFs of std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180237DE4
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238250 (std--_Partition_by_median_guess_unchecked_detail--basic_iterator_COverlayContext_____COverlayCon.c)
 * Callees:
 *     std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238080 (std--_Med3_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF

  v3 = *a1;
  v5 = *a3;
  v7 = *a3;
  v16[0] = v3;
  v8 = (v7 - v3) >> 3;
  if ( v8 <= 40 )
  {
    v17 = v5;
    v14 = *a2;
  }
  else
  {
    v10 = (v8 + 1) >> 3;
    v11 = 16 * v10;
    v12 = 8 * v10;
    v17 = 16 * v10 + v3;
    v18 = 8 * v10 + v3;
    std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
      v16,
      &v18,
      &v17);
    v18 = *a2;
    v16[0] = v18 - v12;
    v17 = v18 + v12;
    std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
      v16,
      &v18,
      &v17);
    v17 = *a3;
    v16[0] = v17 - v11;
    v18 = v17 - v12;
    std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
      v16,
      &v18,
      &v17);
    v13 = v12 + *a1;
    v17 = *a3 - v12;
    v14 = *a2;
    v16[0] = v13;
  }
  v18 = v14;
  return std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
           v16,
           &v18,
           &v17);
}
