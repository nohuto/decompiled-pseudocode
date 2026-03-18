/*
 * XREFs of ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14014B798
 * Callers:
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x14014BB94 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C246C (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall NotifyShell::ShellHotKey(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v4; // bl
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  __int128 v11; // [rsp+30h] [rbp-49h]
  _QWORD v12[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v13; // [rsp+60h] [rbp-19h] BYREF
  __int64 v14; // [rsp+70h] [rbp-9h]

  v4 = 0;
  if ( a1 )
    v12[0] = *a1;
  else
    v12[0] = 0LL;
  v12[1] = 13LL;
  memset_0(&v13, 0, 0x40uLL);
  *(_QWORD *)&v11 = a3;
  *((_QWORD *)&v11 + 1) = a2;
  v14 = a4;
  v13 = v11;
  v8 = anonymous_namespace_::ResolveWindowManagementTargetWindow(0LL);
  v9 = (struct tagWND *)v8;
  if ( v8 )
  {
    if ( IsThreadHung(*(const struct tagTHREADINFO **)(v8 + 16)) )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
    else
      return SendNotifyMessageAlways(v9, 0x342u, 0LL, (__int64)v12, 3u);
  }
  return v4;
}
