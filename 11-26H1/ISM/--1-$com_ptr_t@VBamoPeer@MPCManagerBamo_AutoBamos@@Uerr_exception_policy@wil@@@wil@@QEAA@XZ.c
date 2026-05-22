/*
 * XREFs of ??1?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5DD4
 * Callers:
 *     ??1?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@QEAA@XZ @ 0x1800B5E44 (--1-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x1800B7CB8 (-OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z.c)
 *     ?OnPeerDisconnected@MPCManager@@QEAAXPEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x1800B7DD4 (-OnPeerDisconnected@MPCManager@@QEAAXPEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z.c)
 *     _MPCManager::OnPeerConnected_::_1_::dtor$0 @ 0x1801D8F25 (_MPCManager--OnPeerConnected_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::~com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
