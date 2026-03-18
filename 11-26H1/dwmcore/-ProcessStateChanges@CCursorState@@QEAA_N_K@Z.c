/*
 * XREFs of ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118
 * Callers:
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18018A088 (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x18015DE78 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@PEAU01@@Z @ 0x18028FB68 (--$_Freenode@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@-$_List_node@.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UShapeData@CCursorState@@@1@AEAV21@@Z @ 0x1802905D4 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ??$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$list@UTrailPoint@CCursorState@@V?$allocator@UTrailPoint@CCursorState@@@std@@@std@@QEAAAEAUTrailPoint@CCursorState@@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x180290618 (--$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180290B74 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?clear@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAXXZ @ 0x1802926D0 (-clear@-$vector@V-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@UShapeDa.c)
 */

char __fastcall CCursorState::ProcessStateChanges(CCursorState *this, __int64 a2)
{
  char v2; // r15
  char v3; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  std::_Ref_count_base *v8; // rsi
  char v9; // r13
  int v10; // xmm6_4
  int v11; // xmm7_4
  char v12; // dl
  int v13; // eax
  bool v14; // r8
  char v15; // al
  unsigned __int64 v16; // r15
  unsigned int v17; // ecx
  float v18; // xmm0_4
  unsigned __int8 v19; // eax^2
  int v20; // ecx
  int v21; // eax
  __int64 i; // rax
  __int64 v23; // rdx
  __int64 *v24; // r8
  __int64 v25; // rcx
  char v27; // [rsp+38h] [rbp-39h]
  __int64 v28; // [rsp+40h] [rbp-31h] BYREF
  std::_Ref_count_base *v29; // [rsp+48h] [rbp-29h]
  std::_Ref_count_base *v30[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+E0h] [rbp+6Fh] BYREF
  bool v33; // [rsp+E8h] [rbp+77h]
  char v34; // [rsp+F0h] [rbp+7Fh]

  v32 = a2;
  v2 = *((_BYTE *)this + 113);
  v3 = 0;
  v6 = *((_QWORD *)this + 23);
  LOBYTE(v31) = 0;
  v27 = v2;
  v33 = 0;
  if ( v6 )
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  v7 = *((_QWORD *)this + 22);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 23);
  v9 = *((_BYTE *)this + 81);
  v10 = *((_DWORD *)this + 53);
  v11 = *((_DWORD *)this + 54);
  v28 = v7;
  v29 = v8;
  EnterCriticalSection(&g_CursorManager);
  v12 = 0;
  if ( *((_BYTE *)this + 23) )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(&v28, (char *)this + 40);
    *(_OWORD *)v30 = 0LL;
    std::shared_ptr<CRegion>::operator=((_QWORD *)this + 5, (__int64 *)v30);
    v12 = 0;
    if ( v30[1] )
    {
      std::_Ref_count_base::_Decref(v30[1]);
      v12 = 0;
    }
    v13 = *((_DWORD *)this + 8);
    v14 = 1;
    v9 = *((_BYTE *)this + 20);
    v3 = 1;
    v8 = v29;
    v7 = v28;
    *((_BYTE *)this + 21) = 1;
    *((_DWORD *)this + 42) = v13;
    *((_BYTE *)this + 23) = 0;
  }
  else
  {
    v14 = 1;
  }
  v34 = v3;
  if ( !*((_BYTE *)this + 18) || !v7 || (v15 = 1, v9) )
    v15 = 0;
  *((_BYTE *)this + 113) = v15;
  if ( v3 || v15 != v2 )
  {
    *((_BYTE *)this + 114) = v15;
    v3 = 1;
  }
  if ( *((_BYTE *)this + 22) )
  {
    if ( v7 )
      v3 = 1;
    *((_DWORD *)this + 48) = *((_DWORD *)this + 7);
    *((_BYTE *)this + 22) = 0;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v10 = *((_DWORD *)this + 14);
    v11 = *((_DWORD *)this + 15);
    LOBYTE(v31) = *((_BYTE *)this + 19);
    if ( *((_BYTE *)this + 115) && (v7 || !IsEmpty((const struct D2D_RECT_F *)this + 8)) )
    {
      v33 = v14;
      v3 = v14;
    }
    else if ( *((_BYTE *)this + 112) != v12 )
    {
      v3 = v14;
    }
    *((_BYTE *)this + 21) = v12;
  }
  v16 = *((_QWORD *)this + 34) * *((int *)this + 6);
  if ( *((_BYTE *)this + 16) != v12 )
  {
    v17 = *((_DWORD *)this + 9);
    *((_BYTE *)this + 112) = *((_BYTE *)this + 17);
    *((_BYTE *)this + 16) = v12;
    *(float *)v30 = (float)(unsigned __int8)v17 / 255.0;
    v18 = (float)BYTE1(v17);
    v19 = BYTE2(v17);
    v20 = HIBYTE(v17);
    v21 = v19;
    if ( v7 )
      v3 = v14;
    *((float *)v30 + 1) = v18 / 255.0;
    *(float *)&v30[1] = (float)v21 / 255.0;
    *((float *)&v30[1] + 1) = (float)v20 / 255.0;
    *(_OWORD *)((char *)this + 196) = *(_OWORD *)v30;
  }
  LeaveCriticalSection(&g_CursorManager);
  if ( g_disableHardwareCursors )
  {
    for ( i = *((_QWORD *)this + 11); i != *((_QWORD *)this + 12); i += 128LL )
    {
      if ( *(_BYTE *)(i + 124) )
      {
        v3 = 1;
        break;
      }
    }
  }
  v23 = *((_QWORD *)this + 33);
  if ( v23 )
  {
    while ( 1 )
    {
      v23 = *((_QWORD *)this + 33);
      if ( !v23 )
        break;
      v24 = (__int64 *)**((_QWORD **)this + 32);
      if ( a2 - v24[2] < v16 )
        break;
      v25 = *v24;
      *((_QWORD *)this + 33) = v23 - 1;
      *(_QWORD *)v24[1] = v25;
      *(_QWORD *)(v25 + 8) = v24[1];
      std::_List_node<CCursorState::TrailPoint,void *>::_Freenode<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        v25,
        v24);
    }
    v3 = 1;
  }
  if ( (_BYTE)v31
    && *((_QWORD *)this + 22)
    && v16
    && (!v23
     || (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 32) + 8LL) + 16LL)) >= *((_QWORD *)this + 34)) )
  {
    CCursorState::EnsureCompositionResources(this);
    v31 = *((_QWORD *)this + 15);
    std::list<CCursorState::TrailPoint>::emplace_back<unsigned __int64 &,IBitmapRealization *,bool &,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> &,MILMatrix3x2 &>(
      (_DWORD)this + 256,
      (unsigned int)&v32,
      (unsigned int)&v31,
      (_DWORD)this + 81,
      (__int64)this + 128,
      (__int64)this + 144);
    v3 = 1;
  }
  if ( *((_QWORD *)this + 33) )
    CCursorState::ScheduleCompositionPass(this);
  *((_DWORD *)this + 53) = v10;
  *((_DWORD *)this + 54) = v11;
  if ( v3 )
  {
    if ( v34 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      *((_BYTE *)this + 115) = 0;
      std::vector<std::shared_ptr<CCursorState::ShapeData>>::clear((char *)this + 224);
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 22, &v28);
      *((_BYTE *)this + 81) = v9;
      if ( *((_QWORD *)this + 22) )
        std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
          (char *)this + 224,
          (char *)this + 176);
      v8 = v29;
    }
    else
    {
      if ( *((_BYTE *)this + 113) == v27 )
      {
LABEL_58:
        CCursorState::EnsureDestRectAndTransform(this, v33);
        if ( v8 )
          std::_Ref_count_base::_Decref(v8);
        return 1;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      *((_BYTE *)this + 115) = 0;
    }
    ++*((_DWORD *)this + 62);
    goto LABEL_58;
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return 0;
}
