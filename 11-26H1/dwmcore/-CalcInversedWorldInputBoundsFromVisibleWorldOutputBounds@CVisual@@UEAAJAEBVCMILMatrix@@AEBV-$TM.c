/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180055AC0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800157E0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180055D84 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180173558 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18021B1AC (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        _BYTE *a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  __int64 v6; // r12
  unsigned int v7; // edi
  _DWORD *v9; // rdx
  __int64 v12; // rax
  _BYTE *v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // r12
  __int128 v17; // xmm0
  int v19; // eax
  float v20; // xmm2_4
  __int64 v21; // rax
  __int64 *v22; // rax
  char v23; // dl
  __int64 v24; // rcx
  __int128 v25; // xmm6
  void (__fastcall *v26)(_BYTE *, __int128 *, __int128 *); // rax
  int v27; // xmm2_4
  int v28; // xmm3_4
  __int128 v29; // xmm1
  int v30; // eax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h]
  _OWORD v39[4]; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+D0h] [rbp-30h] BYREF
  int v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E4h] [rbp-1Ch]
  __int128 v44; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-8h] BYREF
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]

  v6 = a2;
  v7 = 0;
  v34 = a2;
  v9 = (_DWORD *)*((_QWORD *)a1 + 28);
  if ( (*v9 & 0x1000000) == 0 )
    goto LABEL_7;
  v12 = (unsigned int)v9[1];
  v13 = v9 + 2;
  v14 = 0LL;
  if ( (_DWORD)v12 )
  {
    while ( *v13 != 8 )
    {
      v14 = (unsigned int)(v14 + 1);
      ++v13;
      if ( (unsigned int)v14 >= (unsigned int)v12 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( (unsigned int)v14 >= (unsigned int)v12 )
    {
      v15 = 0LL;
      goto LABEL_5;
    }
  }
  v15 = (__int64 *)((char *)&v9[2 * v14] + ((v12 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_5:
  v16 = *v15;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 51LL) )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *, __int64, _OWORD *, _OWORD *))(*(_QWORD *)v16 + 240LL))(
            v16,
            v34,
            a3,
            a4,
            a5,
            a6);
    v7 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xDADu, 0LL);
    return v7;
  }
  v6 = v34;
LABEL_7:
  if ( (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 232LL))(a1) )
  {
    v20 = *((float *)a1 + 36);
    if ( (*((float *)a1 + 35) == 0.0 || v20 == 0.0) && !a1[696] )
    {
      *a5 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *a6 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
      return v7;
    }
    v21 = *(_QWORD *)a1;
    LODWORD(v34) = *((_DWORD *)a1 + 35);
    *((float *)&v34 + 1) = v20;
    v22 = (__int64 *)(*(__int64 (__fastcall **)(_BYTE *))(v21 + 232))(a1);
    v23 = a1[697];
    *(_QWORD *)&v44 = v22;
    if ( *v22 )
    {
      if ( (unsigned __int8)CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                              *v22,
                              (int)a1 + 172,
                              (unsigned int)&v34,
                              v6,
                              (__int64)a3,
                              v23,
                              (__int64)a5,
                              (__int64)a6) )
        return v7;
      v22 = (__int64 *)v44;
    }
    v24 = *v22;
    v25 = 0LL;
    v41 = 0LL;
    if ( v24 )
    {
      CEffectBrush::GetSourceInputBoundsUnion(v24, a1 + 172, &v34, &v41);
      v25 = v41;
    }
    v26 = *(void (__fastcall **)(_BYTE *, __int128 *, __int128 *))(*(_QWORD *)a1 + 320LL);
    v44 = *(_OWORD *)(a1 + 172);
    v26(a1, &v44, &v44);
    if ( !a1[697] )
    {
      v27 = *((_DWORD *)a1 + 47);
      v28 = *((_DWORD *)a1 + 48);
      v45 = v41;
      v36 = 0LL;
      v38 = 0LL;
      v46 = v27;
      v41 = v44;
      v47 = v28;
      v35 = 0LL;
      v37 = 0LL;
      v42 = v27;
      v43 = v28;
      CMILMatrix::Transform3DBoundsHelper<1>(v6, (float *)&v45, (float *)&v35);
      CMILMatrix::Transform3DBoundsHelper<1>(v6, (float *)&v41, (float *)&v37);
      v29 = v37;
      *a5 = v35;
      *a6 = v29;
      return v7;
    }
    v17 = v44;
    *a5 = v25;
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 71LL) && a1[697] )
  {
    v30 = *(_DWORD *)(v6 + 64);
    v31 = *(_OWORD *)(v6 + 16);
    v39[0] = *(_OWORD *)v6;
    v32 = *(_OWORD *)(v6 + 32);
    v40 = v30;
    v39[1] = v31;
    v33 = *(_OWORD *)(v6 + 48);
    v39[2] = v32;
    v41 = 0LL;
    v39[3] = v33;
    if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v39, a3, &v41) )
    {
      v17 = v41;
      *a5 = v41;
    }
    else
    {
      *a5 = *(_OWORD *)(a1 + 172);
      v17 = *(_OWORD *)(a1 + 148);
    }
  }
  else
  {
    *a5 = *a3;
    v17 = *a3;
  }
  *a6 = v17;
  return v7;
}
