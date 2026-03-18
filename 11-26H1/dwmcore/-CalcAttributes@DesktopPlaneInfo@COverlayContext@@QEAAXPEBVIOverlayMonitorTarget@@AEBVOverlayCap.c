/*
 * XREFs of ?CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCaps@@_N@Z @ 0x1802392A0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ @ 0x18023B004 (-DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013268 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18020660C (-SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DesktopPlaneInfo::CalcAttributes(
        COverlayContext::DesktopPlaneInfo *this,
        const struct IOverlayMonitorTarget *a2,
        const struct OverlayCaps *a3,
        char a4)
{
  char *v4; // rdi
  enum DXGI_COLOR_SPACE_TYPE v9; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  float *v16; // rcx
  float v17; // xmm2_4
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _BYTE v20[32]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+44h] [rbp-A4h]
  __int128 v23; // [rsp+54h] [rbp-94h]
  int v24; // [rsp+74h] [rbp-74h]

  v4 = (char *)a2 + 8;
  *(_QWORD *)this = *(_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a2 + 1) + 40LL))(
                                 (char *)a2 + 8,
                                 v20);
  v9 = *(_DWORD *)((*(__int64 (__fastcall **)(const struct IOverlayMonitorTarget *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                     a2,
                     v20)
                 + 8);
  *((_DWORD *)this + 14) = v9;
  v10 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v20);
  *((_DWORD *)this + 15) = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v10 + 16), v9);
  *((_DWORD *)this + 16) = 0;
  v11 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IOverlayMonitorTarget *))(*(_QWORD *)a2 + 256LL))(a2);
  v12 = v11;
  v13 = v11[68];
  *((_QWORD *)this + 1) = 0LL;
  if ( v13 == 3 )
  {
    *((_DWORD *)this + 4) = v11[14];
    v14 = v11[15];
  }
  else
  {
    v15 = v11[10];
    if ( v15 >= v12[12] )
      v15 = v12[12];
    *((_DWORD *)this + 4) = v15;
    v14 = v12[11];
    if ( v14 >= v12[13] )
      v14 = v12[13];
  }
  *((_DWORD *)this + 5) = v14;
  *((_DWORD *)this + 6) = v12[6];
  *((_DWORD *)this + 7) = v12[7];
  *((_DWORD *)this + 8) = v12[8];
  *((_DWORD *)this + 9) = v12[9];
  if ( (v12[16] == 1 || v12[16] == 3)
    && (*((_BYTE *)v12 + 280) || (int)v12[68] >= 1)
    && !*((_BYTE *)a3 + 44)
    && !*((_BYTE *)a3 + 47) )
  {
    if ( a4
      || CMILMatrix::IsTranslateAndScale<1>((__int64)(v12 + 17))
      && v16[10] == 1.0
      && *v16 >= 1.0
      && (v17 = v16[5], v17 >= 1.0)
      && (*v16 != 1.0 || v17 != 1.0) )
    {
      memset_0(v21, 0, 0x70uLL);
      v18 = *(_OWORD *)((char *)this + 8);
      v19 = *(_OWORD *)((char *)this + 24);
      v24 = 1;
      v22 = v18;
      v23 = v19;
      if ( OverlayCaps::SupportedMPOAttributes(a3, (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)v21) )
      {
        *((_DWORD *)this + 16) = 1;
      }
      else if ( OverlayCaps::SupportedPanelFitterAttributes(a3, (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)v21) )
      {
        *((_DWORD *)this + 16) = 2;
      }
    }
  }
}
