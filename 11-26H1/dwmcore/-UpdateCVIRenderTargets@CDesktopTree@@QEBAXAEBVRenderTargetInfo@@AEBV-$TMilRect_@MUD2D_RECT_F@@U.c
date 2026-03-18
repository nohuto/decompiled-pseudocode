/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18002C32C (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800924B0 (-GetBounds@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNe.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009FD9C (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18009FE40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1801224A0 (-GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CDesktopTree::UpdateCVIRenderTargets(struct CVisualTree *a1, __int64 a2, struct D2D_RECT_F *Blink)
{
  __int64 v3; // rax
  __int64 v4; // r12
  CVisual **v6; // rsi
  CVisual **v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // r15d
  CVisual *v12; // rbx
  unsigned int v13; // r8d
  struct _LIST_ENTRY *v14; // r15
  struct _LIST_ENTRY *v15; // rdi
  struct D2D_RECT_F *Flink; // rdx
  _OWORD *v17; // r11
  _OWORD *v18; // rbx
  _QWORD *v19; // rax
  char *v20; // r10
  __int64 v21; // r15
  __int64 v22; // r11
  __int64 v23; // r11
  bool v24; // zf
  struct D2D_RECT_F v25; // xmm7
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  __int64 *v29; // rbx
  __int64 *v30; // rdi
  char v31; // r12
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // al
  HANDLE ProcessHeap; // rax
  __int64 v39; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  __m128 v45; // xmm1
  __int64 v46; // rdx
  const struct D2D_RECT_F *v47; // rcx
  const struct D2D_RECT_F *v48; // rdx
  __m128 *v49; // rcx
  float v50; // xmm0_4
  float v51; // xmm6_4
  float v52; // xmm5_4
  float right; // xmm1_4
  float bottom; // xmm3_4
  float top; // xmm4_4
  unsigned int v56; // eax
  __int64 v57; // rax
  DwmDbg::DbgString *v58; // rbx
  DwmDbg::DbgString *v59; // rax
  __int64 *v60; // rcx
  __int64 v61; // rax
  unsigned int SubtreeZ; // eax
  const char *v63; // rdi
  const struct D2D_RECT_F *Bounds; // rax
  const char *v65; // rbx
  DwmDbg::DbgString *v66; // rax
  DwmDbg::DbgString *v67; // rbx
  DwmDbg::DbgString *v68; // rax
  unsigned int v70; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v71; // [rsp+38h] [rbp-C8h]
  unsigned int v72; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+48h] [rbp-B8h]
  struct D2D_RECT_F v74; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h]
  __int64 v76; // [rsp+68h] [rbp-98h] BYREF
  struct D2D_RECT_F v77; // [rsp+70h] [rbp-90h] BYREF
  __int64 v78; // [rsp+80h] [rbp-80h]
  struct D2D_RECT_F *v79; // [rsp+88h] [rbp-78h]
  char v80[8]; // [rsp+90h] [rbp-70h] BYREF
  char v81[8]; // [rsp+98h] [rbp-68h] BYREF
  char *v82; // [rsp+A0h] [rbp-60h] BYREF
  char *v83; // [rsp+A8h] [rbp-58h] BYREF
  char *v84; // [rsp+B0h] [rbp-50h] BYREF
  char *v85; // [rsp+B8h] [rbp-48h] BYREF
  LPVOID lpMem; // [rsp+C0h] [rbp-40h]
  _OWORD *v87; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR *v88; // [rsp+D0h] [rbp-30h]
  _OWORD v89[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  unsigned int *v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  unsigned int *v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+150h] [rbp+50h] BYREF

  v3 = 0LL;
  v79 = Blink;
  v4 = a2;
  v73 = a2;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 110);
  if ( *((_QWORD *)a1 + 333) == v3 )
  {
    v70 = 0;
    v71 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_RENDER_CVIPASS_Start,
        (__int64)Blink,
        1u,
        &v90);
    *((_DWORD *)a1 + 942) = 0x7FFFFFFF;
    v6 = (CVisual **)*((_QWORD *)a1 + 598);
    v7 = (CVisual **)*((_QWORD *)a1 + 599);
    v72 = *((_DWORD *)a1 + 936);
    while ( 1 )
    {
      if ( v6 == v7 )
      {
        v8 = *((_QWORD *)a1 + 515);
        v9 = *((_QWORD *)a1 + 516);
        v10 = v71;
        while ( v8 != v9 )
        {
          if ( (int)CThreadContext::RegisterGraphWalkRoot(*(const void **)v8) >= 0 )
          {
            if ( !*(_BYTE *)(v8 + 32)
              || (SubtreeZ = CVisual::GetSubtreeZ(*(CVisual **)v8, a1, v72),
                  !(unsigned __int8)COcclusionContext::IsOccluded((char *)a1 + 2648, v8 + 16, SubtreeZ, 0LL)) )
            {
              v60 = (__int64 *)(*(_QWORD *)(v8 + 8) + 80LL);
              v61 = *v60;
              *(_QWORD *)&v74.left = 0LL;
              (*(void (__fastcall **)(__int64 *, __int64, struct D2D_RECT_F *))(v61 + 112))(v60, v4, &v74);
              ++v10;
              if ( *(_QWORD *)&v74.left )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v74.left + 16LL))(*(_QWORD *)&v74.left);
            }
            CThreadContext::UnregisterGraphWalkRoot();
          }
          v8 += 40LL;
        }
        v71 = v10;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_RENDER_CVIPASS_Stop,
            (__int64)Blink,
            1u,
            &v98);
        v11 = v70;
        LODWORD(v3) = v71;
        if ( (v70 || v71) && (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
        {
          v70 = v71;
          v76 = *((_QWORD *)a1 + 329);
          v72 = v11;
          v92 = &v76;
          v94 = &v72;
          v96 = &v70;
          v93 = 8LL;
          v95 = 4LL;
          v97 = 4LL;
          LODWORD(v3) = McGenEventWrite_EventWriteTransfer(
                          Microsoft_Windows_Dwm_Compositor_Context,
                          &RenderCVIs,
                          (__int64)Blink,
                          4u,
                          &v91);
        }
        return v3;
      }
      v12 = *v6;
      lpMem = v89;
      v90.Ptr = 0LL;
      v87 = v89;
      *(_QWORD *)&v90.Size = a1;
      v88 = &v90;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v77, (__int64)v89, 1LL);
      v74 = v77;
      v75 = v78;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v74, v13);
      ++v87;
      v89[0] = v90;
      v14 = (struct _LIST_ENTRY *)*((_QWORD *)v87 - 1);
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v14->Flink[12].Flink)(v14) )
      {
        v15 = (struct _LIST_ENTRY *)((char *)v12 + 320);
LABEL_17:
        if ( v15 )
        {
          Flink = (struct D2D_RECT_F *)v15[9].Flink;
          Blink = (struct D2D_RECT_F *)v15[9].Blink;
          v17 = v87;
          v18 = lpMem;
          while ( 1 )
          {
            if ( Flink == Blink )
            {
              v21 = 0LL;
              goto LABEL_29;
            }
            v19 = *(_QWORD **)(*(_QWORD *)&Flink->left + 1616LL);
            if ( *(_QWORD *)(*(_QWORD *)&Flink->left + 1624LL) - (_QWORD)v19 == (char *)v87 - (_BYTE *)lpMem )
              break;
LABEL_107:
            Flink = (struct D2D_RECT_F *)((char *)Flink + 8);
          }
          v20 = (char *)((_BYTE *)lpMem - (_BYTE *)v19);
          while ( v19 != *(_QWORD **)(*(_QWORD *)&Flink->left + 1624LL) )
          {
            if ( *v19 != *(_QWORD *)&v20[(_QWORD)v19] || v19[1] != *(_QWORD *)&v20[(_QWORD)v19 + 8] )
              goto LABEL_107;
            v19 += 2;
          }
          *(_QWORD *)(*(_QWORD *)&Flink->left + 1776LL) = v15[15].Blink[1].Blink[55].Flink;
          v21 = *(_QWORD *)&Flink->left;
          goto LABEL_27;
        }
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v12);
        if ( TreeDataListHead )
        {
          for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
          {
            v15 = i - 22;
            if ( i[2].Flink == v14 )
              goto LABEL_17;
          }
        }
      }
      v21 = 0LL;
