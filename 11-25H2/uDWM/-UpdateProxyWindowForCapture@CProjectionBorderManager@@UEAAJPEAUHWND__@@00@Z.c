/*
 * XREFs of ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18008BE50 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HasOngoingCapture@CProjectionBorderManager@@AEAA_NPEAUHWND__@@@Z @ 0x180098334 (-_HasOngoingCapture@CProjectionBorderManager@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A8C88 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800C3F00 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C4668 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C473C (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800C4A2C (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::UpdateProxyWindowForCapture(
        CProjectionBorderManager *this,
        HWND a2,
        HWND a3,
        HWND a4)
{
  HWND v8; // rsi
  CProjectionBorderManager *v9; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v11; // ebx
  struct _RTL_GENERIC_TABLE *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  bool v15; // zf
  CProjectionBorderManager *v16; // rcx
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-40h]
  struct CapturedWindowRepresentation *v20; // [rsp+30h] [rbp-30h] BYREF
  struct CVisualProxy *v21; // [rsp+38h] [rbp-28h] BYREF
  struct CVisualProxy *v22; // [rsp+40h] [rbp-20h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !CProjectionBorderManager::_HasOngoingCapture(this, a2) )
    goto LABEL_33;
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v8 = a2;
  if ( a3 )
    v8 = a3;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v9, v8, &v21, &v20, &v22);
  v11 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    RestartKey = 0LL;
LABEL_6:
    v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
    while ( 1 )
    {
      v13 = RtlEnumerateGenericTableWithoutSplaying(v12, &RestartKey);
      v14 = v13;
      if ( !v13 )
        goto LABEL_32;
      v15 = v13[2] == (_QWORD)a2;
      v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
      if ( v15 )
      {
        CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual((CCaptureControllerProxy *)v14[1], v21);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 672LL;
          goto LABEL_31;
        }
        CapturedItemRootVisual = CCaptureControllerProxy::SetReferenceVisual((CCaptureControllerProxy *)v14[1], v22);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 673LL;
          goto LABEL_31;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                                   this,
                                   v8,
                                   (struct CCaptureControllerProxy *)v14[1]);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 674LL;
          goto LABEL_31;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(this, v8);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 675LL;
          goto LABEL_31;
        }
        if ( a4 )
        {
          if ( *((_BYTE *)v14 + 32) )
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, a4, 0);
            v11 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 682LL;
              goto LABEL_31;
            }
          }
          CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v16, a4, 0);
          v11 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v17 = 684LL;
            goto LABEL_31;
          }
        }
        v12 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
        if ( v8 == a3 )
        {
          if ( *((_BYTE *)v14 + 32)
            && (CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, v8, 1),
                v11 = CapturedItemRootVisual,
                CapturedItemRootVisual < 0) )
          {
            v17 = 692LL;
          }
          else
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v16, v8, 1);
            v11 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual >= 0 )
              goto LABEL_6;
            v17 = 694LL;
          }
          goto LABEL_31;
        }
      }
    }
  }
  if ( CapturedItemRootVisual == -2147467261 )
  {
LABEL_32:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
LABEL_33:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  v17 = 702LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual,
    v19);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v11;
}
