/*
 * XREFs of ??1operation_guard@wil@@QEAA@XZ @ 0x1801A78A4
 * Callers:
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A7830 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@Compos.c)
 * Callees:
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1801A787C (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802C5BBC (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x180409148 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_ope.c)
 */

void __fastcall wil::operation_guard::~operation_guard(wil::operation_guard *this)
{
  wil::operation_guard *v2; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this + 1);
  if ( *((_BYTE *)this + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
    {
      *(_DWORD *)this = 1;
      WakeByAddressAll(this);
    }
    v2 = 0LL;
  }
  else
  {
    v2 = this;
    _reset___unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAAXPEAVoperation_guard_3__Z(
      &v2,
      0LL);
    wil::operation_guard::close_and_wait(this);
  }
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(&v2);
}
