/*
 * XREFs of std::_Pop_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18061FA60
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18061FBE8 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x1800ABDCC (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18061F938 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 */

void __fastcall std::_Pop_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdx
  volatile signed __int32 *v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int16 v9; // [rsp+48h] [rbp-10h]

  if ( (__int64)((a2 - a1) & 0xFFFFFFFFFFFFFFE0uLL) >= 64 )
  {
    v3 = a2 - 32;
    v4 = *(volatile signed __int32 **)(a2 - 32);
    *(_QWORD *)(a2 - 32) = 0LL;
    v6 = v4;
    v7 = *(_DWORD *)(a2 - 32 + 8);
    v8 = *(_QWORD *)(a2 - 32 + 16);
    v9 = *(_WORD *)(a2 - 32 + 24);
    if ( a2 - 32 != a1 )
    {
      v5 = *(_QWORD *)a1;
      *(_QWORD *)a1 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v3, v5);
    }
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(a1 + 8);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(a1 + 16);
    *(_WORD *)(v3 + 24) = *(_WORD *)(a1 + 24);
    std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
      a1,
      0LL,
      (v3 - a1) >> 5,
      (__int64)&v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  }
}
