/*
 * XREFs of std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238080
 * Callers:
 *     std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180237DE4 (std--_Guess_median_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--Compute.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned int (__fastcall *v10)(__int64); // rdi
  unsigned int v11; // ebx
  __int64 *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 (__fastcall *v19)(__int64); // rdi
  unsigned int v20; // ebx
  __int64 *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64); // rdi
  unsigned int v27; // ebx
  __int64 *v28; // r8
  __int64 v29; // rdx

  v6 = **a1;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(**a2 + 56) + 280LL))(*(_QWORD *)(**a2 + 56));
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 56) + 280LL))(*(_QWORD *)(v6 + 56));
    v9 = v8;
    if ( !v8
      || (v10 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 240LL),
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 240LL))(v7),
          v11 < v10(v9)) )
    {
      v12 = *a1;
      v13 = **a2;
      **a2 = **a1;
      *v12 = v13;
    }
  }
  v14 = **a2;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(**a3 + 56) + 280LL))(*(_QWORD *)(**a3 + 56));
  v16 = result;
  if ( result )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 56) + 280LL))(*(_QWORD *)(v14 + 56));
    v18 = v17;
    if ( !v17
      || (v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 240LL),
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 240LL))(v16),
          result = v19(v18),
          v20 < (unsigned int)result) )
    {
      v21 = *a2;
      v22 = **a3;
      **a3 = **a2;
      *v21 = v22;
      v23 = **a1;
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(**a2 + 56) + 280LL))(*(_QWORD *)(**a2 + 56));
      v24 = result;
      if ( result )
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 56) + 280LL))(*(_QWORD *)(v23 + 56));
        if ( !v25
          || (v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 240LL),
              v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 240LL))(v25),
              result = v26(v24),
              (unsigned int)result < v27) )
        {
          v28 = *a1;
          result = **a1;
          v29 = **a2;
          **a2 = result;
          *v28 = v29;
        }
      }
    }
  }
  return result;
}
