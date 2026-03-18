/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x140106DC8
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x140106AA0 (ApplyGatheredKeyboardDeviceCount.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x140106ACC (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     GetKeyboardInputRoutingPolicy @ 0x140106DB0 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 *     NtMITSetKeyboardOverriderState @ 0x1401BB500 (NtMITSetKeyboardOverriderState.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140216BA0 (SetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::GetKeyboardProcessor(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3184);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  else
    return 0LL;
}
