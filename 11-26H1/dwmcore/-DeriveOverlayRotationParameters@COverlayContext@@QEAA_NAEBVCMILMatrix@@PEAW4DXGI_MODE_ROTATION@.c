/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1800AFEA0
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@IEAA_NPEBVCMILMatrix@@@Z @ 0x18023D2C0 (-IsQualcommRotationWorkaroundNeeded@COverlayContext@@IEAA_NPEBVCMILMatrix@@@Z.c)
 */

char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // r14d
  int v8; // r15d
  enum DXGI_MODE_ROTATION v10; // esi
  char v11; // bl
  float *v12; // rcx
  int v13; // r9d
  unsigned int v14; // r10d
  int v15; // r11d
  float v16; // xmm2_4
  float *v17; // rcx
  unsigned int v19; // eax
  int v20; // xmm1_4
  float v21; // xmm6_4
  int v22; // xmm5_4
  __int128 v23; // xmm0
  int v24; // xmm1_4
  __int128 v25; // xmm0
  int v26; // xmm1_4
  char IsTranslateAnd; // al
  float v28; // xmm5_4
  unsigned int v29; // eax
  _DWORD v30[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v31; // [rsp+38h] [rbp-48h]
  __int128 v32; // [rsp+48h] [rbp-38h]
  int v33; // [rsp+58h] [rbp-28h]
  int v34; // [rsp+5Ch] [rbp-24h]
  unsigned int v35; // [rsp+60h] [rbp-20h]

  v5 = *((_DWORD *)this + 3);
  v8 = v5 & 6;
  v10 = DXGI_MODE_ROTATION_IDENTITY;
  v11 = 0;
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
  {
    v16 = *v12;
    v17 = v12 + 5;
    if ( v16 >= 0.0 && *v17 >= 0.0 )
    {
      v11 = v15;
LABEL_5:
      *a4 = v14;
      *a3 = v10;
      *a5 = v15;
      return v11;
    }
    if ( v8 == 6 )
    {
      v11 = v15;
      if ( v16 < 0.0 )
        v14 = 2;
      v19 = v14;
      v14 |= v15;
      if ( *v17 >= 0.0 )
        v14 = v19;
      goto LABEL_5;
    }
    if ( v13 && v16 < 0.0 && *v17 < 0.0 && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, a2) )
    {
      v10 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_34:
      v11 = v15;
      LOBYTE(v15) = ((unsigned __int8)v15 & (unsigned __int8)v5) != 0 ? v15 : 0;
      goto LABEL_5;
    }
  }
  else if ( v13 )
  {
    v20 = *((_DWORD *)a2 + 2);
    v21 = *((float *)a2 + 1);
    v22 = *((_DWORD *)a2 + 4);
    v30[1] = *(_DWORD *)a2;
    v30[3] = *((_DWORD *)a2 + 3);
    v23 = *(_OWORD *)((char *)a2 + 24);
    v35 = v14;
    v30[2] = v20;
    v24 = *((_DWORD *)a2 + 5);
    v31 = v23;
    v25 = *(_OWORD *)((char *)a2 + 40);
    v30[4] = v24;
    v26 = *((_DWORD *)a2 + 15);
    v32 = v25;
    v33 = *((_DWORD *)a2 + 14);
    *(float *)v30 = v21;
    v30[5] = v22;
    v34 = v26;
    IsTranslateAnd = CMILMatrix::IsTranslateAndScale<1>(v30);
    if ( IsTranslateAnd && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v30) )
    {
      if ( v8 == 6 )
      {
        v10 = DXGI_MODE_ROTATION_ROTATE90;
        if ( v28 > 0.0 )
          v14 = 2;
        v29 = v14;
        v14 |= v15;
        if ( v21 >= 0.0 )
          v14 = v29;
        goto LABEL_34;
      }
      if ( v28 > 0.0 && v21 < 0.0 )
      {
        v10 = DXGI_MODE_ROTATION_ROTATE270;
        goto LABEL_34;
      }
      if ( v28 < 0.0 && v21 > 0.0 )
      {
        v10 = DXGI_MODE_ROTATION_ROTATE90;
        goto LABEL_34;
      }
    }
  }
  return v11;
}
