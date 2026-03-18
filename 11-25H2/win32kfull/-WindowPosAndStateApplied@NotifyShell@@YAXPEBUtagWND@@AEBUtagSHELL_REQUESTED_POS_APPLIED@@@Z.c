/*
 * XREFs of ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014B5A4
 * Callers:
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C1B9C (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x14014BB94 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14026D0B8 (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C246C (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  struct tagWND *v9; // rbx
  _QWORD v10[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v11[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]

  v10[0] = *(_QWORD *)this;
  v10[1] = 8LL;
  memset_0(v11, 0, 0x40uLL);
  v5 = *(_OWORD *)a2;
  v6 = *((_OWORD *)a2 + 1);
  v13 = *((_DWORD *)a2 + 14);
  v11[0] = v5;
  v7 = *((_OWORD *)a2 + 2);
  v11[1] = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a2 + 6);
  v11[2] = v7;
  v12 = v6;
  InputTraceLogging::Win32k::ShellWindowPosApplied(this, a2);
  v8 = anonymous_namespace_::ResolveWindowManagementTargetWindow(0LL);
  v9 = (struct tagWND *)v8;
  if ( v8 )
  {
    if ( IsThreadHung(*(const struct tagTHREADINFO **)(v8 + 16)) )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
    else
      SendNotifyMessageAlways(v9, 0x342u, 0LL, (__int64)v10, 3u);
  }
}
