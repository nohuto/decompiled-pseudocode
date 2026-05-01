/*
 * XREFs of ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C7998 (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x1806C7AE4 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsCurated(RTL_SRWLOCK *this, struct IAppLayoutItem *a2)
{
  CAppLayout *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v8, this + 2);
  v4 = (CAppLayout *)&this[-5];
  if ( a2 )
    v5 = CAppLayout::_AreAdjacentItemsCurated(v4, a2);
  else
    v5 = CAppLayout::_AreAllItemsCurated(v4);
  v6 = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
  return v6;
}
