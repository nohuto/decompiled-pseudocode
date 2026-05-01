/*
 * XREFs of ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180402998
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18014A1A0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180402430 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x180403190 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::RemovedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  char *i; // rsi
  PVOID Ptr; // rdi
  int (__fastcall *v6)(PVOID, struct IApplicationView **); // rbx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  struct IApplicationView *v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v11, this + 16);
  for ( i = (char *)this[17].Ptr; i != this[18].Ptr && *(struct IApplicationView **)(*(_QWORD *)i + 32LL) != a2; i += 16 )
    ;
  if ( i != this[18].Ptr )
  {
    v10 = 0LL;
    Ptr = this[43].Ptr;
    v6 = *(int (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)Ptr + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    if ( v6(Ptr, &v10) >= 0 && v10 == a2 )
    {
      v7 = *(_QWORD **)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 24LL) > 7uLL )
        v7 = (_QWORD *)*v7;
      PeoplePaneViewManager::NotifyListeners((__int64)this, 3u, (__int64)v7, *(_DWORD *)(*(_QWORD *)i + 40LL));
    }
    v8 = *(_QWORD **)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 24LL) > 7uLL )
      v8 = (_QWORD *)*v8;
    PeoplePaneViewManager::NotifyListeners((__int64)this, 1u, (__int64)v8, *(_DWORD *)(*(_QWORD *)i + 40LL));
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v12, i);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
  return 0LL;
}
