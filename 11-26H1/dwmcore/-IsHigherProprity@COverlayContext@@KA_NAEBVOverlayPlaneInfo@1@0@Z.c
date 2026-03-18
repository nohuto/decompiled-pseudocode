/*
 * XREFs of ?IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18023CFD0
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E6DD4 (-InitCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@KAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18023B370 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@KAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800132C0 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800F9B08 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z @ 0x1802396B0 (-CalcStretchFactors@@YAXAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@PEAM2@Z.c)
 *     ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18023CE70 (-IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::IsHigherProprity(
        const struct COverlayContext::OverlayPlaneInfo *a1,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // al
  enum DXGI_COLOR_SPACE_TYPE v7; // r10d
  int v8; // r9d
  char v9; // r11
  int v10; // r10d
  char v11; // r8
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rax
  int *v15; // rax
  unsigned int ColorChannelDepth; // ebx
  __int64 v17; // rax
  int *v18; // rax
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  char v23; // al
  char v24; // al
  enum DXGI_MODE_ROTATION v25; // r8d
  enum DXGI_MODE_ROTATION v26; // r8d
  float v27; // [rsp+30h] [rbp-30h] BYREF
  float v28; // [rsp+34h] [rbp-2Ch] BYREF
  float v29; // [rsp+38h] [rbp-28h] BYREF
  float v30; // [rsp+3Ch] [rbp-24h] BYREF
  _BYTE v31[16]; // [rsp+40h] [rbp-20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 144LL))(*((_QWORD *)a1 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 144LL))(*((_QWORD *)a2 + 2));
  if ( v4 )
  {
    if ( !v5 )
      return 1;
  }
  else if ( v5 )
  {
    return 0;
  }
  if ( CDeviceManager::s_bXbox )
  {
    IsDXGIColorSpaceRec2020(*((enum DXGI_COLOR_SPACE_TYPE *)a2 + 27));
    if ( IsDXGIColorSpaceRec2020(v7) )
    {
      if ( !v9 )
        return 1;
    }
    else if ( v9 )
    {
      return 0;
    }
    IsDXGIColorSpaceStudio(v8);
    if ( IsDXGIColorSpaceStudio(v10) )
    {
      if ( !v11 )
        return 1;
    }
    else if ( v11 )
    {
      return 0;
    }
    if ( v13 )
    {
      if ( !v12 )
        return 1;
    }
    else if ( v12 )
    {
      return 0;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 48LL))(*((_QWORD *)a1 + 2));
    v15 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 24LL))(v14, v31);
    ColorChannelDepth = GetColorChannelDepth(*v15);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 48LL))(*((_QWORD *)a2 + 2));
    v18 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v31);
    v19 = GetColorChannelDepth(*v18);
    if ( ColorChannelDepth > v19 )
      return 1;
    if ( ColorChannelDepth < v19 )
      return 0;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 160LL))(*((_QWORD *)a1 + 2));
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 160LL))(*((_QWORD *)a2 + 2));
  if ( v20 < v21 )
    return 1;
  if ( v20 > v21 )
    return 0;
  v22 = *((_QWORD *)a2 + 44);
  if ( *((_QWORD *)a1 + 44) > v22 )
    return 1;
  if ( *((_QWORD *)a1 + 44) < v22 )
    return 0;
  v23 = *((_BYTE *)a2 + 362);
  if ( *((_BYTE *)a1 + 362) )
  {
    if ( !v23 )
      return 1;
  }
  else if ( v23 )
  {
    return 0;
  }
  v24 = *((_BYTE *)a2 + 360);
  if ( !*((_BYTE *)a1 + 360) )
  {
    if ( !v24 )
      goto LABEL_32;
    return 0;
  }
  if ( !v24 )
    return 1;
LABEL_32:
  v25 = *((_DWORD *)a1 + 21);
  v29 = 0.0;
  v28 = 0.0;
  CalcStretchFactors(
    (const struct tagRECT *)((char *)a1 + 36),
    (const struct tagRECT *)((char *)a1 + 52),
    v25,
    &v29,
    &v28);
  v26 = *((_DWORD *)a2 + 21);
  v30 = 0.0;
  v27 = 0.0;
  CalcStretchFactors(
    (const struct tagRECT *)((char *)a2 + 36),
    (const struct tagRECT *)((char *)a2 + 52),
    v26,
    &v30,
    &v27);
  if ( v27 > v28 )
    return 1;
  if ( v28 > v27 )
    return 0;
  if ( v29 > v30 )
    return 1;
  return v30 <= v29;
}
