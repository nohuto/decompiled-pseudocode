/*
 * XREFs of ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180086A68
 * Callers:
 *     ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x180086780 (-Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z.c)
 *     ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1802056B0 (-RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBIL.c)
 *     ?RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerNotification@@PEAK@Z @ 0x18020F960 (-RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerN.c)
 *     ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x180221190 (-Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@P.c)
 *     ?RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@Z @ 0x18022EB00 (-RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeE.c)
 *     ?Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z @ 0x180313E80 (-Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z.c)
 *     ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x180323A00 (-Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z.c)
 *     ?RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@Z @ 0x180449590 (-RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroup.c)
 *     ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1804BDEC0 (-RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@.c)
 *     ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1804BDF00 (-RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 *     ?RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z @ 0x1805A0F90 (-RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1805BD660 (-RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x180086C00 (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     CoCreateInstance_0 @ 0x1802CA570 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGITRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v3; // rsi
  RTL_SRWLOCK v6; // rbx
  HRESULT v7; // edi
  LPVOID *v9; // rdx
  LPVOID v10; // rcx
  LPVOID v11; // rbx
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v13; // [rsp+68h] [rbp+38h] BYREF
  RTL_SRWLOCK v14; // [rsp+70h] [rbp+40h] BYREF

  v13 = a2;
  v3 = this + 1;
  *a3 = 0;
  _Platform_AcquireSRWLockExclusive(this + 1);
  v6.Ptr = this->Ptr;
  ReleaseSRWLockExclusive_0(v3);
  if ( v6.Ptr )
    goto LABEL_2;
  ppv = 0LL;
  v7 = CoCreateInstance_0(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
  if ( v7 >= 0 )
  {
    _Platform_AcquireSRWLockExclusive(v3);
    if ( !this->Ptr )
    {
      v11 = ppv;
      if ( ppv )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
        v14.Ptr = this->Ptr;
        this->Ptr = v11;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      }
    }
    ReleaseSRWLockExclusive_0(v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( v7 >= 0 )
  {
LABEL_2:
    v14.Ptr = this->Ptr;
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
           &ppv,
           &v14,
           &v13);
    if ( v7 >= 0 )
    {
      _Platform_AcquireSRWLockExclusive(v3);
      v7 = 0;
      if ( this[3].Ptr != this[5].Ptr
        || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(&this[2]),
            v7 >= 0) )
      {
        v9 = (LPVOID *)((char *)this[2].Ptr + 8 * (__int64)this[3].Ptr++);
        if ( v9 )
        {
          v10 = ppv;
          *v9 = ppv;
          if ( v10 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      ReleaseSRWLockExclusive_0(v3);
      if ( v7 >= 0 )
        *a3 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 32LL))(ppv);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v7;
}
