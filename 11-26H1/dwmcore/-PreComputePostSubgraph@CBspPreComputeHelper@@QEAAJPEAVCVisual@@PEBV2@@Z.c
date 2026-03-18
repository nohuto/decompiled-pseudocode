/*
 * XREFs of ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180064250 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180071C64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180071FB8 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x180071FE8 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18007202C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x1800733C8 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1800734A8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x180073608 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1800741A4 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800744EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180075BC8 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AFD90 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x1800C88D0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ??1CBspPolygonListBuilder@@QEAA@XZ @ 0x180195694 (--1CBspPolygonListBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::PreComputePostSubgraph(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisual *a3)
{
  unsigned int v3; // ebx
  _DWORD *v8; // rax
  int v9; // r15d
  int v10; // ebx
  bool v11; // r12
  __int64 v12; // rax
  char v13; // r12
  bool v14; // r15
  bool v15; // al
  int v16; // r15d
  int v17; // eax
  const struct CMILMatrix *v18; // r9
  void *v19; // rax
  int v20; // eax
  char IsFacingUser; // r13
  _DWORD *v22; // rcx
  int v23; // eax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  char *v30; // rax
  char v31; // bl
  unsigned int *v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // r9
  unsigned int *v36; // r9
  __int64 v37; // r8
  int v38; // r10d
  int v39; // r11d
  int PolygonNoRef; // eax
  struct CPolygon *Ptr; // r15
  CBspNode *v42; // r12
  int v43; // eax
  int v44; // eax
  CBspNode *v45; // rax
  int v46; // r9d
  CSparseStorage::AllocatedStorage *v47; // rcx
  float v48; // xmm1_4
  int v49; // eax
  int v50; // eax
  bool v51; // r15
  __int64 v52; // r8
  bool v53; // al
  int v54; // eax
  __int64 *v55; // rdx
  __int64 v56; // rdx
  int v57; // eax
  void *v58; // rdi
  HANDLE v59; // rax
  struct CEffect *v60; // rax
  struct CEffect *v61; // rax
  struct CEffect *EffectInternal; // rax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rcx
  void *v76; // r15
  HANDLE ProcessHeap; // rax
  int v78; // eax
  unsigned int v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+60h] [rbp-A0h]
  __m128 v81; // [rsp+70h] [rbp-90h] BYREF
  __int128 v82; // [rsp+80h] [rbp-80h]
  __m256i lpMem; // [rsp+90h] [rbp-70h] BYREF
  int v84; // [rsp+B0h] [rbp-50h]
  _OWORD v85[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v86; // [rsp+100h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+110h] [rbp+10h] BYREF

  v3 = 0;
  if ( !*((_DWORD *)this + 20) )
    return v3;
  v8 = (_DWORD *)((char *)a3 + 108);
  if ( !a3 || *v8 != 1 )
  {
    if ( *((_DWORD *)a2 + 27) != 1 )
      return v3;
    v14 = a3 && *v8 == 1;
    v15 = 1;
    if ( !(*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 232LL))(a2) )
    {
      if ( (**((_DWORD **)a2 + 28) & 0x1000000) == 0
        || (EffectInternal = CVisual::GetEffectInternal(a2),
            !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 64LL))(
               EffectInternal,
               51LL)) )
      {
        v15 = 0;
      }
    }
    if ( v14 )
    {
      if ( !v15 )
        return v3;
    }
    else if ( !(unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a2 + 10) )
    {
      return v3;
    }
    if ( !a3 || *((_DWORD *)a3 + 27) != 1 )
      goto LABEL_20;
  }
  v9 = *((_DWORD *)a2 + 27);
  v10 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a2 + 10);
  v11 = 0;
  if ( (**((_DWORD **)a2 + 28) & 0x1000000) != 0 )
  {
    v60 = CVisual::GetEffectInternal(a2);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v60 + 64LL))(v60, 51LL) )
      v11 = 1;
  }
  if ( (v12 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 232LL))(a2), v9 != 1) && v10 || v11 || v12 )
    v13 = 1;
  else
LABEL_20:
    v13 = 0;
  v80 = v13;
  v16 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 264LL))(a2) && !v13 )
    goto LABEL_57;
  v17 = *((_DWORD *)this + 14);
  v18 = (const struct CMILMatrix *)&CMILMatrix::Identity;
  if ( v17 )
    v19 = (void *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v17 - 1));
  else
    v19 = &CMILMatrix::Identity;
  v81 = *(__m128 *)v19;
  v82 = *((_OWORD *)v19 + 1);
  lpMem = *(__m256i *)((_BYTE *)v19 + 1);
  v84 = *((_DWORD *)v19 + 16);
  v20 = *((_DWORD *)this + 20);
  if ( v20 )
    v18 = (const struct CMILMatrix *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v20 - 1));
  CMILMatrix::Multiply(v18, &v81, (struct CMILMatrix *)&v81);
  IsFacingUser = CMILMatrix::IsFacingUser((CMILMatrix *)&v81);
  v22 = 0LL;
  v23 = *((_DWORD *)this + 26);
  if ( v23 )
    v22 = (_DWORD *)(*((_QWORD *)this + 12) + 4LL * (unsigned int)(v23 - 1));
  if ( IsFacingUser )
    goto LABEL_30;
  if ( *v22 == 1 )
  {
    if ( !v13 )
      goto LABEL_57;
  }
  else if ( !*v22 )
  {
LABEL_30:
    LOBYTE(v16) = 1;
  }
  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 72));
  v26 = *((_DWORD *)this + 56);
  v87.Ptr = 0LL;
  v27 = *((_OWORD *)TopByReference + 1);
  v85[0] = *(_OWORD *)TopByReference;
  v28 = *((_OWORD *)TopByReference + 2);
  v85[1] = v27;
  v29 = *((_OWORD *)TopByReference + 3);
  v86 = *((_DWORD *)TopByReference + 16);
  v30 = 0LL;
  v85[2] = v28;
  v85[3] = v29;
  if ( v26 )
    v30 = (char *)(*((_QWORD *)this + 27) + (unsigned int)(v26 - 1));
  v31 = *v30;
  v32 = 0LL;
  v33 = *((_DWORD *)this + 38);
  if ( v33 )
    v32 = (unsigned int *)(*((_QWORD *)this + 18) + 4LL * (unsigned int)(v33 - 1));
  v34 = *((_DWORD *)this + 62);
  v35 = 0LL;
  if ( v34 )
    v35 = *((_QWORD *)this + 30) + 4LL * (unsigned int)(v34 - 1);
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 192, v25, *v32, v35);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, v85, v37, *v36, v37, v38, v39, (_BYTE)v16, v31, v13, &v87);
  Ptr = (struct CPolygon *)v87.Ptr;
  v3 = PolygonNoRef;
  if ( PolygonNoRef >= 0 )
  {
    v42 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((__int64)this);
    if ( v42 )
      goto LABEL_39;
    v44 = *((_DWORD *)this + 2);
    if ( v44 )
      *((_DWORD *)this + 2) = v44 - 1;
    v45 = (CBspNode *)CBspNode::operator new();
    if ( !v45 || (v87.Ptr = (ULONGLONG)CBspNode::CBspNode(v45, IsFacingUser), (v42 = (CBspNode *)v87.Ptr) == 0LL) )
    {
      v3 = -2147024882;
      v46 = -2147024882;
      v79 = 455;
LABEL_51:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v79, 0LL);
      goto LABEL_40;
    }
    v43 = CWatermarkStack<CBspNode *,64,2,10>::Push((__int64)this, &v87);
    v3 = v43;
    if ( v43 >= 0 )
    {
LABEL_39:
      v43 = CBspNode::PushPolygon(v42, Ptr, IsFacingUser);
      v3 = v43;
      if ( v43 >= 0 )
      {
LABEL_40:
        v13 = v80;
        goto LABEL_41;
      }
      v79 = 460;
    }
    else
    {
      v79 = 457;
    }
    v46 = v43;
    goto LABEL_51;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PolygonNoRef, 0x1BCu, 0LL);
LABEL_41:
  if ( Ptr )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v16 = v3;
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x11Eu, 0LL);
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x180u, 0LL);
    return v3;
  }
LABEL_57:
  v3 = v16;
  if ( v16 < 0 )
    goto LABEL_45;
  if ( *((_DWORD *)a2 + 27) != 1 )
    goto LABEL_59;
  v51 = a3 && *((_DWORD *)a3 + 27) == 1;
  v53 = 1;
  if ( !(*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 232LL))(a2) )
  {
    if ( (**((_DWORD **)a2 + 28) & 0x1000000) == 0
      || (v61 = CVisual::GetEffectInternal(a2),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v61 + 64LL))(v61, 51LL)) )
    {
      v53 = 0;
    }
  }
  if ( !v51 )
  {
    if ( (unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a2 + 10) )
      goto LABEL_87;
LABEL_59:
    if ( a3 && *((_DWORD *)a3 + 27) == 1 )
    {
      if ( (*((_BYTE *)a2 + 101) & 8) != 0 )
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 216);
      v47 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)a2 + 27);
      if ( (*((_DWORD *)v47 + 1) & 0x8000000) != 0 )
        v48 = *((float *)CSparseStorage::AllocatedStorage::FindSlot(v47, 5u) + 1);
      else
        v48 = FLOAT_1_0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v48 - 1.0) & _xmm) >= 0.0000011920929 )
        CWatermarkStack<void *,2,2,10>::Pop((char *)this + 192);
      if ( (*((_DWORD *)a2 + 24) & 0x4000000) != 0 )
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 168);
      if ( (*((_DWORD *)a2 + 24) & 0x2000000) != 0 )
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 144);
      if ( (*((_DWORD *)a2 + 24) & 0x1000000) != 0 )
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 120);
      if ( (*((_DWORD *)a2 + 24) & 0x10000000) != 0 )
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 96);
      v49 = *((_DWORD *)this + 20);
      if ( v49 )
        *((_DWORD *)this + 20) = v49 - 1;
      v50 = *((_DWORD *)this + 62);
      if ( v50 )
        *((_DWORD *)this + 62) = v50 - 1;
    }
    return v3;
  }
  if ( !v53 )
    goto LABEL_59;
LABEL_87:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_P3D_BUILDING_BSPTREE_Stop,
      v52,
      1u,
      &v87);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_POLYGONLIST_Start,
        v52,
        1u,
        &v87);
  }
  v54 = *((_DWORD *)this + 2);
  v55 = 0LL;
  memset(&lpMem, 0, 24);
  HIDWORD(v82) = 1;
  v81.m128_i32[1] = 0;
  v81.m128_u64[1] = 0LL;
  *(_QWORD *)&v82 = 0LL;
  lpMem.m256i_i64[3] = (__int64)a2;
  if ( v54 )
    v55 = (__int64 *)(*(_QWORD *)this + 8LL * (unsigned int)(v54 - 1));
  v56 = *v55;
  if ( !v56 )
    goto LABEL_112;
  v81.m128_u64[1] = v56;
  DWORD2(v82) = 0;
  v57 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>((__int64)&v81, v56, v52, (__int64)&v81);
  v3 = v57;
  if ( v57 >= 0 )
  {
    v81.m128_i32[1] = 0;
    v81.m128_u64[1] = 0LL;
    *(_QWORD *)&v82 = 0LL;
    lpMem.m256i_i32[2] = 0;
    CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize((__int64)&lpMem);
LABEL_112:
    v63 = *((_DWORD *)this + 62);
    if ( v63 )
      *((_DWORD *)this + 62) = v63 - 1;
    v64 = *((_DWORD *)this + 56);
    if ( v64 )
      *((_DWORD *)this + 56) = v64 - 1;
    v65 = *((_DWORD *)this + 50);
    if ( v65 )
      *((_DWORD *)this + 50) = v65 - 1;
    v66 = *((_DWORD *)this + 44);
    if ( v66 )
      *((_DWORD *)this + 44) = v66 - 1;
    v67 = *((_DWORD *)this + 38);
    if ( v67 )
      *((_DWORD *)this + 38) = v67 - 1;
    v68 = *((_DWORD *)this + 32);
    if ( v68 )
      *((_DWORD *)this + 32) = v68 - 1;
    v69 = *((_DWORD *)this + 26);
    if ( v69 )
      *((_DWORD *)this + 26) = v69 - 1;
    v70 = *((_DWORD *)this + 20);
    if ( v70 )
      *((_DWORD *)this + 20) = v70 - 1;
    v71 = *((_DWORD *)this + 14);
    if ( v71 )
      *((_DWORD *)this + 14) = v71 - 1;
    v72 = *((_DWORD *)this + 8);
    if ( v72 )
      *((_DWORD *)this + 8) = v72 - 1;
    v73 = *((_DWORD *)this + 2);
    if ( v73 )
    {
      v74 = v73 - 1;
      *((_DWORD *)this + 2) = v74;
      v75 = *(_QWORD *)(*(_QWORD *)this + 8LL * v74);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
    }
    if ( *((_DWORD *)this + 20) )
    {
      if ( v13 )
      {
        v78 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(this, a2, 1);
        v3 = v78;
        if ( v78 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v78, 0x195u, 0LL);
          CBspPolygonListBuilder::~CBspPolygonListBuilder((CBspPolygonListBuilder *)&v81);
          return v3;
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop,
        v52,
        1u,
        &v87);
    v76 = (void *)lpMem.m256i_i64[0];
    if ( lpMem.m256i_i64[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v76);
    }
    goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x2Eu, 0LL);
  v81.m128_i32[1] = 0;
  v81.m128_u64[1] = 0LL;
  *(_QWORD *)&v82 = 0LL;
  lpMem.m256i_i32[2] = 0;
  CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize((__int64)&lpMem);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x17u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x18Du, 0LL);
  v58 = (void *)lpMem.m256i_i64[0];
  if ( lpMem.m256i_i64[0] )
  {
    v59 = GetProcessHeap();
    HeapFree(v59, 0, v58);
  }
  return v3;
}
