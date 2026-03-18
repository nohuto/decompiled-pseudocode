/*
 * XREFs of std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238250
 * Callers:
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 * Callees:
 *     std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180237DE4 (std--_Guess_median_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--Compute.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int (__fastcall *v11)(__int64); // rbp
  unsigned int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int (__fastcall *v16)(__int64); // rbp
  unsigned int v17; // esi
  unsigned __int64 *v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r14
  unsigned int (__fastcall *v22)(__int64); // rbp
  unsigned int v23; // esi
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned int (__fastcall *v28)(__int64); // rbp
  unsigned int v29; // esi
  unsigned __int64 v30; // rsi
  __int64 *v31; // r14
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rax
  unsigned int (__fastcall *v35)(__int64); // r15
  unsigned int v36; // ebp
  __int64 v37; // r15
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // r12
  unsigned int (__fastcall *v41)(__int64); // r15
  unsigned int v42; // ebp
  __int64 v43; // rcx
  __int64 *v44; // r12
  __int64 v45; // rbp
  __int64 v46; // r13
  __int64 v47; // rax
  unsigned int (__fastcall *v48)(__int64); // r15
  unsigned int v49; // ebp
  __int64 v50; // r15
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r13
  unsigned int (__fastcall *v54)(__int64); // r15
  unsigned int v55; // ebp
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int64 *result; // rax
  __int64 *v63; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-50h] BYREF
  __int64 v65[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a3;
  v4 = *a3;
  v65[0] = *a2;
  v5 = v65[0] + 8 * ((__int64)(v4 - v65[0]) >> 4);
  v64 = v5;
  v63 = (__int64 *)(v3 - 8);
  std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
    v65,
    (__int64 *)&v64,
    (__int64 *)&v63);
  v7 = (__int64 *)(v5 + 8);
  while ( *a2 < v5 )
  {
    v8 = *(_QWORD *)v5;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v5 - 8) + 56LL) + 280LL))(*(_QWORD *)(*(_QWORD *)(v5 - 8) + 56LL));
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 56) + 280LL))(*(_QWORD *)(v8 + 56));
      v6 = v10;
      if ( !v10 )
        break;
      v11 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 240LL);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 240LL))(v10);
      if ( v11(v9) < v12 )
        break;
    }
    v13 = *(_QWORD *)(v5 - 8);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 56LL) + 280LL))(*(_QWORD *)(*(_QWORD *)v5 + 56LL));
    if ( v14 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 56) + 280LL))(*(_QWORD *)(v13 + 56));
      v6 = v15;
      if ( !v15 )
        break;
      v16 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 240LL);
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 240LL))(v15);
      if ( v16(v14) < v17 )
        break;
    }
    v5 -= 8LL;
  }
  v18 = a3;
  while ( (unsigned __int64)v7 < *a3 )
  {
    v19 = *(_QWORD *)v5;
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v7 + 56) + 280LL))(*(_QWORD *)(*v7 + 56), v6);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 56) + 280LL))(*(_QWORD *)(v19 + 56));
      if ( !v21 )
        break;
      v22 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 240LL);
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 240LL))(v20);
      if ( v23 < v22(v21) )
        break;
    }
    v24 = *v7;
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 56LL) + 280LL))(*(_QWORD *)(*(_QWORD *)v5 + 56LL));
    if ( v25 )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 56) + 280LL))(*(_QWORD *)(v24 + 56));
      v27 = v26;
      if ( !v26 )
        break;
      v28 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 240LL);
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 240LL))(v25);
      if ( v29 < v28(v27) )
        break;
    }
    ++v7;
  }
  v30 = (unsigned __int64)v7;
  v31 = (__int64 *)v5;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v30 < *v18 )
      {
        v32 = *(_QWORD *)v30;
        v33 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)v5 + 56LL) + 280LL))(
                *(_QWORD *)(*(_QWORD *)v5 + 56LL),
                v6);
        if ( v33 )
        {
          v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 56) + 280LL))(*(_QWORD *)(v32 + 56));
          v6 = v34;
          if ( !v34 )
            goto LABEL_30;
          v35 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v33 + 240LL);
          v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 240LL))(v34);
          if ( v35(v33) < v36 )
            goto LABEL_30;
        }
        v37 = *(_QWORD *)v5;
        v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v30 + 56LL) + 280LL))(*(_QWORD *)(*(_QWORD *)v30 + 56LL));
        if ( !v38
          || (v39 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v37 + 56) + 280LL))(*(_QWORD *)(v37 + 56)),
              (v40 = v39) != 0)
          && (v41 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v39 + 240LL),
              v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 240LL))(v38),
              v42 >= v41(v40)) )
        {
          if ( v7 != (__int64 *)v30 )
          {
            v43 = *v7;
            *v7 = *(_QWORD *)v30;
            *(_QWORD *)v30 = v43;
          }
          ++v7;
          goto LABEL_30;
        }
      }
      v63 = (__int64 *)v30;
      v44 = v31 - 1;
      while ( *a2 < (unsigned __int64)v31 )
      {
        v45 = *(_QWORD *)v5;
        v46 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v44 + 56) + 280LL))(
                *(_QWORD *)(*v44 + 56),
                v6);
        if ( !v46
          || (v47 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v45 + 56) + 280LL))(*(_QWORD *)(v45 + 56)),
              (v6 = v47) != 0)
          && (v48 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v46 + 240LL),
              v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 240LL))(v47),
              v48(v46) >= v49) )
        {
          v50 = *v44;
          v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 56LL) + 280LL))(*(_QWORD *)(*(_QWORD *)v5 + 56LL));
          if ( v51 )
          {
            v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v50 + 56) + 280LL))(*(_QWORD *)(v50 + 56));
            v53 = v52;
            if ( !v52 )
              break;
            v54 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v52 + 240LL);
            v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 240LL))(v51);
            if ( v55 < v54(v53) )
              break;
          }
          v5 -= 8LL;
          if ( (__int64 *)v5 != v44 )
          {
            v56 = *(_QWORD *)v5;
            *(_QWORD *)v5 = *v44;
            *v44 = v56;
          }
        }
        --v31;
        --v44;
      }
      v30 = (unsigned __int64)v63;
      v18 = a3;
      if ( v31 == (__int64 *)*a2 )
        break;
      --v31;
      if ( v63 != (__int64 *)*a3 )
      {
        v61 = *v63;
        *v63 = *v31;
        *v31 = v61;
        goto LABEL_30;
      }
      v5 -= 8LL;
      if ( v31 != (__int64 *)v5 )
      {
        v59 = *v31;
        *v31 = *(_QWORD *)v5;
        *(_QWORD *)v5 = v59;
      }
      v60 = *(_QWORD *)v5;
      *(_QWORD *)v5 = *--v7;
      *v7 = v60;
    }
    if ( v63 == (__int64 *)*a3 )
      break;
    if ( v7 != v63 )
    {
      v57 = *(_QWORD *)v5;
      *(_QWORD *)v5 = *v7;
      *v7 = v57;
    }
    v58 = *(_QWORD *)v5;
    ++v7;
    *(_QWORD *)v5 = *(_QWORD *)v30;
    v5 += 8LL;
    *(_QWORD *)v30 = v58;
LABEL_30:
    v30 += 8LL;
  }
  result = a1;
  *a1 = v5;
  a1[1] = (unsigned __int64)v7;
  return result;
}
