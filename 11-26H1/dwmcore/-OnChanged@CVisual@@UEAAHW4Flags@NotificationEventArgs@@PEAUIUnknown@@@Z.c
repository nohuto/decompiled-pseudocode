/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000
 * Callers:
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180173EF0 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18001F6E0 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BB30 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AFDF0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800CAED0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x1800DF600 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x18014C050 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18018BC24 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, unsigned int a2, int (__fastcall ***a3)(_QWORD, GUID *, _QWORD *))
{
  int (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // r14
  unsigned int v4; // ebx
  int v6; // esi
  char v7; // bl
  bool v8; // dl
  int v10; // eax
  int (__fastcall **v11)(_QWORD, GUID *, _QWORD *); // rax
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm1_4
  __int64 v14; // r8
  _BYTE *v15; // rbx
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // r14d
  _QWORD *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 *v22; // r13
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // r15d
  __int64 *v31; // r13
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 *v34; // rcx
  struct TransformParentData *TransformParentDataInternal; // rax
  int (__fastcall ***v36)(_QWORD, GUID *, _QWORD *); // rbx
  int (__fastcall ***v37)(_QWORD, GUID *, _QWORD *); // rcx
  struct CTransform3D *Transform3DEffectNoRef; // rbx
  int v39; // eax
  int (__fastcall ***v40)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall ***v41)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-49h] BYREF
  unsigned int v42; // [rsp+28h] [rbp-41h]
  unsigned __int64 v43; // [rsp+30h] [rbp-39h] BYREF
  int (__fastcall ***v44)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-31h]
  _QWORD v45[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE *v46; // [rsp+50h] [rbp-19h]
  _BYTE *v47; // [rsp+58h] [rbp-11h]
  __int64 *v48; // [rsp+60h] [rbp-9h]
  _BYTE v49[16]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v50; // [rsp+78h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v44 = a3;
  v3 = a3;
  v42 = a2;
  v4 = a2;
  if ( a2 == 1 )
  {
LABEL_2:
    v6 = 4;
LABEL_3:
    if ( (*(_BYTE *)(a1 + 96) & 0x10) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1);
      v8 = v7 && !CVisual::HasSingleD2DBitmapOrPrimitiveGroup((CVisual *)a1);
      if ( (BYTE1(*(_DWORD *)(a1 + 96)) & 1) != v7 || (((unsigned __int16)(*(int *)(a1 + 96) >> 8) >> 8) & 1) != v8 )
        v6 |= 0x10u;
      v4 = v42;
    }
  }
  else
  {
    if ( a2 == 5 )
    {
      CVisual::ClearContentTreeDataCaches((CVisual *)a1);
      return 0LL;
    }
    switch ( a2 )
    {
      case 3u:
        v6 = 1;
        break;
      case 4u:
        CVisual::OnClipChanged((CVisual *)a1);
        goto LABEL_17;
      case 6u:
        CVisual::ClearContentTreeDataCaches((CVisual *)a1);
        goto LABEL_2;
      case 0xBu:
        v6 = 2;
        goto LABEL_3;
      case 0xFu:
        CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment((CVisual *)a1);
        return 0LL;
      case 0x10u:
        CVisual::ClearContentTreeDataCaches((CVisual *)a1);
        v6 = 5;
        break;
      default:
LABEL_17:
        v6 = 5;
        break;
    }
  }
  if ( *(_QWORD *)(a1 + 248) )
  {
    CVisual::UpdateContentFlags((CVisual *)a1);
    if ( v4 <= 0x10 && *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 248) == v3 )
    {
      v10 = 65602;
      if ( _bittest(&v10, v4) )
      {
        v11 = *v3;
        v41 = 0LL;
        if ( (*v11)(v3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v41) >= 0 )
        {
          v12 = *(_DWORD *)(a1 + 140);
          v13 = *(_DWORD *)(a1 + 144);
          v45[0] = &CRectanglesShape::`vftable';
          v46 = v49;
          v47 = v49;
          v48 = &v50;
          v43 = __PAIR64__(v13, v12);
          v45[1] = 0LL;
          v50 = 0LL;
          if ( (unsigned __int8)(*v41)[3](v41, (GUID *)&v43, v45) )
          {
            v15 = v46;
            v16 = v47;
            while ( v15 != v16 )
            {
              LOBYTE(v14) = 1;
              CVisual::AddAdditionalDirtyRect(a1, v15, v14);
              v15 += 16;
            }
            v6 &= ~4u;
          }
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v45);
        }
        if ( v41 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v41)[2])(v41);
      }
    }
  }
  if ( v6 )
  {
    v17 = *(_QWORD *)(a1 + 32);
    v18 = v6 | 0x10;
    LODWORD(v41) = !(v6 & 1);
    if ( (v6 & 1) == 0 )
      v18 = v6;
    if ( (v17 & 3) != 0 )
    {
      if ( (v17 & 3) == 1 )
      {
        v19 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_37;
      }
      if ( (v17 & 3) == 2 )
      {
        v19 = 0LL;
        goto LABEL_37;
      }
      if ( (v17 & 3) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v19 = (_QWORD *)(a1 + 32);
LABEL_37:
    v20 = detail::pointer_buffer_impl<CResource *,0>::last(a1 + 32);
    v21 = (unsigned int)v41;
    v22 = (__int64 *)(a1 + 88);
    v23 = (_QWORD *)v20;
    while ( v19 != v23 )
    {
      v22 = (__int64 *)(a1 + 88);
      if ( *v19 != *(_QWORD *)(a1 + 88) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v19 + 80LL))(*v19, v21, a1);
      ++v19;
    }
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    *(_BYTE *)(a1 + 96) |= v18;
    v25 = (__int64 *)(a1 + 88);
    v43 = v24;
    if ( (v18 & 0xC) != 0 )
    {
      v25 = v22;
      v18 = v18 & 0xFFFFFF73 | 0x80;
      if ( v24 )
      {
        ++*(_DWORD *)(v24 + 28);
        v25 = (__int64 *)(a1 + 88);
      }
    }
    if ( (v18 & 2) != 0 )
    {
      v25 = (__int64 *)(a1 + 88);
      v18 = v18 & 0xFFFFFFBD | 0x40;
    }
    v26 = *v25;
    v27 = a1;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v27 + 102) & 0x20) == 0 || !v26 || (v18 & *(char *)(v26 + 96)) == v18 )
      {
        v3 = v44;
        break;
      }
      *(_BYTE *)(v26 + 96) |= v18;
      if ( (*(_QWORD *)(v26 + 32) & 3) == 0 )
        goto LABEL_60;
      switch ( *(_QWORD *)(v26 + 32) & 3LL )
      {
        case 1LL:
          v28 = (_QWORD *)(*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
          break;
        case 2LL:
          v28 = 0LL;
          break;
        case 3LL:
LABEL_60:
          v28 = (_QWORD *)(v26 + 32);
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v29 = detail::pointer_buffer_impl<CResource *,0>::last(v26 + 32);
      v30 = (unsigned int)v41;
      v31 = (__int64 *)(v26 + 88);
      v32 = (_QWORD *)v29;
      while ( v28 != v32 )
      {
        v31 = (__int64 *)(v26 + 88);
        if ( *v28 != *(_QWORD *)(v26 + 88) )
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v28 + 80LL))(*v28, v30, v26);
        ++v28;
      }
      v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 160LL))(v26);
      v34 = (__int64 *)(v26 + 88);
      if ( v33 )
      {
        v34 = v31;
        if ( v43 != v33 )
        {
          if ( (v18 & 0x80u) != 0 )
            ++*(_DWORD *)(v33 + 24);
          v43 = v33;
          v34 = (__int64 *)(v26 + 88);
        }
      }
      v27 = v26;
      v26 = *v34;
    }
  }
  if ( v42 != 2 )
  {
    if ( v3 )
    {
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal((CVisual *)a1);
      if ( TransformParentDataInternal )
      {
        if ( v3 == *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))TransformParentDataInternal )
          CVisual::OnOuterTransformChanged((CVisual *)a1);
      }
    }
    return 0LL;
  }
  v36 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 232);
  if ( v36 )
  {
    v41 = 0LL;
    if ( !memcmp_0(&GUID_00000000_0000_0000_c000_000000000046, &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc, 0x10uLL) )
    {
      v41 = v36;
    }
    else if ( !memcmp_0(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046, 0x10uLL) )
    {
      v41 = v36;
    }
    else if ( (*v36)[6](v36, &GUID_00000000_0000_0000_c000_000000000046, &v41) < 0 )
    {
      v37 = 0LL;
      v41 = 0LL;
LABEL_78:
      if ( v37 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v37)[2])(v37);
      goto LABEL_80;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v36 + 1));
    v37 = v41;
    if ( v3 == v41 )
    {
      CVisual::OnOuterTransformChanged((CVisual *)a1);
      v37 = v41;
    }
    goto LABEL_78;
  }
LABEL_80:
  if ( CVisual::GetTransform3DEffectNoRef((CVisual *)a1) )
  {
    v41 = 0LL;
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
    if ( v41 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v41)[2])(v41);
    v39 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
            Transform3DEffectNoRef,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v41);
    v40 = v41;
    if ( v39 >= 0 && v3 == v41 )
    {
      CVisual::OnInnerTransformChanged((CVisual *)a1);
      v40 = v41;
    }
    if ( v40 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v40)[2])(v40);
  }
  return 0LL;
}
