/*
 * XREFs of ?RemoveListener@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAJPEAX@Z @ 0x1804A2A84
 * Callers:
 *     ?_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x1804A3A24 (-_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F5B88 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::RemoveListener(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // esi
  unsigned __int64 i; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * i);
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) == a2 )
      break;
  }
  if ( i < *(_QWORD *)(a1 + 32) )
  {
    Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 24)
                                                                                                + 8 * i));
    v8 = *(_QWORD *)(a1 + 32);
    if ( i != v8 - 1 )
      memmove_0(
        (void *)(*(_QWORD *)(a1 + 24) + 8 * i),
        (const void *)(*(_QWORD *)(a1 + 24) + 8 * i + 8),
        8 * (v8 - i) - 8);
    --*(_QWORD *)(a1 + 32);
  }
  else
  {
    v3 = -2147316575;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
      (const char *)0x80028CA1LL);
  }
  return v3;
}
