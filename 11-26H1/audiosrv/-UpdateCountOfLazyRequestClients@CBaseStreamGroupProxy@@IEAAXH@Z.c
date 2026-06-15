/*
 * XREFs of ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x18010022C
 * Callers:
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005BCD4 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C130 (-OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnProcessSubmixLazyRequestStatusChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800FEB20 (-OnProcessSubmixLazyRequestStatusChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(struct _RTL_CRITICAL_SECTION *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  LONG LockCount; // edx
  int v6; // eax
  ULONG_PTR SpinCount; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 3;
  EnterCriticalSection(this + 3);
  v8 = v4;
  LockCount = this[4].LockCount;
  v6 = LockCount + a2;
  this[4].LockCount = LockCount + a2;
  SpinCount = this[2].SpinCount;
  if ( SpinCount && LockCount != v6 && (!LockCount || !v6) )
    (*(void (__fastcall **)(ULONG_PTR, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)SpinCount + 208LL))(SpinCount, this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
}
