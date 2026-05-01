/*
 * XREFs of std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806454D8
 * Callers:
 *     std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18064520C (std--_Make_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 *     std::_Pop_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645614 (std--_Pop_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rsi
  __int64 v8; // r10
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdx

  v4 = a3 - 1;
  v6 = (a3 - 1) >> 1;
  v8 = a2;
  v10 = a2;
  v11 = a2;
  if ( a2 < v6 )
  {
    do
    {
      v12 = 32 * v8;
      v11 = 2 * v11 + 2LL - (*(_QWORD *)((v11 << 6) + a1 + 80) < *(_QWORD *)((v11 << 6) + a1 + 48));
      v13 = v12 + a1;
      v14 = a1 + 32 * v11;
      if ( v12 + a1 != v14 )
      {
        v15 = *(_QWORD *)v14;
        *(_QWORD *)v14 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)(v12 + a1), v15);
      }
      v8 = v11;
      *(_DWORD *)(v13 + 8) = *(_DWORD *)(v14 + 8);
      *(_QWORD *)(v13 + 16) = *(_QWORD *)(v14 + 16);
      *(_WORD *)(v13 + 24) = *(_WORD *)(v14 + 24);
    }
    while ( v11 < v6 );
    v10 = a2;
  }
  if ( v11 == v6 && (a3 & 1) == 0 )
  {
    v16 = 32 * v8;
    v17 = a1 + 32 * a3 - 32;
    v18 = v16 + a1;
    if ( v16 + a1 != v17 )
    {
      v19 = *(_QWORD *)v17;
      *(_QWORD *)v17 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)(v16 + a1), v19);
    }
    v8 = v4;
    *(_DWORD *)(v18 + 8) = *(_DWORD *)(v17 + 8);
    *(_QWORD *)(v18 + 16) = *(_QWORD *)(v17 + 16);
    *(_WORD *)(v18 + 24) = *(_WORD *)(v17 + 24);
  }
  return std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
           a1,
           v8,
           v10,
           a4);
}
