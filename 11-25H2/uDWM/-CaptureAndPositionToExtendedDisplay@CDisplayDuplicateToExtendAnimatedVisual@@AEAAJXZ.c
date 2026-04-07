/*
 * XREFs of ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B090C
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B1200 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008AEF8 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x18009550C (-SetCenter@CVisual@@QEAAXMM@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800AF590 (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 *     ?GetRotationAngle@CDWMDisplay@@QEBAHXZ @ 0x1800B0BB8 (-GetRotationAngle@CDWMDisplay@@QEBAHXZ.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800B14CC (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800E15CC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::CaptureAndPositionToExtendedDisplay(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rax
  CDWMDisplaySet *v5; // rcx
  struct D2D_RECT_U v6; // xmm6
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rbx
  const struct CDWMDisplay *v8; // r14
  UINT32 v9; // eax
  UINT32 v10; // edx
  UINT32 v11; // ecx
  struct tagRECT *v12; // rax
  __int64 v13; // rbx
  enum DXGI_MODE_ROTATION v14; // edx
  int RotationAngle; // esi
  char *v16; // rbx
  __int64 v17; // rcx
  struct tagRECT v19; // [rsp+40h] [rbp-11h] BYREF
  struct D2D_RECT_U v20; // [rsp+50h] [rbp-1h] BYREF
  struct D2D_RECT_U v21; // [rsp+60h] [rbp+Fh] BYREF
  struct tagRECT v22; // [rsp+70h] [rbp+1Fh] BYREF

  if ( *((_QWORD *)this + 50) )
  {
    GetDesktopID(1LL);
    v2 = *((_QWORD *)this + 49);
    v3 = 0;
    v4 = *((_QWORD *)this + 50);
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 34);
    v22 = *(struct tagRECT *)(v2 + 56);
    v6 = *(struct D2D_RECT_U *)(v4 + 56);
    v20 = v6;
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v5, (const struct CDWMDisplay *)v2);
    v8 = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
           *((CDWMDisplaySet **)this + 34),
           *((const struct CDWMDisplay **)this + 50));
    if ( v8 )
    {
      if ( MatchedPhysicalDisplayNoRef )
      {
        v9 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 13);
        v10 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 11);
        v11 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 12);
        v21.left = *((_DWORD *)MatchedPhysicalDisplayNoRef + 10);
        v21.top = v10;
        v21.right = v11;
        v21.bottom = v9;
        v20.left = v21.left;
        v20.top = v10;
        v20.right = v11;
        v20.bottom = v9;
        v12 = CDisplayAnimatedVisual::ClipIntersection(
                &v19,
                &v20,
                &v21,
                (const struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56),
                (enum DXGI_MODE_ROTATION)*((_DWORD *)MatchedPhysicalDisplayNoRef + 62));
        v13 = *((_QWORD *)this + 50);
        v22 = *v12;
        v14 = *(_DWORD *)(v13 + 248);
        v20 = *(struct D2D_RECT_U *)(v13 + 40);
        v21 = *(struct D2D_RECT_U *)((char *)v8 + 40);
        v6 = (struct D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                                   &v19,
                                   &v21,
                                   &v20,
                                   (const struct tagRECT *)(v13 + 56),
                                   v14);
        v20 = v6;
        RotationAngle = CDWMDisplay::GetRotationAngle((CDWMDisplay *)v13);
        v3 = RotationAngle - CDWMDisplay::GetRotationAngle(v8);
        if ( (v3 + 360) % 180 == 90 )
        {
          v6 = (struct D2D_RECT_U)*TransposeRectAroundCenter(&v19, (const struct tagRECT *)&v20);
          *((_BYTE *)this + 488) = 1;
          v20 = v6;
        }
      }
    }
    v16 = (char *)this + 440;
    v17 = *((_QWORD *)this + 55);
    *((_QWORD *)this + 55) = 0LL;
    if ( v17 )
      CBaseObject::Release((CBaseObject *)(v17 + 8));
    CDisplayAnimatedVisual::CaptureAndAddVisual(
      this,
      0LL,
      &v22,
      (const struct tagRECT *)&v20,
      (struct CAnimatedTransitionVisual **)this + 55);
    if ( v3 )
    {
      CVisual::SetRotation((CVisual *)(*(_QWORD *)v16 + 8LL), (double)v3);
      CVisual::SetCenter(
        (CVisual *)(*(_QWORD *)v16 + 8LL),
        (float)(_mm_cvtsi128_si32((__m128i)v6) + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 8))) * 0.5,
        (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 4)) + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 12)))
      * 0.5);
    }
  }
  return 0LL;
}
