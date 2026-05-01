/*
 * XREFs of ??1operation_guard@wil@@QEAA@XZ @ 0x1801AFDC4
 * Callers:
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801AFD50 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@Compos.c)
 * Callees:
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1801AFD9C (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x1803FE878 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_ope.c)
 */

void __fastcall wil::operation_guard::~operation_guard(wil::operation_guard *this)
{
  volatile signed __int32 *v2; // rbx
  PVOID v3; // rcx
  PVOID Address; // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this + 1);
  if ( *((_BYTE *)this + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
    {
      *(_DWORD *)this = 1;
      WakeByAddressAll(this);
    }
    v2 = 0LL;
    Address = 0LL;
  }
  else
  {
    Address = this;
    if ( !this )
      return;
    _reset___unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAAXPEAVoperation_guard_3__Z(
      &Address,
      0LL);
    wil::operation_guard::close_and_wait(this);
    v2 = (volatile signed __int32 *)Address;
  }
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      v3 = Address;
      *(_DWORD *)Address = 1;
      WakeByAddressAll(v3);
    }
  }
}
