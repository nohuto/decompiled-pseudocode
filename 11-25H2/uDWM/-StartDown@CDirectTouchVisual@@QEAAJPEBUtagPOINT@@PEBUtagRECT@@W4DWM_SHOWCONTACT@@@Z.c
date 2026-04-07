/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800301C4 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AAF14 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18002D3A8 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180030650 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800306DC (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180030758 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800307E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004958C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  int v11; // esi
  int v12; // r9d
  unsigned int v13; // eax
  double v15; // xmm1_8
  void *v16; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 328) = a4;
  *(_BYTE *)(a1 + 360) = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmDirectTouchDownAnimation_BeginDraw_Info,
      (_DWORD)a3,
      1,
      (__int64)&v16);
  CDirectTouchVisual::StopFadeTimeline((CDirectTouchVisual *)a1);
  CDirectTouchVisual::StopDownTimeline((CDirectTouchVisual *)a1);
  CDirectTouchVisual::StopDownDelayTimeline((CDirectTouchVisual *)a1);
  v7 = DefaultHeap::AllocClear(0x78uLL);
  v16 = v7;
  if ( v7 )
  {
    CTimelineBase::CTimelineBase(v7, v8, v9, v7, 0);
    *v10 = &CTimeline<float>::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    v13 = 102;
    v12 = -2147024882;
    goto LABEL_9;
  }
  v11 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 104;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v13, 0LL);
    CDirectTouchVisual::Stop((CDirectTouchVisual *)a1);
    return (unsigned int)v11;
  }
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 312));
  CImage::SetBitmapSource(*(CImage **)(a1 + 368), *(struct CBitmapSource **)(a1 + 376));
  if ( (*(_BYTE *)(a1 + 328) & 1) != 0 )
    v15 = *(float *)(a1 + 304);
  else
    v15 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v15);
  return (unsigned int)v11;
}
