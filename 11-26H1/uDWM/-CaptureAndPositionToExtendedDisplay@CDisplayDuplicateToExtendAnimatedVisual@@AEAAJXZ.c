/*
 * XREFs of ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B01BC
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0B70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180079DBC (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z @ 0x1800AEF8C (-ClipIntersection@CDisplayAnimatedVisual@@KA-AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTAT.c)
 *     ?GetRotationAngle@CDWMDisplay@@QEBAHXZ @ 0x1800B0468 (-GetRotationAngle@CDWMDisplay@@QEBAHXZ.c)
 *     ?TransposeRectAroundCenter@@YA?AUtagRECT@@AEBU1@@Z @ 0x1800B0E24 (-TransposeRectAroundCenter@@YA-AUtagRECT@@AEBU1@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800DE334 (-SetCenter@CVisual@@QEAAXMM@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800DE430 (-SetRotation@CVisual@@QEAAXN@Z.c)
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
  int RotationAngle; // esi
  char *v15; // rbx
  __int64 v16; // rcx
  struct D2D_RECT_U v18; // [rsp+38h] [rbp-19h] BYREF
  struct D2D_RECT_U v19; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+60h] [rbp+Fh] BYREF
  struct tagRECT v22; // [rsp+70h] [rbp+1Fh] BYREF

  if ( *((_QWORD *)this + 46) )
  {
    v20 = 0LL;
    GetDesktopID(1LL, &v20);
    v2 = *((_QWORD *)this + 45);
    v3 = 0;
    v4 = *((_QWORD *)this + 46);
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 30);
    v22 = *(struct tagRECT *)(v2 + 56);
    v6 = *(struct D2D_RECT_U *)(v4 + 56);
    v18 = v6;
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v5, (const struct CDWMDisplay *)v2);
    v8 = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
           *((CDWMDisplaySet **)this + 30),
           *((const struct CDWMDisplay **)this + 46));
    if ( v8 )
    {
      if ( MatchedPhysicalDisplayNoRef )
      {
        v9 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 13);
        v10 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 11);
        v11 = *((_DWORD *)MatchedPhysicalDisplayNoRef + 12);
        v19.left = *((_DWORD *)MatchedPhysicalDisplayNoRef + 10);
        v19.top = v10;
        v19.right = v11;
        v19.bottom = v9;
        v18.left = v19.left;
        v18.top = v10;
        v18.right = v11;
        v18.bottom = v9;
        v12 = CDisplayAnimatedVisual::ClipIntersection(
                &v21,
                &v18,
                &v19,
                (const struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56),
                (enum DXGI_MODE_ROTATION)*((_DWORD *)MatchedPhysicalDisplayNoRef + 62));
        v13 = *((_QWORD *)this + 46);
        v22 = *v12;
        v18 = *(struct D2D_RECT_U *)(v13 + 40);
        v19 = *(struct D2D_RECT_U *)((char *)v8 + 40);
        v6 = (struct D2D_RECT_U)*CDisplayAnimatedVisual::ClipIntersection(
                                   &v21,
                                   &v19,
                                   &v18,
                                   (const struct tagRECT *)(v13 + 56),
                                   (enum DXGI_MODE_ROTATION)*(_DWORD *)(v13 + 248));
        v18 = v6;
        RotationAngle = CDWMDisplay::GetRotationAngle((CDWMDisplay *)v13);
        v3 = RotationAngle - CDWMDisplay::GetRotationAngle(v8);
        if ( (v3 + 360) % 180 == 90 )
        {
          v6 = (struct D2D_RECT_U)*TransposeRectAroundCenter(&v21, (const struct tagRECT *)&v18);
          *((_BYTE *)this + 456) = 1;
          v18 = v6;
        }
      }
    }
    v15 = (char *)this + 408;
    v16 = *((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = 0LL;
    if ( v16 )
      CBaseObject::Release((CBaseObject *)(v16 + 8));
    CDisplayAnimatedVisual::CaptureAndAddVisual(
      this,
      v20,
      &v22,
      (const struct tagRECT *)&v18,
      (struct CAnimatedTransitionVisual **)this + 51);
    if ( v3 )
    {
      CVisual::SetRotation((CVisual *)(*(_QWORD *)v15 + 8LL), (double)v3);
      CVisual::SetCenter(
        (CVisual *)(*(_QWORD *)v15 + 8LL),
        (float)(_mm_cvtsi128_si32((__m128i)v6) + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 8))) * 0.5,
        (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 4)) + _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 12)))
      * 0.5);
    }
  }
  return 0LL;
}
