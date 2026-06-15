/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180016810
 * Callers:
 *     _SetNotificationData_::_1_::dtor$0 @ 0x18004C864 (_SetNotificationData_--_1_--dtor$0.c)
 *     _TSSession::TSSession_::_1_::dtor$2 @ 0x18004D885 (_TSSession--TSSession_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>(
        __int64 a1)
{
  return std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear(a1);
}
