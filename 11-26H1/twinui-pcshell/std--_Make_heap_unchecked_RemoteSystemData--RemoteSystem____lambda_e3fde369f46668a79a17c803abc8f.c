/*
 * XREFs of std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18064520C
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457A4 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806454D8 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 */

void __fastcall std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // r14
  int v8; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]
  __int16 v12; // [rsp+48h] [rbp-10h]

  v5 = (a2 - a1) >> 5;
  v6 = (a2 - a1) >> 6;
  if ( v6 > 0 )
  {
    v7 = (__int64 *)(a1 + 32 * v6 + 16);
    do
    {
      v7 -= 4;
      LOBYTE(v8) = a3;
      v9 = (volatile signed __int32 *)*(v7 - 2);
      --v6;
      *(v7 - 2) = 0LL;
      v10 = *((_DWORD *)v7 - 2);
      v11 = *v7;
      v12 = *((_WORD *)v7 + 4);
      std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        a1,
        v6,
        v5,
        &v9,
        v8);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    }
    while ( v6 > 0 );
  }
}
