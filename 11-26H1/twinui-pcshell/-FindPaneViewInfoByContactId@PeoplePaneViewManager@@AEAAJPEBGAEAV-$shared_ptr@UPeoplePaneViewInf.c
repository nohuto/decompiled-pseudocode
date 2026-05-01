/*
 * XREFs of ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040ACE0
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x18040A880 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x18040BE50 (-IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18040C520 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x18040D000 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180033BDC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180034018 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindPaneViewInfoByContactId(RTL_SRWLOCK *a1, __int64 a2, _QWORD *a3)
{
  __int64 *Ptr; // rbx
  unsigned int v7; // edi
  __int64 *v8; // rbp
  int v9; // eax
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, a1 + 16);
  Ptr = (__int64 *)a1[17].Ptr;
  v7 = 0;
  v8 = (__int64 *)a1[18].Ptr;
  while ( Ptr != v8 )
  {
    if ( !*(_DWORD *)(*Ptr + 60) )
    {
      LOBYTE(v9) = std::wstring::compare(*Ptr, a2);
      if ( !v9 )
        break;
    }
    Ptr += 2;
  }
  if ( Ptr == a1[18].Ptr )
    v7 = -2147023728;
  else
    std::shared_ptr<FlyoutView>::operator=(a3, Ptr);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return v7;
}
