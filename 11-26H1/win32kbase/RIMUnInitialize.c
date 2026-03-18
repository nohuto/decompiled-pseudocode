/*
 * XREFs of RIMUnInitialize @ 0x1401C3BE0
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401893FC (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401FDC70 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 */

__int64 __fastcall RIMUnInitialize(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  char *v11; // rdx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax

  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 168) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    dumpLeaks((struct _LIST_ENTRY *)(UserSessionState + 120), "RIMObj leaks");
    v10 = W32GetUserSessionState(v8, v7, v9);
    dumpRimDevLeaksAndCleanup((struct _LIST_ENTRY *)(v10 + 136), v11);
    v15 = W32GetUserSessionState(v13, v12, v14);
    dumpLeaks((struct _LIST_ENTRY *)(v15 + 152), "RIMInputObserver leaks");
    v19 = W32GetUserSessionState(v17, v16, v18);
    if ( *(_QWORD *)(v19 + 192) != v19 + 192 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 210);
    v23 = W32GetUserSessionState(v21, v20, v22);
    if ( *(_QWORD *)(v23 + 208) != v23 + 208 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 211);
    v27 = W32GetUserSessionState(v25, v24, v26);
    if ( *(_QWORD *)(v27 + 224) != v27 + 224 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 212);
  }
  return 0LL;
}
