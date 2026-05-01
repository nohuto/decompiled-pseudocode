/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B20E4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B1A98 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x1804ABD60 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1804ABD60.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804B2528 (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::RuntimeClassInitialize(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktopItemFactory *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(struct IVirtualDesktopManagerInternal *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int i; // esi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, struct IVirtualDesktop **); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v21; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktop *v22; // [rsp+68h] [rbp+28h] BYREF

  if ( *((struct IVirtualDesktopItemFactory **)this + 20) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktopItemFactory *))(*(_QWORD *)a2 + 8LL))(a2);
    v22 = (struct IVirtualDesktop *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 21, (__int64)a3);
  v8 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register(
         (_QWORD *)this + 22,
         (__int64)a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v19[0] = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal *, __int64 *))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
    v11 = v10(a3, v19);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v21 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19[0] + 24LL))(v19[0], &v21);
      v9 = v11;
      if ( v11 >= 0 )
      {
        for ( i = 0; i < v21; ++i )
        {
          v22 = 0LL;
          v14 = v19[0];
          v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v19[0] + 32LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
          v16 = v15(v14, i, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v22);
          v9 = v16;
          if ( v16 < 0 )
          {
            v17 = 70LL;
            goto LABEL_19;
          }
          v16 = VirtualDesktopItemCollection::_AddDesktopItem(this, v22, i, 1);
          v9 = v16;
          if ( v16 < 0 )
          {
            v17 = 71LL;
LABEL_19:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
              (const char *)(unsigned int)v16);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
            goto LABEL_21;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        }
        v9 = 0;
        goto LABEL_21;
      }
      v12 = 66LL;
    }
    else
    {
      v12 = 63LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v11);
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
