/*
 * XREFs of ?GetInvokeDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@XZ @ 0x1801DE9CC
 * Callers:
 *     ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801DE820 (-StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_st.c)
 * Callees:
 *     ?TryGetCustomDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@PEBGV234@@Z @ 0x1801DEA50 (-TryGetCustomDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@PEB.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 */

_QWORD *__fastcall SnapFlyoutHost::GetInvokeDuration(_QWORD *a1)
{
  _QWORD *result; // rax

  if ( dword_18089E4C0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18089E4C0);
    if ( dword_18089E4C0 == -1 )
    {
      SnapFlyoutHost::TryGetCustomDuration(&qword_18089E4C8, L"SFInvokeDelay", 600LL);
      Init_thread_footer(&dword_18089E4C0);
    }
  }
  result = a1;
  *a1 = qword_18089E4C8;
  return result;
}
