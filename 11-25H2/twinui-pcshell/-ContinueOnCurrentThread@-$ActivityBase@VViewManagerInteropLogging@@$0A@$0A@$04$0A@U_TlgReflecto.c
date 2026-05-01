/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D4D10
 * Callers:
 *     _lambda_79f636e8e6582e714a3786e698ab1b4d_::operator() @ 0x1803A5CD8 (_lambda_79f636e8e6582e714a3786e698ab1b4d_--operator().c)
 *     _lambda_acc696b87ca0019872947d555e7575b6_::operator() @ 0x1803A5D90 (_lambda_acc696b87ca0019872947d555e7575b6_--operator().c)
 *     _lambda_eef5741a3b0e50908ea80cafebdfea4b_::operator() @ 0x1803A633C (_lambda_eef5741a3b0e50908ea80cafebdfea4b_--operator().c)
 *     _lambda_872651ef2fbed137a92f03ff9b7f61da_::operator() @ 0x18042DA48 (_lambda_872651ef2fbed137a92f03ff9b7f61da_--operator().c)
 *     _lambda_9a3222de221babd8ed80f71b88aa5d08_::operator() @ 0x18042DD5C (_lambda_9a3222de221babd8ed80f71b88aa5d08_--operator().c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator() @ 0x180438F8C (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--operator().c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::operator() @ 0x180439510 (_lambda_79917a46c0d9777cd1553539ded46aa9_--operator().c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x180680A80 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D4D68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v3; // r8

  v3 = (_DWORD *)*((_QWORD *)a1 + 34);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
