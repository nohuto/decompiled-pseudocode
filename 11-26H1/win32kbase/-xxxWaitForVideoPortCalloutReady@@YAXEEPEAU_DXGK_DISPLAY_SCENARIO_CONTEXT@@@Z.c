/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400EA060
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1400EB028 (McTemplateK0tt_EtwWriteTransfer.c)
 *     PowerOnGdi @ 0x1400EB39C (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x1400EB3F4 (IsPowerOnGdiSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1401891CC (IsxxxSetCsrssThreadDesktopSupported.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v3; // si
  char v5; // di
  ULONG v6; // ebx
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  __int64 UserSessionState; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  *(_OWORD *)Object = 0LL;
  v5 = a1;
  v14 = Microsoft_Windows_Win32kEnableBits & 8;
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
      if ( v5
        && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0
        && !*(_QWORD *)(W32GetUserSessionState(v7, v8, v9) + 19176) )
      {
        UserSessionState = W32GetUserSessionState(v7, v10, v11);
        v7 = v6++;
        Object[v7] = *(PVOID *)(UserSessionState + 18752);
      }
      if ( !v6 )
        break;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v14, 1);
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v14);
    }
    if ( !v3 || *(_DWORD *)(W32GetUserGdiSessionState() + 28) || (int)IsPowerOnGdiSupported() < 0 )
      break;
    PowerOnGdi(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(v7, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
