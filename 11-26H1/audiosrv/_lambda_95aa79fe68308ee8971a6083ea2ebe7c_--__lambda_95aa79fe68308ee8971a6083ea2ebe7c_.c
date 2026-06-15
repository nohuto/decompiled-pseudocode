/*
 * XREFs of _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x1800465BC
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180045080 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_95aa79fe68308ee8971a6083ea2ebe7c___ @ 0x180046974 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_IAudioStreamInfo________.c)
 *     _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800C50B4 (_lambda_c5ba6885c59c7d44add3d2e24646e672_--operator().c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800C73F0 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Delete_this @ 0x1800CC360 (std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_De.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_95aa79fe68308ee8971a6083ea2ebe7c____::_1_::dtor$0 @ 0x180164FC9 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_IAudioStreamInfo_______.c)
 *     __lambda_c5ba6885c59c7d44add3d2e24646e672_::operator()_::_1_::dtor$0 @ 0x180167B31 (__lambda_c5ba6885c59c7d44add3d2e24646e672_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
