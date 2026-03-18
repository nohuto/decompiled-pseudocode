/*
 * XREFs of ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180209034
 * Callers:
 *     ?NotifyBatchProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B070 (-NotifyBatchProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 *     ?UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ @ 0x18013B100 (-UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ.c)
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180151698 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 * Callees:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x180209088 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_180209088.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r10
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a3[2];
  v6[0] = *a3;
  v7[0] = v6[0];
  v6[1] = 0LL;
  v7[1] = 0LL;
  v6[2] = v4 + 1;
  v7[2] = v4;
  ((void (__fastcall *)(__int64, __int64, _QWORD *, _QWORD *))std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase)(
    a1,
    a2,
    v7,
    v6);
  return a2;
}
