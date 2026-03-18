/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x14013E9E8
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x14013E670 (ApplyGatheredKeyboardDeviceCount.c)
 *     SetKeyboardInputRoutingPolicy @ 0x14013E69C (SetKeyboardInputRoutingPolicy.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     GetKeyboardInputRoutingPolicy @ 0x14013E9D0 (GetKeyboardInputRoutingPolicy.c)
 *     NtMITSetKeyboardOverriderState @ 0x1401E15C0 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::GetKeyboardProcessor(int a1, int a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3184);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  else
    return 0LL;
}
