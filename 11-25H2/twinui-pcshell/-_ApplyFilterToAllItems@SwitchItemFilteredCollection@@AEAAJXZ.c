/*
 * XREFs of ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804A3460
 * Callers:
 *     ?SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804A2D60 (-SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x1804A2DB0 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x1804A2E30 (-SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x1804A2F80 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 *     ?SetWindowFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804A3050 (-SetWindowFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804A30A0 (-SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804A35E4 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1804AC1C0 (-GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::_ApplyFilterToAllItems(SwitchItemFilteredCollection *this)
{
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // eax
  unsigned int i; // r14d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, struct IObservableItem **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v12; // [rsp+50h] [rbp+20h] BYREF
  struct IObservableItem *v13; // [rsp+58h] [rbp+28h] BYREF

  v2 = *((_DWORD *)this + 6);
  while ( (--v2 & 0x80000000) == 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    v3 = ObservableObjectArray::GetAt(this, v2, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, (void **)&v13);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 364LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      return v4;
    }
    v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v13, 1);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 365LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         &v12);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v7);
    return v4;
  }
  for ( i = 0; i < v12; ++i )
  {
    v13 = 0LL;
    v9 = *((_QWORD *)this + 23);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v9 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    v3 = v10(v9, i, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v13);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 376LL;
      goto LABEL_8;
    }
    v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v13, 1);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 377LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  return 0LL;
}
