/*
 * XREFs of ?GetItemWithFlags@CAppLayout@@UEAAJIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C6750
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItemWithFlags(RTL_SRWLOCK *a1, int a2, int a3, __int64 a4, RTL_SRWLOCK *a5)
{
  RTL_SRWLOCK *v9; // r14
  unsigned int v10; // ebp
  PVOID Ptr; // r15
  unsigned __int64 i; // rbx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64, RTL_SRWLOCK *); // rcx

  v9 = a5;
  a5->Ptr = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&a5, a1 + 2);
  v10 = -2147024809;
  Ptr = a1[9].Ptr;
  for ( i = 0LL; i < (unsigned __int64)Ptr; ++i )
  {
    v13 = *((_QWORD *)a1[8].Ptr + i);
    if ( (a3 & (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13)) == a3 )
    {
      if ( !a2 )
      {
        _mm_lfence();
        v14 = (__int64 (__fastcall ***)(_QWORD, __int64, RTL_SRWLOCK *))*((_QWORD *)a1[8].Ptr + i);
        v10 = (**v14)(v14, a4, v9);
        break;
      }
      --a2;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&a5);
  return v10;
}