LABEL_27:
      v18 = lpMem;
      v17 = v87;
LABEL_29:
      v22 = v17 - v18;
      if ( v22 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v77, (__int64)v18, v22);
        v18 = lpMem;
        v87 -= v23;
      }
      lpMem = 0LL;
      if ( v18 != v89 && v18 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v18);
      }
      if ( !v21 )
        goto LABEL_60;
      v24 = *(_QWORD *)(v21 + 120) == 0LL;
      v25 = *(struct D2D_RECT_F *)(v21 + 96);
      v74 = v25;
      if ( v24
        || (float)(*(float *)(v21 + 104) - *(float *)(v21 + 96)) < 1.0
        || (float)(*(float *)(v21 + 108) - *(float *)(v21 + 100)) < 1.0
        || (v26 = *(float *)(v21 + 1680), v27 = *(float *)(v21 + 1672), v26 < v27)
        || (v28 = *(float *)(v21 + 1684), v28 < *(float *)(v21 + 1676))
        || (float)(v26 - v27) < 1.0
        || (float)(v28 - *(float *)(v21 + 1676)) < 1.0
        || *(float *)(v21 + 112) <= 0.5
        || *(float *)(v21 + 116) <= 0.5 )
      {
LABEL_57:
        v37 = 0;
        goto LABEL_58;
      }
      v29 = *(__int64 **)(v21 + 168);
      v30 = *(__int64 **)(v21 + 176);
      v31 = *((_BYTE *)g_pComposition + 6458);
      while ( v29 != v30 )
      {
        v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v29 + 8) + 144LL))(*(_QWORD *)(*v29 + 8));
        (*(void (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)(v32 + 16) + 120LL))(v32 + 16, &v77);
        if ( *(_QWORD *)&v77.left != *(_QWORD *)v73
          || LODWORD(v77.right) != -1 && LODWORD(v77.right) != *(_DWORD *)(v73 + 8) && *(_DWORD *)(v73 + 8) != -3
          || (*(float *)&v78 != 0.0) != (*(float *)(v73 + 16) != 0.0)
          || BYTE4(v78) && !*(_BYTE *)(v73 + 20) )
        {
          goto LABEL_122;
        }
        v33 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v29 + 8) + 144LL))(*(_QWORD *)(*v29 + 8));
        v34 = *v33;
        if ( v31 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v34 + 160))(v33) )
          {
LABEL_52:
            v35 = *v29;
            if ( v35 && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 8) + 24LL))(*(_QWORD *)(v35 + 8)) >= 0 )
            {
              v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 8) + 144LL))(*(_QWORD *)(v35 + 8));
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 176LL))(v36) )
                goto LABEL_135;
              v39 = 0LL;
              if ( g_pComposition )
                v39 = *((_QWORD *)g_pComposition + 110);
              if ( (unsigned __int64)(v39 - *(_QWORD *)(v35 + 48)) < 5 )
              {
LABEL_135:
                if ( !*(_BYTE *)(v35 + 56) )
                {
                  v4 = v73;
                  goto LABEL_57;
                }
              }
            }
            break;
          }
          ++v29;
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v34 + 176))(v33) )
            goto LABEL_52;
