/*
 * XREFs of ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14025D948
 * Callers:
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14027952C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

bool __fastcall NotifyShell::ShellHotKey(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // bl
  __int64 v8; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // rdi
  _QWORD v12[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-78h] BYREF
  int v14; // [rsp+50h] [rbp-68h]
  int v15; // [rsp+54h] [rbp-64h]

  v4 = 0;
  if ( a1 )
    v12[0] = *a1;
  else
    v12[0] = 0LL;
  v12[1] = 13LL;
  memset_0(v13, 0, 0x40uLL);
  v13[0] = a3;
  v15 = 0;
  v13[1] = a2;
  v14 = a4;
  v8 = anonymous_namespace_::ResolveWindowManagementTargetWindow(0LL);
  v10 = (struct tagWND *)v8;
  if ( v8 )
  {
    if ( IsThreadHung(*(const struct tagTHREADINFO **)(v8 + 16), v9) )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
    else
      return SendNotifyMessageAlways(v10, 0x342u, 0LL, (__int64)v12, 3u);
  }
  return v4;
}
