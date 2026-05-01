/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x180187070
 * Callers:
 *     _lambda_4637121c97463dde84d1e4eb150ea79f_::operator() @ 0x1803EC064 (_lambda_4637121c97463dde84d1e4eb150ea79f_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D530 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const char *a3)
{
  char *v4; // rcx

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = 0LL;
  v4 = (char *)this + 32;
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = a2;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  *((_QWORD *)v4 + 4) = this;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v4);
  return this;
}
