/*
 * XREFs of std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238778
 * Callers:
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 * Callees:
 *     std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802388B8 (std--_Push_heap_by_index_detail--basic_iterator_COverlayContext____COverlayContext____COverlayCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  __int64 v8; // r10
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int (__fastcall *v15)(__int64); // rdi
  unsigned int v16; // ebx
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v19 = a2;
  v4 = (a3 - 1) >> 1;
  v6 = a2;
  v8 = a2;
  if ( a2 < v4 )
  {
    do
    {
      v9 = 2 * v8;
      v10 = *(_QWORD *)(*a1 + 16 * v8 + 8);
      v11 = *(_QWORD *)(*(_QWORD *)(*a1 + 16 * v8 + 16) + 56LL);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 280LL))(v11);
      if ( v12 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 56) + 280LL))(*(_QWORD *)(v10 + 56));
        v18 = v14;
        if ( v14 )
        {
          v15 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 240LL);
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 240LL))(v12);
          v13 = 2LL - (v16 < v15(v18));
        }
        else
        {
          v13 = 1LL;
        }
      }
      else
      {
        v13 = 2LL;
      }
      v8 = v13 + v9;
      *(_QWORD *)(*a1 + 8 * v6) = *(_QWORD *)(*a1 + 8 * (v13 + v9));
      v6 = v13 + v9;
    }
    while ( v13 + v9 < v4 );
    a2 = v19;
  }
  if ( v8 == v4 && (a3 & 1) == 0 )
  {
    *(_QWORD *)(*a1 + 8 * v6) = *(_QWORD *)(*a1 + 8 * a3 - 8);
    v6 = a3 - 1;
  }
  v18 = *a1;
  return std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
           &v18,
           v6,
           a2);
}
