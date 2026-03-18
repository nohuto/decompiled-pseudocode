/*
 * XREFs of ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18013D780
 * Callers:
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18013D67C (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ??1?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18013D750 (--1-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 * Callees:
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18028E6D8 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(__int64 a1)
{
  __int64 result; // rax

  while ( *(_QWORD *)(a1 + 32) )
    result = std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
  if ( *(_QWORD *)(a1 + 8) )
    return std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Reset_map(a1);
  return result;
}
