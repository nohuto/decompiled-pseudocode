/*
 * XREFs of ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@_N@Z @ 0x1801DF864 (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180012E70 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18015E48C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18015FA8C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x18015FEEC (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ??$emplace_back@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAAEAUMonitorData@CCursorState@@$$QEAU23@@Z @ 0x1802906C4 (--$emplace_back@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$allocator@UMo.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 */

bool __fastcall CCursorState::TryEnableHardwareCursor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        CMILMatrix *a5,
        float a6)
{
  __int64 i; // rbx
  CMILMatrix *v11; // rdi
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  float v17; // xmm2_4
  int Rotation; // r14d
  __int32 v19; // xmm2_4
  std::_Ref_count_base *v20; // rcx
  int v21; // eax
  int v22; // edi
  __int64 *Shape; // rax
  bool v24; // zf
  bool v25; // bl
  __int64 v27; // [rsp+38h] [rbp-79h] BYREF
  std::_Ref_count_base *v28; // [rsp+40h] [rbp-71h]
  __int64 v29; // [rsp+48h] [rbp-69h] BYREF
  int v30; // [rsp+50h] [rbp-61h]
  int v31; // [rsp+88h] [rbp-29h]
  __int64 v32; // [rsp+94h] [rbp-1Dh]
  __int64 v33; // [rsp+9Ch] [rbp-15h]
  int v34; // [rsp+A4h] [rbp-Dh]
  std::_Ref_count_base *v35[2]; // [rsp+A8h] [rbp-9h]
  int v36; // [rsp+C0h] [rbp+Fh]
  __int16 v37; // [rsp+C4h] [rbp+13h]
  int v38; // [rsp+114h] [rbp+63h]
  float v39; // [rsp+118h] [rbp+67h] BYREF

  v38 = HIDWORD(a2);
  EnterCriticalSection(&g_CursorManager);
  for ( i = *(_QWORD *)(a1 + 88); i != *(_QWORD *)(a1 + 96); i += 128LL )
  {
    if ( *(_DWORD *)i == (_DWORD)a2 && *(_DWORD *)(i + 4) == v38 && *(_DWORD *)(i + 8) == a3 )
      break;
  }
  if ( i == *(_QWORD *)(a1 + 96) )
  {
    v29 = a2;
    *(_OWORD *)v35 = 0LL;
    v30 = a3;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    v36 = 0;
    v37 = 0;
    std::vector<CCursorState::MonitorData>::emplace_back<CCursorState::MonitorData>(a1 + 88, &v29);
    if ( v35[1] )
      std::_Ref_count_base::_Decref(v35[1]);
    i = *(_QWORD *)(a1 + 96) - 128LL;
  }
  v11 = a5;
  v12 = *((_OWORD *)a5 + 1);
  v13 = *((_DWORD *)a5 + 16);
  *(_OWORD *)(i + 12) = *(_OWORD *)a5;
  v14 = *((_OWORD *)v11 + 2);
  *(_OWORD *)(i + 28) = v12;
  v15 = *((_OWORD *)v11 + 3);
  *(_OWORD *)(i + 44) = v14;
  v16 = *a4;
  *(_OWORD *)(i + 60) = v15;
  *(_DWORD *)(i + 76) = v13;
  LOBYTE(v13) = LOBYTE(a6);
  *(_OWORD *)(i + 80) = v16;
  *(_BYTE *)(i + 125) = v13;
  v17 = *(float *)(a1 + 192);
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.0000011920929 )
  {
    v31 = 0;
    v27 = 0LL;
    LODWORD(v28) = 1065353216;
    CMILMatrix::SetRotation((CMILMatrix *)&v29, (const struct Windows::Foundation::Numerics::float3 *)&v27, v17);
    CMILMatrix::Multiply(v11, (const struct CMILMatrix *)&v29);
  }
  if ( g_disableHardwareCursors
    || (Rotation = CMILMatrix::GetRotation(v11)) == 0
    || (a6 = 0.0,
        v39 = 0.0,
        CMILMatrix::Get2DScaleDimensions(v11, &a6, &v39),
        COERCE_FLOAT(v19 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]),
        COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - v39) & v19) > 0.0000011920929)
    || COERCE_FLOAT(LODWORD(a6) & v19) < 0.0000011920929 )
  {
    *(_QWORD *)(i + 96) = 0LL;
    v20 = *(std::_Ref_count_base **)(i + 104);
    *(_QWORD *)(i + 104) = 0LL;
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    *(_DWORD *)(i + 120) = 0;
  }
  else
  {
    v20 = (std::_Ref_count_base *)*(unsigned int *)(*(_QWORD *)(a1 + 176) + 12LL);
    v21 = *(_DWORD *)(a1 + 248);
    a6 = (float)((float)(a6 / *(float *)(a1 + 168)) * (float)(int)v20) + 6291456.25;
    v22 = (int)(LODWORD(a6) << 10) >> 11;
    if ( *(_DWORD *)(i + 120) != v21 || *(_DWORD *)(i + 112) != v22 || *(_DWORD *)(i + 116) != Rotation )
    {
      Shape = (__int64 *)CCursorState::TryGetShape(a1, (unsigned int)&v27, v22, Rotation, *(_BYTE *)(a1 + 113));
      std::shared_ptr<CRegion>::operator=((_QWORD *)(i + 96), Shape);
      v20 = v28;
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      if ( *(_QWORD *)(i + 96) )
        CCursorState::UpdateHardwareCursorOverlay((CCursorState *)a1, (struct CCursorState::MonitorData *)i, 1);
      *(_DWORD *)(i + 120) = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(i + 112) = v22;
      *(_DWORD *)(i + 116) = Rotation;
    }
  }
  v24 = *(_QWORD *)(i + 96) == 0LL;
  if ( !*(_QWORD *)(i + 96) )
  {
    CCursorState::EnsureHardwareOverlayCleared(v20, (struct CCursorState::MonitorData *)i);
    v24 = *(_QWORD *)(i + 96) == 0LL;
  }
  v25 = !v24;
  LeaveCriticalSection(&g_CursorManager);
  return v25;
}
