/*
 * XREFs of ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804B47D0
 * Callers:
 *     ?SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804B40B0 (-SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x1804B4100 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x1804B4190 (-SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x1804B42F0 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 *     ?SetWindowFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804B43A0 (-SetWindowFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804B43F0 (-SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1804B4968 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1804BDD20 (-GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::_ApplyFilterToAllItems(SwitchItemFilteredCollection *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int i; // r14d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, struct IObservableItem **); // rbx
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v15; // [rsp+50h] [rbp+20h] BYREF
  struct IObservableItem *v16; // [rsp+58h] [rbp+28h] BYREF

  v2 = *((_DWORD *)this + 6);
  while ( (--v2 & 0x80000000) == 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    v3 = ObservableObjectArray::GetAt(this, v2, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, (void **)&v16);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 364LL;
      goto LABEL_8;
    }
    v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v16, 1);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 365LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v3);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      return v4;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  }
  v15 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v16 = 0LL;
      v10 = *((_QWORD *)this + 23);
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v10 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      v12 = v11(v10, i, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v16);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 376LL;
        goto LABEL_19;
      }
      v12 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v16, 1);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 377LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        return v8;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
