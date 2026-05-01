/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800B3728
 * Callers:
 *     _lambda_4daa1ff280fabc17c4efadccbed1b5cc_::operator() @ 0x1803AEC30 (_lambda_4daa1ff280fabc17c4efadccbed1b5cc_--operator().c)
 *     _lambda_7c31732deb1fbe728880e2f5434a1835_::operator() @ 0x1803AF0EC (_lambda_7c31732deb1fbe728880e2f5434a1835_--operator().c)
 *     _lambda_8af570e54697b9501e4d0fa797527737_::operator() @ 0x1803AF28C (_lambda_8af570e54697b9501e4d0fa797527737_--operator().c)
 *     _lambda_872651ef2fbed137a92f03ff9b7f61da_::operator() @ 0x180439CB0 (_lambda_872651ef2fbed137a92f03ff9b7f61da_--operator().c)
 *     _lambda_9a3222de221babd8ed80f71b88aa5d08_::operator() @ 0x180439FC4 (_lambda_9a3222de221babd8ed80f71b88aa5d08_--operator().c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::operator() @ 0x180445554 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--operator().c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::operator() @ 0x180445AE0 (_lambda_79917a46c0d9777cd1553539ded46aa9_--operator().c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1806A7AF0 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800B3780 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
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
