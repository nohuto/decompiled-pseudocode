/*
 * XREFs of ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x14018DD60
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x14008BCFC (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x14018DDE0 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 */

void __fastcall CCursorClip::TraceCurrentState(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 36272) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    InputTraceLogging::Mouse::SetAppClip(
      (const struct tagRECT *)(*(_QWORD *)(UserSessionState + 36272) + 16LL),
      v7,
      v8,
      v9);
    v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 36272);
    v14 = *(_DWORD *)(v13 + 264);
    v17 = W32GetUserSessionState(v13, v15, v16);
    InputTraceLogging::Mouse::SetShellClip(*(struct tagRECT **)(*(_QWORD *)(v17 + 36272) + 256LL), v14);
  }
}
