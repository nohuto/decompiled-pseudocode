/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140082510
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1400826A0 (McTemplateK0tt_EtwWriteTransfer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x14014C220 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     PowerOnGdi @ 0x1401598FC (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x14015BA24 (IsPowerOnGdiSupported.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v4; // si
  char v5; // di
  ULONG v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF

  *(_OWORD *)Object = 0LL;
  v4 = a2;
  v5 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( *(_BYTE *)(W32GetUserGdiSessionState() + 1) )
      {
        v6 = 1;
        v7 = *(_QWORD *)(W32GetUserGdiSessionState() + 8);
        Object[0] = (PVOID)v7;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !*(_QWORD *)(W32GetUserSessionState(v7, v9) + 19144) )
      {
        UserSessionState = W32GetUserSessionState(v7, v10);
        v7 = v6++;
        Object[v7] = *(PVOID *)(UserSessionState + 18704);
      }
      if ( !v6 )
        break;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v13, 1);
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v13, v8);
    }
    if ( !v4 || *(_DWORD *)(W32GetUserGdiSessionState() + 28) || (int)IsPowerOnGdiSupported() < 0 )
      break;
    PowerOnGdi(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(v7, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
