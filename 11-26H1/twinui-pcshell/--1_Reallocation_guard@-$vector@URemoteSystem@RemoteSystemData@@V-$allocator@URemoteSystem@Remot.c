/*
 * XREFs of ??1_Reallocation_guard@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAA@XZ @ 0x18064A3B4
 * Callers:
 *     ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644B14 (--$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@-$vector@URemoteSystem@RemoteSystemDa.c)
 *     _std::vector_RemoteSystemData::RemoteSystem_std::allocator_RemoteSystemData::RemoteSystem___::_Emplace_reallocate_RemoteSystemData::RemoteSystem_&__::_1_::dtor$0 @ 0x180703A83 (_std--vector_RemoteSystemData--RemoteSystem_std--allocator_RemoteSystemData--RemoteSystem___--_E.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806447B8 (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 */

void __fastcall std::vector<RemoteSystemData::RemoteSystem>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(
      *(volatile signed __int32 ***)(a1 + 24),
      *(volatile signed __int32 ***)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(32LL * *(_QWORD *)(a1 + 16)));
  }
}
