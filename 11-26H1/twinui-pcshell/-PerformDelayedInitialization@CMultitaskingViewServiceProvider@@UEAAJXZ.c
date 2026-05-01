/*
 * XREFs of ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x180496850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18021D7CC (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802529AC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::PerformDelayedInitialization(
        CMultitaskingViewServiceProvider *this)
{
  CMultitaskingViewServiceProvider *v1; // rdi
  int started; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CMultitaskingViewServiceProvider *)((char *)this - 24);
  started = CMultitaskingViewServiceProvider::_StartMTVThread((CMultitaskingViewServiceProvider *)((char *)this - 24));
  if ( started < 0 )
  {
    v3 = 181LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = CMultitaskingViewServiceProvider::_CreateHotKeyHandler(v1);
  if ( started < 0 )
  {
    v3 = 184LL;
    goto LABEL_5;
  }
  return (unsigned int)started;
}
