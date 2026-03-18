/*
 * XREFs of CloseWin32InputRelatedObHandles @ 0x14021FF40
 * Callers:
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x140197830 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x1402187F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 */

void __fastcall CloseWin32InputRelatedObHandles(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16400) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16400));
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    CBaseInput::RemoveInjectionDevicesForSessionUninitialize(v8, v7, v9);
}
