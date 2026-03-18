/*
 * XREFs of ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0
 * Callers:
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402DB4A4 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140293D34 (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall NotifyShell::WindowPosAndStateApplied(
        NotifyShell *this,
        const struct tagWND *a2,
        const struct tagSHELL_REQUESTED_POS_APPLIED *a3)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]

  v11[0] = *(_QWORD *)this;
  v11[1] = 8LL;
  memset_0(v12, 0, 0x40uLL);
  v5 = *(_OWORD *)a2;
  v6 = *((_OWORD *)a2 + 1);
  v14 = *((_DWORD *)a2 + 14);
  v12[0] = v5;
  v7 = *((_OWORD *)a2 + 2);
  v12[1] = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a2 + 6);
  v12[2] = v7;
  v13 = v6;
  InputTraceLogging::Win32k::ShellWindowPosApplied(this, a2);
  v8 = anonymous_namespace_::ResolveWindowManagementTargetWindow(0LL);
  v10 = (struct tagWND *)v8;
  if ( v8 )
  {
    if ( IsThreadHung(*(const struct tagTHREADINFO **)(v8 + 16), v9) )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
    else
      SendNotifyMessageAlways(v10, 0x342u, 0LL, (__int64)v11, 3u);
  }
}
