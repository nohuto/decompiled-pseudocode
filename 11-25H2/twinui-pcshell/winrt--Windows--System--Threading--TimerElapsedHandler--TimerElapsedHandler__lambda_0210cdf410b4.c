/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___ @ 0x1804DFEBC
 * Callers:
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50 (-HandleViewFallback@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  _DWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[2] = 1;
  v4 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v6 + 2) = v4;
  *((_QWORD *)v6 + 3) = a2[1];
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_180726768;
  *a1 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  return a1;
}
