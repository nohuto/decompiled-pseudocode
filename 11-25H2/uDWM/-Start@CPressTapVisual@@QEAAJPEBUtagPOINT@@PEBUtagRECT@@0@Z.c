/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800BCA24
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18002D4D8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18009B6F4 (_o_sqrtf_0.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BCDA0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  struct tagPOINT v8; // r8
  signed int v9; // edx
  int BoundedContactWidth; // eax
  struct tagPOINT v11; // r8
  signed int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  float v15; // xmm2_4
  __m128i v16; // xmm0
  CVisual *v17; // rcx
  LONG v18; // edi
  LONG v19; // ebp
  float v20; // xmm2_4
  CVisual *v21; // rcx
  LONG v22; // ebx
  LONG v23; // esi
  int v24; // esi
  int v25; // ebx
  int v26; // ebp
  int v27; // edi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  CTimelineBase *v31; // rcx
  LPVOID v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  int v37; // ebx
  unsigned int v38; // eax
  struct tagSIZE v40; // [rsp+30h] [rbp-48h] BYREF
  struct tagSIZE v41; // [rsp+38h] [rbp-40h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmPressTapVisual_Start,
      (__int64)a3,
      1LL,
      (__int64)&v41);
  v8 = *a2;
  *((struct tagPOINT *)this + 33) = *a2;
  *((struct tagPOINT *)this + 34) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 72) = v9;
  *((_DWORD *)this + 73) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (struct tagPOINT)*((_QWORD *)this + 33);
  v12 = *((_DWORD *)this + 73);
  *((_DWORD *)this + 72) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v15 = *((float *)this + 83);
  v16 = _mm_cvtsi32_si128(*((_DWORD *)this + 72));
  v17 = (CVisual *)*((_QWORD *)this + 38);
  v40 = 0LL;
  *((_DWORD *)this + 73) = v14;
  v41 = 0LL;
  v18 = (int)(float)(_mm_cvtepi32_ps(v16).m128_f32[0] * v15);
  v19 = (int)(float)((float)v14 * v15);
  if ( v18 < 1 )
    v18 = 1;
  v40.cx = v18;
  if ( v19 < 1 )
    v19 = 1;
  v40.cy = v19;
  CVisual::SetSize(v17, &v40);
  v20 = *((float *)this + 85);
  v21 = (CVisual *)*((_QWORD *)this + 39);
  v22 = (int)(float)((float)*((int *)this + 74) * v20);
  v23 = (int)(float)((float)*((int *)this + 75) * v20);
  if ( v22 < 1 )
    v22 = 1;
  v41.cx = v22;
  if ( v23 < 1 )
    v23 = 1;
  v41.cy = v23;
  CVisual::SetSize(v21, &v41);
  CImage::SetBitmapSource(*((CImage **)this + 38), *((struct CBitmapSource **)this + 32));
  CImage::SetBitmapSource(*((CImage **)this + 39), *((struct CBitmapSource **)this + 32));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 38), *((_DWORD *)this + 66) - v18 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 38), *((_DWORD *)this + 67) - v19 / 2);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 39), *((_DWORD *)this + 68) - v22 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 39), *((_DWORD *)this + 69) - v23 / 2);
  v24 = *((_DWORD *)this + 68);
  v25 = *((_DWORD *)this + 66) - v24;
  v26 = *((_DWORD *)this + 69);
  v27 = *((_DWORD *)this + 67) - v26;
  v28 = o_sqrtf_0((float)(v25 * v25 + v27 * v27));
  *((_QWORD *)this + 35) = *((_QWORD *)this + 33);
  v29 = (float)*((int *)this + 89);
  if ( v28 > v29 )
  {
    v30 = v29 / v28;
    *((_DWORD *)this + 70) = v24 + (int)(float)((float)v25 * v30);
    *((_DWORD *)this + 71) = v26 + (int)(float)((float)v27 * v30);
  }
  v31 = (CTimelineBase *)*((_QWORD *)this + 45);
  if ( v31 )
  {
    CTimelineBase::Release(v31);
    *((_QWORD *)this + 45) = 0LL;
  }
  v32 = DefaultHeap::AllocClear(0x78uLL);
  v41 = (struct tagSIZE)v32;
  if ( !v32 )
  {
    *((_QWORD *)this + 45) = 0LL;
    goto LABEL_21;
  }
  v36 = CTimeline<float>::CTimeline<float>((__int64)v32, v33, v34, v35, 0);
  *((_QWORD *)this + 45) = v36;
  if ( !v36 )
  {
LABEL_21:
    v37 = -2147024882;
    v38 = 147;
    goto LABEL_22;
  }
  v37 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v37 < 0 )
  {
    v38 = 148;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, v38, 0LL);
    CPressTapVisual::Stop(this);
    return (unsigned int)v37;
  }
  CVisual::SetOpacity(this, 1.0);
  return (unsigned int)v37;
}
