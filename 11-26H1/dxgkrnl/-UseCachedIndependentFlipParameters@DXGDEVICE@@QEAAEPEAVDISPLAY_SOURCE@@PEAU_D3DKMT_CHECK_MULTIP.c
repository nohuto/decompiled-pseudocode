/*
 * XREFs of ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x14032F3E8
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

bool __fastcall DXGDEVICE::UseCachedIndependentFlipParameters(
        DXGDEVICE *this,
        struct DISPLAY_SOURCE *a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a3)
{
  LUID *p_CompSurfaceLuid; // r8
  __int64 v6; // r10
  unsigned int v8; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  unsigned int v10; // r8d
  int v11; // r10d
  __int128 v12; // xmm1
  int v13; // r11d
  int v14; // edi
  int v15; // edx
  __int128 v16; // xmm0
  int v17; // r9d
  int v18; // r8d
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  int v20; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v21; // [rsp+84h] [rbp-7Ch] BYREF
  int v22; // [rsp+88h] [rbp-78h] BYREF
  int v23; // [rsp+8Ch] [rbp-74h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+94h] [rbp-6Ch] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+98h] [rbp-68h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v31[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v32; // [rsp+F8h] [rbp-8h]

  p_CompSurfaceLuid = &a3->CompSurfaceLuid;
  if ( !(p_CompSurfaceLuid->LowPart | a3->CompSurfaceLuid.HighPart) )
    return 0;
  v6 = *((_QWORD *)this + 2);
  v32 = 0;
  VidPnSourceId = a3->VidPnSourceId;
  v20 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  (*(void (__fastcall **)(_QWORD, D3DDDI_VIDEO_PRESENT_SOURCE_ID *, LUID *, __int64, _OWORD *, int *, int *, unsigned int *, __int64 *, int *, int *, int *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 432LL))(
    *(_QWORD *)(v6 + 744),
    &VidPnSourceId,
    p_CompSurfaceLuid,
    -1LL,
    v31,
    &v20,
    &v25,
    &v21,
    &v30,
    &v24,
    &v23,
    &v22,
    0LL,
    0LL);
  if ( !v20 )
    return 0;
  v8 = v21;
  if ( v21 != a3->LayerIndex )
    return 0;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)a2 + 1) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9911;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9911LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(a2, v8);
  if ( LatestPlaneConfigInternal && (v10 = *((_DWORD *)LatestPlaneConfigInternal + 2), (v10 & 1) != 0) )
  {
    v11 = *((_DWORD *)LatestPlaneConfigInternal + 15);
    v12 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 28);
    v13 = *((_DWORD *)LatestPlaneConfigInternal + 16);
    v14 = *((_DWORD *)LatestPlaneConfigInternal + 17);
    v15 = (v10 >> 4) & 1 | 2;
    v29 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 12);
    if ( (v10 & 0x20) == 0 )
      v15 = (v10 >> 4) & 1;
    v16 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 44);
    v17 = v15 | 4;
    if ( (v10 & 0x40) == 0 )
      v17 = v15;
    v18 = (v10 >> 2) & 1;
  }
  else
  {
    v16 = 0LL;
    v17 = 0;
    v29 = 0LL;
    v11 = 1;
    v18 = 0;
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
  }
  pPlaneAttributes = a3->pPlaneAttributes;
  v28 = v16;
  v27 = v12;
  if ( v17 != pPlaneAttributes->Flags
    || (_DWORD)v27 != pPlaneAttributes->DstRect.left
    || *(_QWORD *)((char *)&v27 + 4) != *(_QWORD *)&pPlaneAttributes->DstRect.top
    || HIDWORD(v27) != pPlaneAttributes->DstRect.bottom
    || v11 != pPlaneAttributes->Rotation
    || v18 != pPlaneAttributes->Blend
    || (_DWORD)v28 != pPlaneAttributes->ClipRect.left
    || *(_QWORD *)((char *)&v28 + 4) != *(_QWORD *)&pPlaneAttributes->ClipRect.top
    || HIDWORD(v28) != pPlaneAttributes->ClipRect.bottom
    || v14 != pPlaneAttributes->SDRWhiteLevel )
  {
    return 0;
  }
  if ( v13 == pPlaneAttributes->ColorSpace
    && (_DWORD)v29 == pPlaneAttributes->SrcRect.left
    && *(_QWORD *)((char *)&v29 + 4) == *(_QWORD *)&pPlaneAttributes->SrcRect.top )
  {
    return HIDWORD(v29) != pPlaneAttributes->SrcRect.bottom;
  }
  return 1;
}
