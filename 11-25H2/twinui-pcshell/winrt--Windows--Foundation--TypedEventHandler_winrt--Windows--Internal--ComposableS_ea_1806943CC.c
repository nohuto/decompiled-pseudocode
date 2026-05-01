/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e3e19fb8e3910b5b1b332ab74641bcf6___ @ 0x1806943CC
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806954B4 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::__lambda_e3e19fb8e3910b5b1b332ab74641bcf6_ @ 0x180694E68 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--__lambda_e3e19fb8e3910b5b1b332ab74641bcf6_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e3e19fb8e3910b5b1b332ab74641bcf6___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v9; // [rsp+30h] [rbp+8h]

  v9 = operator new(0x30uLL);
  v9[2] = 1;
  v4 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v9 + 2) = v4;
  v5 = a2[1];
  a2[1] = 0LL;
  *((_QWORD *)v9 + 3) = v5;
  v6 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v9 + 4) = v6;
  v7 = a2[3];
  a2[3] = 0LL;
  *((_QWORD *)v9 + 5) = v7;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v9 = off_1808942E8;
  *a1 = v9;
  lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::__lambda_e3e19fb8e3910b5b1b332ab74641bcf6_(a2);
  return a1;
}
