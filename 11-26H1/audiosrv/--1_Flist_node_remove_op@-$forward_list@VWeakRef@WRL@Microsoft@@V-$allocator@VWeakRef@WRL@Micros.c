/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18007BC44
 * Callers:
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_a405cf70824d0724669728a8122b89b2___ @ 0x1800BEAE4 (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--remove_if__.c)
 *     ?remove@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800CC89C (-remove@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<Microsoft::WRL::WeakRef>::_Flist_node_remove_op::~_Flist_node_remove_op(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
