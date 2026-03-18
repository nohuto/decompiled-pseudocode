/*
 * XREFs of RIMUnInitialize @ 0x1401D6C30
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x14014C58C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401D62EC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 */

__int64 __fastcall RIMUnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2) + 168) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    dumpLeaks((struct _LIST_ENTRY *)(UserSessionState + 120), "RIMObj leaks");
    v7 = W32GetUserSessionState(v6, v5);
    dumpRimDevLeaksAndCleanup((struct _LIST_ENTRY *)(v7 + 136), v8);
    v11 = W32GetUserSessionState(v10, v9);
    dumpLeaks((struct _LIST_ENTRY *)(v11 + 152), "RIMInputObserver leaks");
    v14 = W32GetUserSessionState(v13, v12);
    if ( *(_QWORD *)(v14 + 192) != v14 + 192 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
    v17 = W32GetUserSessionState(v16, v15);
    if ( *(_QWORD *)(v17 + 208) != v17 + 208 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
    v20 = W32GetUserSessionState(v19, v18);
    if ( *(_QWORD *)(v20 + 224) != v20 + 224 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  }
  return 0LL;
}
