/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BC2D0
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180013600 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18008EF00 (_o_sqrtf_0.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BC640 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  POINT v8; // r8
  int v9; // edx
  int BoundedContactWidth; // eax
  POINT v11; // r8
  int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  float v17; // xmm2_4
  __m128i v18; // xmm0
  CVisual *v19; // rcx
  LONG v20; // edi
  LONG v21; // ebp
  __int64 v22; // r8
  __int64 v23; // r9
  float v24; // xmm2_4
  CVisual *v25; // rcx
  LONG v26; // ebx
  LONG v27; // esi
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // esi
  int v33; // ebx
  int v34; // ebp
  int v35; // edi
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  CTimelineBase *v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  int v45; // ebx
  __int64 v46; // r8
  unsigned int v47; // eax
  struct tagSIZE v49; // [rsp+30h] [rbp-48h] BYREF
  struct tagSIZE v50; // [rsp+38h] [rbp-40h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmPressTapVisual_Start,
      (_DWORD)a3,
      1,
      (__int64)&v50);
  v8 = *a2;
  *((struct tagPOINT *)this + 29) = *a2;
  *((struct tagPOINT *)this + 30) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 64) = v9;
  *((_DWORD *)this + 65) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (POINT)*((_QWORD *)this + 29);
  v12 = *((_DWORD *)this + 65);
  *((_DWORD *)this + 64) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v17 = *((float *)this + 75);
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 64));
  v19 = (CVisual *)*((_QWORD *)this + 34);
  v49 = 0LL;
  *((_DWORD *)this + 65) = v14;
  v50 = 0LL;
  v20 = (int)(float)(_mm_cvtepi32_ps(v18).m128_f32[0] * v17);
  v21 = (int)(float)((float)v14 * v17);
  if ( v20 < 1 )
    v20 = 1;
  v49.cx = v20;
  if ( v21 < 1 )
    v21 = 1;
  v49.cy = v21;
  CVisual::SetSize(v19, &v49, v15, v16);
  v24 = *((float *)this + 77);
  v25 = (CVisual *)*((_QWORD *)this + 35);
  v26 = (int)(float)((float)*((int *)this + 66) * v24);
  v27 = (int)(float)((float)*((int *)this + 67) * v24);
  if ( v26 < 1 )
    v26 = 1;
  v50.cx = v26;
  if ( v27 < 1 )
    v27 = 1;
  v50.cy = v27;
  CVisual::SetSize(v25, &v50, v22, v23);
  CImage::SetBitmapSource(*((CImage **)this + 34), *((struct CBitmapSource **)this + 28));
  CImage::SetBitmapSource(*((CImage **)this + 35), *((struct CBitmapSource **)this + 28));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 34), (unsigned int)(*((_DWORD *)this + 58) - v20 / 2), v28);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 34), (unsigned int)(*((_DWORD *)this + 59) - v21 / 2), v29);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 35), (unsigned int)(*((_DWORD *)this + 60) - v26 / 2), v30);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 35), (unsigned int)(*((_DWORD *)this + 61) - v27 / 2), v31);
  v32 = *((_DWORD *)this + 60);
  v33 = *((_DWORD *)this + 58) - v32;
  v34 = *((_DWORD *)this + 61);
  v35 = *((_DWORD *)this + 59) - v34;
  v36 = o_sqrtf_0((float)(v33 * v33 + v35 * v35));
  *((_QWORD *)this + 31) = *((_QWORD *)this + 29);
  v37 = (float)*((int *)this + 81);
  if ( v36 > v37 )
  {
    v38 = v37 / v36;
    *((_DWORD *)this + 62) = v32 + (int)(float)((float)v33 * v38);
    *((_DWORD *)this + 63) = v34 + (int)(float)((float)v35 * v38);
  }
  v39 = (CTimelineBase *)*((_QWORD *)this + 41);
  if ( v39 )
  {
    CTimelineBase::Release(v39);
    *((_QWORD *)this + 41) = 0LL;
  }
  v40 = CTimeline<float>::operator new();
  v50 = (struct tagSIZE)v40;
  if ( !v40 )
  {
    *((_QWORD *)this + 41) = 0LL;
    goto LABEL_21;
  }
  v44 = CTimeline<float>::CTimeline<float>((__int64)v40, v41, v42, v43, 0);
  *((_QWORD *)this + 41) = v44;
  if ( !v44 )
  {
LABEL_21:
    v45 = -2147024882;
    v47 = 147;
    goto LABEL_22;
  }
  v45 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v45 < 0 )
  {
    v47 = 148;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, v47, 0LL);
    CPressTapVisual::Stop(this);
    return (unsigned int)v45;
  }
  CVisual::SetOpacity(this, 1.0, v46);
  return (unsigned int)v45;
}
