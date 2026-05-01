/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_c455d037a1b864dd5cc5867b63d5951d___ @ 0x1806BC048
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_c455d037a1b864dd5cc5867b63d5951d___ @ 0x1806BB8E8 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--ComposableS_ea_1806BB8E8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_c455d037a1b864dd5cc5867b63d5951d___(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *result; // rax

  v4 = operator new(0x30uLL);
  v4[2] = 1;
  v5 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v4 + 2) = v5;
  v6 = a2[1];
  a2[1] = 0LL;
  *((_QWORD *)v4 + 3) = v6;
  v7 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v4 + 4) = v7;
  v8 = a2[3];
  a2[3] = 0LL;
  *((_QWORD *)v4 + 5) = v8;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = off_1808D41B8;
  result = a1;
  *a1 = v4;
  return result;
}
