/*
 * XREFs of ?ProcessCrosshairPropertiesChangedNotification@CursorNotificationProcessor@@AEAAJK@Z @ 0x1800F5400
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x18000FD94 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorNotificationProcessor::ProcessCrosshairPropertiesChangedNotification(
        CursorNotificationProcessor *this,
        unsigned int a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                 + 80);
  if ( !v4 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 80LL))(v4, 2LL, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x147,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotificationprocessor.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
