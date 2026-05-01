/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopNotificationsDerived@@AEAKAEAPEAUIVirtualDesktopLock@@@Z @ 0x18020B038
 * Callers:
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A00CC (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@WRL@Microsoft@@QEAA@XZ @ 0x18020B0F8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$VirtualDesktopNotificationForwarder.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopNotificationsDerived,CVirtualDesktopNotificationsDerived,unsigned long &,IVirtualDesktopLock * &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rdx

  *a1 = 0LL;
  v6 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>(v6);
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable';
  v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable'{for `IVirtualDesktopNotification'};
  v7[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v9 = *a3;
  *((_DWORD *)v7 + 26) = *a2;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v7 + 7, v9);
  (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  *a1 = v7;
  (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return 0LL;
}
