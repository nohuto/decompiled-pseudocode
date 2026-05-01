/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF4B8
 * Callers:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801F993C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEAAKXZ @ 0x1805D209C (-Release@-$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEA.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>::Release(v1);
  return result;
}
