/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180051944
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180002FA0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180053CE0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18001F43C (-Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PE.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18001F648 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x1800295A8 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180051C28 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180052A4C (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 i; // rax
  float v5; // xmm1_4
  unsigned int v6; // eax
  __int64 *v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  float v11; // xmm1_4
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  CCachedVisualImageProxy *v15; // rcx
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  int v19; // eax
  int v21; // edx
  int v22; // ecx
  int CachedVisualImageProxy; // eax
  __m128i v24; // xmm0
  int v25; // eax
  float v26; // xmm0_4
  __int64 *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  struct tagRECT v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF

  v31 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v31 + i) = (float)*(&a2->left + i);
  v5 = *((float *)this + 78);
  v6 = 0;
  *(_QWORD *)&v30.left = 0LL;
  if ( v5 != 1.0 )
  {
    if ( a2->bottom - a2->top >= 0 )
      v6 = a2->bottom - a2->top;
    v24 = _mm_cvtsi32_si128(v6);
    v25 = 0;
    LODWORD(v26) = _mm_cvtepi32_ps(v24).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v25 = a2->right - a2->left;
    v27 = (__int64 *)*((_QWORD *)this + 34);
    *(float *)&v30.top = v26 * v5;
    *(float *)&v30.left = (float)v25 * v5;
    CVisual::SetInterpolationMode(v27, 1);
  }
  v7 = (__int64 *)((char *)this + 248);
  if ( *((_QWORD *)this + 31) )
    goto LABEL_5;
  v21 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v21 = a2->bottom - a2->top;
  v22 = 0;
  if ( a2->right - a2->left >= 0 )
    v22 = a2->right - a2->left;
  if ( (int)CDesktopManager::GetCVIFromCache(v22, v21, (struct CCachedVisualImageProxy **)this + 31) >= 0
    || (CachedVisualImageProxy = CCompositor::CreateCachedVisualImageProxy(
                                   *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                   (struct CCachedVisualImageProxy **)this + 31),
        v9 = CachedVisualImageProxy,
        CachedVisualImageProxy >= 0) )
  {
LABEL_5:
    v8 = CCachedVisualImageProxy::Update(
           *v7,
           (__int64)&v31,
           (__int64)&v30,
           0LL,
           0LL,
           *(_QWORD *)(*((_QWORD *)this + 34) + 16LL),
           0);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x112u, 0LL);
    }
    else
    {
      v10 = a2->right - a2->left;
      v11 = *((float *)this + 78);
      v30.left = -32000;
      v30.top = -32000;
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v13 = a2->bottom - a2->top;
      v30.right = (int)(float)((float)v12 * v11) - 32000;
      v14 = 0;
      if ( v13 >= 0 )
        v14 = v13;
      v15 = (CCachedVisualImageProxy *)*v7;
      v30.bottom = (int)(float)((float)v14 * v11) - 32000;
      v16 = CCachedVisualImageProxy::Snapshot(v15, &v30);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x121u, 0LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (unsigned int)&UdwmTransitionCVISnapshot_Info,
            v17,
            1,
            (__int64)&v31);
        v18 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        v9 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x125u, 0LL);
        }
        else
        {
          v19 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
          v9 = v19;
          if ( v19 >= 0 )
            return v9;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x129u, 0LL);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CachedVisualImageProxy, 0x108u, 0LL);
  }
  v28 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)this + 31) = 0LL;
  }
  v29 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v29 )
  {
    CBaseObject::Release(v29);
    *((_QWORD *)this + 32) = 0LL;
  }
  return v9;
}
