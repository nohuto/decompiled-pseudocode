/*
 * XREFs of std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802388B8
 * Callers:
 *     std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238778 (std--_Pop_heap_hole_by_index_detail--basic_iterator_COverlayContext____COverlayContext____COverl.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int (__fastcall *v13)(__int64); // rdi
  unsigned int v14; // ebx
  __int64 result; // rax

  v6 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v8 = *a4;
      v9 = (v6 - 1) >> 1;
      v10 = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v9) + 56LL);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 280LL))(v10);
      if ( !v11 )
        break;
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 56) + 280LL))(*(_QWORD *)(v8 + 56));
      if ( v12 )
      {
        v13 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 240LL);
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 240LL))(v12);
        if ( v13(v11) >= v14 )
          break;
      }
      *(_QWORD *)(*a1 + 8 * v6) = *(_QWORD *)(*a1 + 8 * v9);
      v6 = (v6 - 1) >> 1;
    }
    while ( a3 < v9 );
  }
  result = *a4;
  *(_QWORD *)(*a1 + 8 * v6) = *a4;
  return result;
}
