/*
 * XREFs of ??$?0UGamepadButtonTracker@@P80@EAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z@TimerElapsedHandler@Threading@System@Windows@winrt@@QEAA@PEAUGamepadButtonTracker@@P85@EAAXAEBUThreadPoolTimer@1234@@Z@Z @ 0x18035B3B0
 * Callers:
 *     ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x18035B9FC (-HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v5; // [rsp+20h] [rbp-28h]
  __int128 v6; // [rsp+28h] [rbp-20h]

  *(_QWORD *)&v6 = a2;
  *((_QWORD *)&v6 + 1) = a3;
  v5 = operator new(0x20uLL);
  v5[2] = 1;
  *((_OWORD *)v5 + 1) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = &winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_3804bfd109d91ea783e715dd384c2590_>::`vftable';
  *a1 = v5;
  return a1;
}
