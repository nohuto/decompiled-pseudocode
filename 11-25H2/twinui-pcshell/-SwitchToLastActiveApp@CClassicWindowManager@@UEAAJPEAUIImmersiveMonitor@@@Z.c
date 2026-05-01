/*
 * XREFs of ?SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802F21C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z @ 0x1802BAE68 (-SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClassicWindowManager::SwitchToLastActiveApp(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  HWND v6; // rdx
  HWND hWnd; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  hWnd = 0LL;
  v4 = (*(__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, _QWORD, HWND *))(*((_QWORD *)this - 1) + 104LL))(
         (char *)this - 8,
         a2,
         0LL,
         &hWnd);
  v5 = *((_QWORD *)this + 15);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( IsIconic(hWnd) || v5 == 1 )
      return (unsigned int)-2147019873;
    else
      CApplicationManagerUtility::SwitchToThisWindow((CApplicationManagerUtility *)hWnd, v6);
  }
  return (unsigned int)v4;
}
