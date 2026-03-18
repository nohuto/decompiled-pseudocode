/*
 * XREFs of NlsKbdSendIMENotification @ 0x1401B0DF0
 * Callers:
 *     NlsKbdSendIMEProc @ 0x14021D638 (NlsKbdSendIMEProc.c)
 * Callees:
 *     IoControl @ 0x1401C4530 (IoControl.c)
 */

char __fastcall NlsKbdSendIMENotification(int a1, int a2, int a3)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 14064);
  if ( v5 && (*(_BYTE *)(v5 + 2) & 1) != 0 )
  {
    *(_WORD *)(W32GetUserSessionState(v7, v6, v8) + 14312) = 0;
    *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 14316) = a1;
    *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 14320) = a2;
    IoControl(4LL);
  }
  return 1;
}
