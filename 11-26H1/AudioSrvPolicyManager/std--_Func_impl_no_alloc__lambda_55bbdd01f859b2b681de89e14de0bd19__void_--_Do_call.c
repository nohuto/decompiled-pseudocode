/*
 * XREFs of std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x18002CC30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002A350 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerr.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call(__int64 a1)
{
  __int64 **v1; // rdx

  v1 = *(__int64 ***)(a1 + 8);
  if ( (unsigned __int64)v1[3] > 7 )
    v1 = (__int64 **)*v1;
  return CApplicationManager::OnApplicationStateChanged(
           (CApplication *)a1,
           v1,
           *(_QWORD *)(a1 + 24),
           *(_DWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 36));
}
