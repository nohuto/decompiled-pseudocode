/*
 * XREFs of ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C4F90
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2C10 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098390 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800BDC34 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C413C (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C4668 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C473C (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateTabGroupMap(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        struct CapturedWindowRepresentation *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  char *Element; // rax
  CProjectionBorderManager *v7; // rcx
  char *v8; // rdi
  HWND *v9; // rbx
  int v10; // esi
  __int64 v11; // rdx
  CProjectionBorderManager *v13; // rcx
  HWND v14; // rdx
  CProjectionBorderManager *v15; // rcx
  int ProxyWindowHandle; // ebx
  __int64 v17; // rdx
  HWND v18; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v20; // [rsp+40h] [rbp+8h] BYREF

  Element = (char *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a4);
  v8 = Element;
  if ( !Element )
    return 2147549183LL;
  v9 = (HWND *)(Element + 16);
  if ( Element[32] )
  {
    v10 = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, *v9, 0);
    if ( v10 < 0 )
    {
      v11 = 1603LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  v10 = CProjectionBorderManager::_SetScreenCaptureForWindow(v7, *v9, 0);
  if ( v10 < 0 )
  {
    v11 = 1605LL;
    goto LABEL_5;
  }
  v14 = *v9;
  v20 = 0LL;
  ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, v14, &v20);
  if ( ProxyWindowHandle < 0 )
  {
    v17 = 1609LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)ProxyWindowHandle);
    return (unsigned int)ProxyWindowHandle;
  }
  v18 = v20;
  if ( v20 )
  {
    if ( v8[32] )
    {
      v10 = CProjectionBorderManager::_SetProjectionBorderForWindow(v15, v20, 0);
      if ( v10 < 0 )
      {
        v11 = 1615LL;
        goto LABEL_5;
      }
    }
    ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v15, v18, 0);
    if ( ProxyWindowHandle < 0 )
    {
      v17 = 1617LL;
      goto LABEL_10;
    }
  }
  *((_QWORD *)v8 + 2) = a2;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)v8 + 3);
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=((CBaseObject **)v8 + 3, a3);
  return 0LL;
}
