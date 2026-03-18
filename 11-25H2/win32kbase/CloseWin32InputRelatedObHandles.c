/*
 * XREFs of CloseWin32InputRelatedObHandles @ 0x14021C31C
 * Callers:
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1401A2640 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x140210AA4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 */

void __fastcall CloseWin32InputRelatedObHandles(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16408) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16408));
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    CBaseInput::RemoveInjectionDevicesForSessionUninitialize(v6, v5);
}
