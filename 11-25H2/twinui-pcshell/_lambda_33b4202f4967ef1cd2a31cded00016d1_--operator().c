/*
 * XREFs of _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x1802B480C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::Run @ 0x1802C3170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHBITMAP__@@@Z @ 0x180222764 (-reset@-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180225290 (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x18023E158 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___ @ 0x180499BB0 (CreationThreadDispatcher--RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___.c)
 *     _lambda_d8f5fa1139a2b5a955c089535e3f63ea_::__lambda_d8f5fa1139a2b5a955c089535e3f63ea_ @ 0x180499CDC (_lambda_d8f5fa1139a2b5a955c089535e3f63ea_--__lambda_d8f5fa1139a2b5a955c089535e3f63ea_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_33b4202f4967ef1cd2a31cded00016d1_::operator()(__int64 a1)
{
  int IconSync; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  HGDIOBJ v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HGDIOBJ ho; // [rsp+50h] [rbp+8h] BYREF

  ho = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::reset(
    &ho,
    0LL);
  IconSync = CWinRTAppIconLoader::s_LoadIconSync(
               *(struct IWinRTApplicationView **)a1,
               (const struct tagSIZE *)(a1 + 8),
               (const struct tagSIZE *)(a1 + 16),
               (const struct tagSIZE *)(a1 + 24),
               *(_DWORD *)(a1 + 32),
               (HBITMAP *)&ho);
  v3 = IconSync;
  if ( IconSync >= 0 )
  {
    v7 = ho;
    ho = 0LL;
    wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
      &v8,
      (__int64 *)(a1 + 48));
    v5 = CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___(*(_QWORD *)(a1 + 40), &v7);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v5);
    lambda_d8f5fa1139a2b5a955c089535e3f63ea_::__lambda_d8f5fa1139a2b5a955c089535e3f63ea_(&v7);
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&ho);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)IconSync);
    if ( ho )
      DeleteObject(ho);
    return v3;
  }
}
