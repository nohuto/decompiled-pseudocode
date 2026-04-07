/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38
 * Callers:
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180005D94 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800A9128 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180005D70 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800064E0 (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180006558 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800065E0 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800134C4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  int v11; // esi
  int v12; // r9d
  double v13; // xmm1_8
  unsigned int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 296) = a4;
  *(_BYTE *)(a1 + 328) = 0;
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
  v7 = CTimeline<float>::operator new();
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
  *(_QWORD *)(a1 + 320) = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    v14 = 102;
    v12 = -2147024882;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14, 0LL);
    CDirectTouchVisual::Stop((CDirectTouchVisual *)a1);
    return (unsigned int)v11;
  }
  v11 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v14 = 104;
    goto LABEL_11;
  }
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 280));
  CImage::SetBitmapSource(*(CImage **)(a1 + 336), *(struct CBitmapSource **)(a1 + 344));
  if ( (*(_BYTE *)(a1 + 296) & 1) != 0 )
    v13 = *(float *)(a1 + 272);
  else
    v13 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v13);
  return (unsigned int)v11;
}
