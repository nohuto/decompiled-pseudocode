/*
 * XREFs of std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806456D0
 * Callers:
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806454D8 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 */

__int64 __fastcall std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 result; // rax

  if ( a3 < a2 )
  {
    do
    {
      v7 = (a2 - 1) >> 1;
      v8 = a1 + 32 * v7;
      if ( *(_QWORD *)(v8 + 16) >= *(_QWORD *)(a4 + 16) )
        break;
      v9 = 32 * a2 + a1;
      if ( v9 != v8 )
      {
        v10 = *(_QWORD *)v8;
        *(_QWORD *)v8 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v9, v10);
      }
      a2 = v7;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v8 + 8);
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(v8 + 16);
      *(_WORD *)(v9 + 24) = *(_WORD *)(v8 + 24);
    }
    while ( a3 < v7 );
  }
  v11 = 32 * a2 + a1;
  if ( v11 != a4 )
  {
    v12 = *(_QWORD *)a4;
    *(_QWORD *)a4 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v11, v12);
  }
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(a4 + 8);
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(a4 + 16);
  result = *(unsigned __int16 *)(a4 + 24);
  *(_WORD *)(v11 + 24) = result;
  return result;
}
