/*
 * XREFs of ??$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUISnapAssistCallback@@@Z @ 0x1800BD9F4
 * Callers:
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1800BD6CC (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800BDC3C (-reset@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$GetWeakReference@UISnapAssistCallback@@@details@wil@@YAJPEAUISnapAssistCallback@@PEAPEAUIWeakReference@@@Z @ 0x1802C5E2C (--$GetWeakReference@UISnapAssistCallback@@@details@wil@@YAJPEAUISnapAssistCallback@@PEAPEAUIWeak.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_weak_copy<ISnapAssistCallback * &>(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdi
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  if ( v3 )
  {
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::reset();
    Weak = wil::details::GetWeakReference<ISnapAssistCallback>(v3, a1);
    if ( Weak < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7B7,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)Weak,
        1);
  }
  return a1;
}
