/*
 * XREFs of std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180237EF4
 * Callers:
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 **__fastcall std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // rax
  __int64 **v6; // r12
  __int64 *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int (__fastcall *v13)(__int64); // rbp
  unsigned int v14; // edi
  __int64 *v15; // rcx
  __int64 *j; // rax
  __int64 *v17; // r8
  __int64 *i; // rdi
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int (__fastcall *v21)(__int64); // r14
  unsigned int v22; // ebp
  __int64 v25; // [rsp+70h] [rbp+18h]

  v3 = *a2;
  v5 = *a3;
  v6 = a1;
  if ( *a2 != *a3 )
  {
    while ( 1 )
    {
      v5 = *a3;
      if ( ++v3 == *a3 )
        break;
      v8 = v3;
      v9 = *v3;
      v10 = **a2;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v3 + 56) + 280LL))(*(_QWORD *)(*v3 + 56));
      if ( !v11
        || (v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 56) + 280LL))(*(_QWORD *)(v10 + 56))) != 0
        && (v13 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 240LL),
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 240LL))(v12),
            v13(v11) >= v14) )
      {
        for ( i = v3; ; v8 = i )
        {
          v19 = *--i;
          v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 56) + 280LL))(*(_QWORD *)(v9 + 56));
          if ( !v25 )
            break;
          v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 56) + 280LL))(*(_QWORD *)(v19 + 56));
          if ( v20 )
          {
            v21 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25 + 240LL);
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 240LL))(v20);
            if ( v21(v25) >= v22 )
              break;
          }
          *v8 = *i;
        }
        *v8 = v9;
      }
      else
      {
        v15 = *a2;
        for ( j = v3; ; *v17 = *j )
        {
          v17 = j;
          if ( v15 == j )
            break;
          --j;
        }
        **a2 = v9;
      }
    }
    v6 = a1;
  }
  *v6 = v5;
  return v6;
}
