/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@@Z @ 0x18048339C
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180483E00 (-CurrentVirtualDesktopChanged@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopCreated@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1804847F0 (-VirtualDesktopCreated@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180484920 (-VirtualDesktopDestroyed@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18006AB40 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180224410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ @ 0x180483B18 (--0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualDesktopCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesktopCollectionChangedEventArgs@@@Z @ 0x180483DC0 (-Attach@-$ComPtr@VVirtualDesktopCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesk.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3)
{
  void *v6; // rax
  int CanCastTo; // edi
  VirtualDesktopCollectionChangedEventArgs *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  const struct _GUID *v14; // r9
  _DWORD *v15; // rdx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF
  void *v18; // [rsp+48h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  if ( v6 )
  {
    v8 = VirtualDesktopCollectionChangedEventArgs::VirtualDesktopCollectionChangedEventArgs((VirtualDesktopCollectionChangedEventArgs *)v6);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<VirtualDesktopCollectionChangedEventArgs>::Attach(&v17, v8);
    v18 = 0LL;
    v9 = *a3;
    v10 = v17;
    *(_DWORD *)(v17 + 64) = *a2;
    v11 = *(_QWORD *)(v10 + 72);
    *(_QWORD *)(v10 + 72) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *(_DWORD *)(v10 + 80) = 0;
    *(_DWORD *)(v10 + 84) = 0;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_441fc94f_1600_5938_827e_084d1252525e, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
      goto LABEL_14;
    }
    if ( InlineIsEqualGUID(v13, v14) )
    {
      *a1 = v10;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v10 + 8,
                    v15,
                    a1);
      if ( CanCastTo < 0 )
      {
LABEL_14:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(v10);
        goto LABEL_15;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_14;
  }
  CanCastTo = -2147024882;
LABEL_15:
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
  return (unsigned int)CanCastTo;
}
