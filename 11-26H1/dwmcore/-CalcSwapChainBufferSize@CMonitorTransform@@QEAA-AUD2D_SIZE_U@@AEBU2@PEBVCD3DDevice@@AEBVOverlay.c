/*
 * XREFs of ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC
 * Callers:
 *     ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870 (-ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8 (-UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z.c)
 *     ?SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18020660C (-SupportedMPOAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 */

struct D2D_SIZE_U __fastcall CMonitorTransform::CalcSwapChainBufferSize(
        CMonitorTransform *this,
        struct D2D_SIZE_U *a2,
        const struct D2D_SIZE_U *a3,
        const struct OverlayCaps *a4,
        OverlayCaps *a5)
{
  bool v5; // zf
  struct D2D_SIZE_U v7; // rax
  UINT32 width; // ecx
  bool v11; // cc
  unsigned int v12; // eax
  unsigned int v13; // r15d
  bool v14; // cf
  int v15; // r13d
  int v16; // r12d
  int v17; // eax
  UINT32 v18; // xmm0_4
  int v19; // eax
  float v20; // xmm0_4
  int v21; // eax
  float v23; // [rsp+20h] [rbp-91h] BYREF
  struct D2D_SIZE_U v24; // [rsp+28h] [rbp-89h] BYREF
  float v25; // [rsp+30h] [rbp-81h]
  float v26; // [rsp+34h] [rbp-7Dh]
  __int64 v27; // [rsp+38h] [rbp-79h] BYREF
  float v28; // [rsp+40h] [rbp-71h]
  float v29; // [rsp+44h] [rbp-6Dh]
  _BYTE v30[12]; // [rsp+50h] [rbp-61h] BYREF
  int v31; // [rsp+5Ch] [rbp-55h]
  unsigned int v32; // [rsp+60h] [rbp-51h]
  int v33; // [rsp+64h] [rbp-4Dh]
  int v34; // [rsp+68h] [rbp-49h]
  int v35; // [rsp+6Ch] [rbp-45h]
  int v36; // [rsp+70h] [rbp-41h]
  int v37; // [rsp+84h] [rbp-2Dh]
  int v38; // [rsp+90h] [rbp-21h]

  v5 = *((_DWORD *)this + 16) == 2;
  v7 = *a3;
  v24 = *a3;
  if ( v5 || *((_DWORD *)this + 16) == 4 )
  {
    width = v24.width;
    v7.width = v24.height;
  }
  else
  {
    width = v24.height;
  }
  v11 = *((_DWORD *)this + 10) <= v7.width;
  v12 = *((_DWORD *)this + 11);
  if ( v11 && v12 <= width )
    goto LABEL_21;
  v13 = *((_DWORD *)a4 + 242);
  v14 = *((_DWORD *)this + 10) < v13;
  v15 = *((_DWORD *)this + 6);
  v27 = 0LL;
  v16 = v13;
  v38 = 0;
  if ( v14 )
    v16 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 14) = v16;
  if ( v12 < v13 )
    v13 = v12;
  *((_DWORD *)this + 15) = v13;
  v17 = *((_DWORD *)this + 7);
  v28 = (float)v16;
  v29 = (float)(int)v13;
  *(float *)&v24.width = (float)v15;
  *(float *)&v18 = (float)v17;
  v19 = *((_DWORD *)this + 8);
  v24.height = v18;
  v20 = (float)v19;
  v21 = *((_DWORD *)this + 9);
  v25 = v20;
  v26 = (float)v21;
  CMILMatrix::InferAffineMatrix((__int64)v30, (float *)&v27, (float *)&v24);
  v24.width = 0;
  v23 = 0.0;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v30, (float *)&v24, &v23);
  if ( *(float *)&v24.width >= 1.0 && v23 >= 1.0 )
    goto LABEL_21;
  v5 = *((_DWORD *)this + 16) == 1;
  *((float *)this + 69) = 1.0 / fminf(*(float *)&v24.width, v23);
  if ( !v5 )
    goto LABEL_20;
  if ( *((_BYTE *)a5 + 44) )
    goto LABEL_20;
  if ( *((_BYTE *)a5 + 47) )
    goto LABEL_20;
  if ( *((_BYTE *)this + 282) )
    goto LABEL_20;
  memset_0(v30, 0, 0x70uLL);
  v34 = *((_DWORD *)this + 7);
  v35 = *((_DWORD *)this + 8);
  v36 = *((_DWORD *)this + 9);
  v31 = v16;
  v32 = v13;
  v33 = v15;
  v37 = 1;
  if ( !OverlayCaps::SupportedMPOAttributes(a5, (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)v30)
    && !OverlayCaps::SupportedPanelFitterAttributes(a5, (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)v30) )
  {
LABEL_20:
    *((_DWORD *)this + 68) = 2;
LABEL_21:
    CMonitorTransform::UpdateSize(this, a3);
    *a2 = *a3;
    return (struct D2D_SIZE_U)a2;
  }
  *((_DWORD *)this + 68) = 3;
  CMonitorTransform::UpdateSize(this, (const struct D2D_SIZE_U *)this + 7);
  CMILMatrix::InferAffineMatrix((__int64)this + 204, (float *)this + 2, (float *)&v27);
  *a2 = *(struct D2D_SIZE_U *)((char *)this + 56);
  return (struct D2D_SIZE_U)a2;
}
