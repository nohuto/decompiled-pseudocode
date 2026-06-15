/*
 * XREFs of ?AddTail@?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBV?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180122E38
 * Callers:
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x180122FF8 (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBV?$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@PEAV312@1@Z @ 0x180123ABC (-NewNode@-$CAtlList@V-$com_ptr_t@UIPart@@Uerr_returncode_policy@wil@@@wil@@V-$CElementTraits@V-$.c)
 */

__int64 __fastcall ATL::CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>::AddTail(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<wil::com_ptr_t<IPart,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IPart,wil::err_returncode_policy>>>::NewNode(
             a1,
             a2,
             a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
