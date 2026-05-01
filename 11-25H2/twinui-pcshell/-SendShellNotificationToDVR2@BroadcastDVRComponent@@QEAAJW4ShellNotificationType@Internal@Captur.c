/*
 * XREFs of ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180238D58
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x1801952B8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x180200E48 (-GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ?SendNotificationIfGameAppInFocusTask@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x1802ABCD8 (-SendNotificationIfGameAppInFocusTask@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Intern.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180316D40 (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 *     ?SendNewNotificationTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@W4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x18031838C (-SendNewNotificationTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@W4ShellNotificationType@Interna.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800B2D18 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BroadcastDVRComponent::SendShellNotificationToDVR2(
        __int64 a1,
        int a2,
        struct BroadcastDVRActiveAppInfo *a3,
        unsigned int a4,
        bool a5,
        _BYTE *a6)
{
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  switch ( a2 )
  {
    case 1:
      v10 = 3;
      break;
    case 2:
      v10 = 1;
      break;
    case 3:
      v10 = 2;
      break;
    default:
      return BroadcastDVRComponent::SendShellNotificationToDVR(a1, a2, *(HWND *)a3, a4, a5, a6, a3);
  }
  if ( !WindowsIsStringEmpty(*((HSTRING *)a3 + 6)) )
  {
    v11 = *((_QWORD *)a3 + 8);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool))(*(_QWORD *)v11 + 48LL))(
              v11,
              *(_QWORD *)a3,
              v10,
              *((_QWORD *)a3 + 6),
              *((_BYTE *)a3 + 19) == 0);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDEB,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v12);
    }
  }
  return BroadcastDVRComponent::SendShellNotificationToDVR(a1, a2, *(HWND *)a3, a4, a5, a6, a3);
}
