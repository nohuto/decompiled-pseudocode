/*
 * XREFs of ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x1800866A0
 * Callers:
 *     ?UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z @ 0x180226B70 (-UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z.c)
 *     ?Unregister@FullScreenPositioner@@UEAAJK@Z @ 0x1802BA280 (-Unregister@FullScreenPositioner@@UEAAJK@Z.c)
 *     ?Unregister@BroadcastDVRComponent@@UEAAJK@Z @ 0x180314A40 (-Unregister@BroadcastDVRComponent@@UEAAJK@Z.c)
 *     ?Unregister@CFullScreenManager@@UEAAJK@Z @ 0x180324E70 (-Unregister@CFullScreenManager@@UEAAJK@Z.c)
 *     ?UnregisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x1804497C0 (-UnregisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJK@Z.c)
 *     ?UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x180449800 (-UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z.c)
 *     ?Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z @ 0x180498AB0 (-Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z.c)
 *     ?UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z @ 0x1804BDF40 (-UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z.c)
 *     ?UnregisterListener@ObservableObjectArray@@UEAAJK@Z @ 0x1804BDF80 (-UnregisterListener@ObservableObjectArray@@UEAAJK@Z.c)
 *     ?UnregisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJK@Z @ 0x1804E7BD0 (-UnregisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJK@Z.c)
 *     ?UnregisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJK@Z @ 0x1805A3520 (-UnregisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJK@Z @ 0x1805BD7B0 (-UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18020A660 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGITRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  unsigned int v4; // edi
  PVOID Ptr; // r15
  unsigned __int64 i; // rbx
  RTL_SRWLOCK *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = -2147024809;
  _Platform_AcquireSRWLockExclusive(this + 1);
  Ptr = this[3].Ptr;
  for ( i = 0LL; i < (unsigned __int64)Ptr; ++i )
  {
    v7 = this + 2;
    v8 = *((_QWORD *)this[2].Ptr + i);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8) == a2 )
    {
      v9 = *((_QWORD *)v7->Ptr + i);
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)v7->Ptr + i));
        v12 = 0LL;
        v11 = v9;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::RemoveAt(
        &this[2],
        i);
      v4 = 0;
      break;
    }
  }
  ReleaseSRWLockExclusive_0(this + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v4;
}
