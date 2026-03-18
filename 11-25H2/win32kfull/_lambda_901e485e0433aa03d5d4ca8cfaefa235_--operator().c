/*
 * XREFs of _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x140277658
 * Callers:
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::_lambda_invoker_cdecl_ @ 0x140277440 (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x140023FA0 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C1AD8 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 */

bool __fastcall lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator()(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  const struct tagWND *ShellSpecialWindow; // rbx
  __int128 v11; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) == *(_QWORD *)(a2[2] + 472LL) )
  {
    v5 = *(_DWORD *)(a2[5] + 236LL);
    if ( v5 != 2 && v5 != 16 )
    {
      if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        ShellSpecialWindow = (const struct tagWND *)ShellWindowManagement::GetShellSpecialWindow(
                                                      *(_QWORD *)(UserSessionState + 19144),
                                                      0LL);
      }
      else
      {
        ShellSpecialWindow = *(const struct tagWND **)(a2[3] + 296LL);
      }
      if ( IsWindowActivateable(ShellSpecialWindow) )
      {
        *(_QWORD *)&v11 = ShellSpecialWindow;
        *((_QWORD *)&v11 + 1) = 5LL;
        *a3 = v11;
      }
    }
  }
  return *(_QWORD *)a3 != 0LL;
}
