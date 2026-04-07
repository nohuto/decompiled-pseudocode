/*
 * XREFs of ?StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2490
 * Callers:
 *     ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180078170 (-OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18008BE50 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008D5BC (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A8E48 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800AD780 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjecti.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800BE190 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800C3B24 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::StopFilteredDisplayCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  CCaptureControllerProxy **Element; // rax
  CCaptureControllerProxy **v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 i; // rdi
  CBaseObject **v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (CCaptureControllerProxy **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement();
  v4 = Element;
  if ( Element )
  {
    v5 = CCaptureControllerProxy::SetRootVisual(Element[1], 0LL);
    v7 = v5;
    if ( v5 >= 0 )
    {
      CProjectionBorderManager::_RemoveVisuals(v6, (__int64)(v4 + 3));
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v4 + 1);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 24); i = (unsigned int)(i + 1) )
      {
        v10 = (CBaseObject **)*((_QWORD *)v4[9] + i);
        if ( v10 )
          CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v10);
      }
      CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::RemoveElement(
        this + 8,
        (CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)v4);
      CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x456,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v5);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
      return v7;
    }
  }
  else
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 2147549183LL;
  }
}
