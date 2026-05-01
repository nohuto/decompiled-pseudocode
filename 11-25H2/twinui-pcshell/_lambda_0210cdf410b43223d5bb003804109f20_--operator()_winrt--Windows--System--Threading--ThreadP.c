/*
 * XREFs of _lambda_0210cdf410b43223d5bb003804109f20_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_ @ 0x1804E00B0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___::Invoke @ 0x1804E3950 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_0210cdf410b.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_ @ 0x1804D8218 (_lambda_f45959a3646b89147a97246aec46a198_--__lambda_f45959a3646b89147a97246aec46a198_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_788df95ea5d3c6f85875e9a43e1b571f___ @ 0x1804E0548 (Windows--Internal--ComTaskPool--QueueTask__lambda_788df95ea5d3c6f85875e9a43e1b571f___.c)
 */

void __fastcall lambda_0210cdf410b43223d5bb003804109f20_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  volatile int *v4; // rdx
  __int64 v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  v12 = a2;
  v2 = a1[1];
  v3 = *(_QWORD *)(v2 + 696);
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v9,
    a1);
  v9[1] = v2;
  v12 = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v4);
  v5 = v9[0];
  v9[0] = 0LL;
  v10[0] = v5;
  v10[1] = v2;
  v11 = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v11, v6);
  Windows::Internal::ComTaskPool::QueueTask__lambda_788df95ea5d3c6f85875e9a43e1b571f___(v7, 0LL, v8, v10);
  lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
}
