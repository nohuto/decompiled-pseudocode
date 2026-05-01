/*
 * XREFs of std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180644FE8
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457A4 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int16 v8; // r13
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 i; // r14
  __int64 v14; // rdx
  volatile signed __int32 *v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+30h] [rbp-38h]
  __int16 v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+70h] [rbp+8h]

  if ( a1 != a2 )
  {
    v4 = a1 + 32;
    while ( v4 != a2 )
    {
      v5 = *(volatile signed __int32 **)v4;
      v6 = v4;
      *(_QWORD *)v4 = 0LL;
      v7 = *(_QWORD *)(v4 + 16);
      v8 = *(_WORD *)(v4 + 24);
      v9 = *(_DWORD *)(v4 + 8);
      v20 = (__int64)v5;
      v16 = v5;
      v17 = v9;
      v18 = v7;
      v19 = v8;
      if ( v7 >= *(_QWORD *)(a1 + 16) )
      {
        for ( i = v4; ; v6 = i )
        {
          i -= 32LL;
          if ( v7 >= *(_QWORD *)(i + 16) )
            break;
          if ( v6 != i )
          {
            v14 = *(_QWORD *)i;
            *(_QWORD *)i = 0LL;
            winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v6, v14);
          }
          *(_DWORD *)(v6 + 8) = *(_DWORD *)(i + 8);
          *(_QWORD *)(v6 + 16) = *(_QWORD *)(i + 16);
          *(_WORD *)(v6 + 24) = *(_WORD *)(i + 24);
        }
        if ( (volatile signed __int32 **)v6 != &v16 )
        {
          v16 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v6, v20);
        }
        *(_DWORD *)(v6 + 8) = v9;
        v4 += 32LL;
        *(_QWORD *)(v6 + 16) = v7;
        *(_WORD *)(v6 + 24) = v8;
      }
      else
      {
        v10 = v4 + 32;
        v11 = v4 + 32;
        if ( a1 != v4 )
        {
          do
          {
            v4 -= 32LL;
            v11 -= 32LL;
            if ( v11 != v4 )
            {
              v12 = *(_QWORD *)v4;
              *(_QWORD *)v4 = 0LL;
              winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v11, v12);
            }
            *(_DWORD *)(v11 + 8) = *(_DWORD *)(v4 + 8);
            *(_QWORD *)(v11 + 16) = *(_QWORD *)(v4 + 16);
            *(_WORD *)(v11 + 24) = *(_WORD *)(v4 + 24);
          }
          while ( a1 != v4 );
          v5 = (volatile signed __int32 *)v20;
        }
        if ( (volatile signed __int32 **)a1 != &v16 )
        {
          v16 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)a1, (__int64)v5);
        }
        *(_DWORD *)(a1 + 8) = v9;
        v4 = v10;
        *(_QWORD *)(a1 + 16) = v7;
        *(_WORD *)(a1 + 24) = v8;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    }
  }
  return a2;
}
