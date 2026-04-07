/*
 * XREFs of ?UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800C2F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098390 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C413C (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C4668 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateWindowCaptureBorder(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2,
        int a3)
{
  HWND *Element; // rax
  HWND *v7; // rdi
  CProjectionBorderManager *v8; // rcx
  bool v9; // si
  int ProxyWindowHandle; // eax
  CProjectionBorderManager *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  CProjectionBorderManager *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp+8h] BYREF
  HWND v18; // [rsp+38h] [rbp+10h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (HWND *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a2);
  v7 = Element;
  if ( Element )
  {
    v8 = (CProjectionBorderManager *)*((unsigned __int8 *)Element + 32);
    if ( (_DWORD)v8 != (a3 != 0) )
    {
      v9 = a3 != 0;
      *((_BYTE *)Element + 32) = v9;
      ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v8, Element[2], v9);
      v12 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v13 = 723LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)ProxyWindowHandle);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
        return v12;
      }
      v18 = 0LL;
      ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v11, v7[2], &v18);
      v12 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v13 = 726LL;
        goto LABEL_10;
      }
      if ( v18 )
      {
        ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v14, v18, v9);
        v12 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v13 = 729LL;
          goto LABEL_10;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
    return 0LL;
  }
  else
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
    return 2147549183LL;
  }
}
