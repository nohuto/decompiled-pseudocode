/*
 * XREFs of ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18008C15C
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180214010 (-RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBIL.c)
 *     ?RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerNotification@@PEAK@Z @ 0x18021DC50 (-RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerN.c)
 *     ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x1802293D0 (-Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z.c)
 *     ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x1802301E0 (-Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@P.c)
 *     ?RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@Z @ 0x18023C9C0 (-RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeE.c)
 *     ?Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z @ 0x180317CC0 (-Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z.c)
 *     ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x1803270B0 (-Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z.c)
 *     ?RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@Z @ 0x18043CEE0 (-RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroup.c)
 *     ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1804AC360 (-RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@.c)
 *     ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1804AC3A0 (-RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 *     ?RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z @ 0x18057D4E0 (-RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1805993C0 (-RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGITCookieObject@@QEAA@XZ @ 0x18008C514 (--0CGITCookieObject@@QEAA@XZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C594 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 *     CoCreateInstance_0 @ 0x1802D3650 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGITRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK v7; // rbx
  RTL_SRWLOCK v8; // rdi
  CGITCookieObject *v9; // rax
  CGITCookieObject *v10; // rax
  CGITCookieObject *v11; // rbx
  int v12; // eax
  HRESULT v13; // edi
  LPVOID *v15; // rdx
  LPVOID v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  LPVOID ppv; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK v19; // [rsp+80h] [rbp+50h] BYREF
  __int64 v20; // [rsp+88h] [rbp+58h] BYREF

  *a3 = 0;
  v3 = this + 1;
  _Platform_AcquireSRWLockExclusive(this + 1);
  v7.Ptr = this->Ptr;
  ReleaseSRWLockExclusive_0(v3);
  if ( v7.Ptr )
    goto LABEL_2;
  ppv = 0LL;
  v13 = CoCreateInstance_0(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
  if ( v13 >= 0 )
  {
    _Platform_AcquireSRWLockExclusive(v3);
    if ( !this->Ptr )
    {
      v16 = ppv;
      if ( ppv )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
        v19.Ptr = this->Ptr;
        this->Ptr = v16;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      }
    }
    ReleaseSRWLockExclusive_0(v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  if ( v13 >= 0 )
  {
LABEL_2:
    ppv = 0LL;
    v8.Ptr = this->Ptr;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    ppv = 0LL;
    v9 = (CGITCookieObject *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19.Ptr = v9;
    if ( v9 )
    {
      v10 = CGITCookieObject::CGITCookieObject(v9);
      v19.Ptr = 0LL;
      v11 = v10;
      if ( (PVOID)*((_QWORD *)v10 + 7) != v8.Ptr )
      {
        if ( v8.Ptr )
          (*(void (__fastcall **)(RTL_SRWLOCK))(*(_QWORD *)v8.Ptr + 8LL))(v8);
        v20 = *((_QWORD *)v11 + 7);
        *((RTL_SRWLOCK *)v11 + 7) = v8;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, GUID *, _QWORD *))(**((_QWORD **)v11 + 7) + 24LL))(
              *((_QWORD *)v11 + 7),
              a2,
              &GUID_00000000_0000_0000_c000_000000000046,
              (_QWORD *)v11 + 6);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (int)"shell\\lib\\gitreglist.cpp",
          (const char *)(unsigned int)v12);
        (*(void (__fastcall **)(CGITCookieObject *))(*(_QWORD *)v11 + 16LL))(v11);
        Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v19);
      }
      else
      {
        v13 = (**(__int64 (__fastcall ***)(CGITCookieObject *, GUID *, LPVOID *))v11)(
                v11,
                &GUID_243c720f_5a91_4b39_88bb_c16e6ec1d313,
                &ppv);
        (*(void (__fastcall **)(CGITCookieObject *))(*(_QWORD *)v11 + 16LL))(v11);
        if ( v13 >= 0 )
        {
          _Platform_AcquireSRWLockExclusive(v3);
          v13 = 0;
          if ( this[3].Ptr != this[5].Ptr
            || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(&this[2]),
                v13 >= 0) )
          {
            v15 = (LPVOID *)((char *)this[2].Ptr + 8 * (__int64)this[3].Ptr++);
            if ( v15 )
            {
              *v15 = ppv;
              if ( ppv )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
            }
          }
          ReleaseSRWLockExclusive_0(v3);
          if ( v13 >= 0 )
            *a3 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 32LL))(ppv);
        }
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v19);
      v13 = -2147024882;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v13;
}
