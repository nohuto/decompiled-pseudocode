/*
 * XREFs of ?GetInvokeDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@XZ @ 0x18007DC8C
 * Callers:
 *     ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18007DAD8 (-StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_st.c)
 * Callees:
 *     ?TryGetCustomDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@PEBGV234@@Z @ 0x18007DD10 (-TryGetCustomDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@PEB.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 */

_QWORD *__fastcall SnapFlyoutHost::GetInvokeDuration(_QWORD *a1)
{
  _QWORD *result; // rax

  if ( dword_1808DEC10 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808DEC10);
    if ( dword_1808DEC10 == -1 )
    {
      SnapFlyoutHost::TryGetCustomDuration(&qword_1808DEC18, L"SFInvokeDelay", 600LL);
      Init_thread_footer(&dword_1808DEC10);
    }
  }
  result = a1;
  *a1 = qword_1808DEC18;
  return result;
}
