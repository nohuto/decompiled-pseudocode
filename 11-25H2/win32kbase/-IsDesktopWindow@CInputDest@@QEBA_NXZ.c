/*
 * XREFs of ?IsDesktopWindow@CInputDest@@QEBA_NXZ @ 0x1400B8920
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401928F0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CInputDest::IsDesktopWindow(CInputDest *this)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagWND *UserWindow; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = 0;
  UserWindow = CInputDest::GetUserWindow(this);
  if ( UserWindow && *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19144) )
    return UserWindow == *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144) + 8LL)
                                           + 24LL);
  return v1;
}
