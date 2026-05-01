/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x180219B90
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1803EAA38 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x18028520C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPE.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(a3, a3);
  return a3;
}