LABEL_122:
          ++v29;
        }
      }
      v4 = v73;
      v37 = 1;
LABEL_58:
      if ( dword_1803DC8B8 )
      {
        if ( v37 )
        {
          v63 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v76, &v74);
          Bounds = (const struct D2D_RECT_F *)CTreeDirty::GetBounds((char *)a1 + 112, &v98);
          v65 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v81, Bounds);
          v66 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v80, v79);
          v67 = DwmDbg::DbgString::DbgString(
                  &v82,
                  "renderTarget=[%s], dirtyRegion=[%s], bviBounds=[%s]",
                  *(const char **)v66,
                  v65,
                  v63);
          v68 = DwmDbg::DbgString::DbgString(&v83, "BVI-AttemptPreRender");
          CBackdropVisualImage::LogEtwEvent(v21, v68, v67);
          std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v80);
          std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v81);
          std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v76);
          goto LABEL_73;
        }
      }
      else
      {
        if ( !v37 )
          goto LABEL_60;
LABEL_73:
        v42 = 0.0;
        v43 = 0.0;
        v44 = 0.0;
        v45.m128_i32[0] = 0;
        if ( *((_BYTE *)a1 + 2436) )
        {
          v47 = (const struct D2D_RECT_F *)((char *)a1 + 2420);
          if ( a1 == (struct CVisualTree *)-2420LL )
            goto LABEL_126;
          v46 = 1LL;
        }
        else
        {
          v46 = *((unsigned int *)a1 + 32);
          v47 = (const struct D2D_RECT_F *)((char *)a1 + 132);
          if ( a1 == (struct CVisualTree *)-132LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
          {
LABEL_126:
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
        }
        if ( v47 != &v47[v46] )
        {
          do
          {
            if ( v43 <= v45.m128_f32[0] || v42 <= v44 )
            {
              if ( IsEmpty(v47) || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
              {
                v42 = 0.0;
                v43 = 0.0;
                v44 = 0.0;
                v45.m128_i32[0] = 0;
              }
              else
              {
                v45 = *v49;
                LODWORD(v42) = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
                LODWORD(v43) = _mm_shuffle_ps(*v49, *v49, 170).m128_u32[0];
                LODWORD(v44) = _mm_shuffle_ps(*v49, *v49, 85).m128_u32[0];
              }
            }
            else if ( !IsEmpty(v47) )
            {
              if ( v45.m128_f32[0] > v49->m128_f32[0] )
                v45.m128_i32[0] = v49->m128_i32[0];
              if ( v44 > v49->m128_f32[1] )
                v44 = v49->m128_f32[1];
              if ( v49->m128_f32[2] > v43 )
                v43 = v49->m128_f32[2];
              if ( v49->m128_f32[3] > v42 )
                v42 = v49->m128_f32[3];
            }
            v47 = (const struct D2D_RECT_F *)&v49[1];
          }
          while ( v47 != v48 );
          if ( v43 > v45.m128_f32[0] && v42 > v44 )
          {
            v50 = _mm_shuffle_ps((__m128)v25, (__m128)v25, 170).m128_f32[0];
            if ( v50 > v25.left )
            {
              v51 = _mm_shuffle_ps((__m128)v25, (__m128)v25, 255).m128_f32[0];
              v52 = _mm_shuffle_ps((__m128)v25, (__m128)v25, 85).m128_f32[0];
              if ( v51 > v52 && v43 > v25.left && v50 > v45.m128_f32[0] && v42 > v52 && v51 > v44 )
              {
                right = v79->right;
                if ( right > v79->left )
                {
                  bottom = v79->bottom;
                  top = v79->top;
                  if ( bottom > top && right > v25.left && v50 > v79->left && bottom > v52 && v51 > top )
                  {
                    v56 = CVisual::GetSubtreeZ(*v6, a1, v72);
                    v74 = *(struct D2D_RECT_F *)(v21 + 96);
                    if ( !(unsigned __int8)COcclusionContext::IsOccluded((char *)a1 + 2648, &v74, v56, 0LL) )
                    {
                      v57 = *(_QWORD *)(v21 + 80);
                      *(_QWORD *)&v74.left = 0LL;
                      if ( (*(int (__fastcall **)(__int64, __int64, struct D2D_RECT_F *))(v57 + 104))(
                             v21 + 80,
                             v4,
                             &v74) >= 0 )
                      {
                        v58 = DwmDbg::DbgString::DbgString(&v84, word_1802F327A);
                        v59 = DwmDbg::DbgString::DbgString(&v85, "BVI-SuccessfulPreRender");
                        CBackdropVisualImage::LogEtwEvent(v21, v59, v58);
                        ++v70;
                      }
                      if ( *(_QWORD *)&v74.left )
                        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v74.left + 16LL))(*(_QWORD *)&v74.left);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_60:
      ++v6;
    }
  }
  return v3;
}
