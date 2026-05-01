/*
 * XREFs of ?IsGameBarShowStartupPanelEnabled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C77A0
 * Callers:
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800C708C (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 * Callees:
 *     <none>
 */

bool __fastcall BroadcastDVRComponent::IsGameBarShowStartupPanelEnabled(BroadcastDVRComponent *this)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF

  v3 = HIDWORD(this);
  v2 = 1;
  v4 = 4;
  RegGetValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"ShowStartupPanel", 0x10u, 0LL, &v2, &v4);
  return v2 != 0;
}
