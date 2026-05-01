/*
 * XREFs of ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806447B8
 * Callers:
 *     ??$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAPEAURemoteSystem@RemoteSystemData@@QEAU12@0PEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806458A8 (--$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSyste.c)
 *     ??1?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAA@XZ @ 0x18064A190 (--1-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@.c)
 *     ??1_Reallocation_guard@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAA@XZ @ 0x18064A3B4 (--1_Reallocation_guard@-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@Remot.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?_Change_array@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAXQEAURemoteSystem@RemoteSystemData@@_K1@Z @ 0x180652B14 (-_Change_array@-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSystemD.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      winrt::handle_type<winrt::impl::hstring_traits>::close(v3);
      v3 += 4;
    }
    while ( v3 != a2 );
  }
}
