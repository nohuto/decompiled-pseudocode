/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A03C0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800D1E64 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800118CC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800407B4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180040BFC (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180065C7C (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18006D214 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180073820 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x180074AD0 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18007BBCC (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A0DF0 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CBaseGeometryProxy *a4)
{
  __m128i v8; // xmm6
  int v9; // ebx
  char v10; // al
  _BYTE *v11; // rbx
  CBaseObject *v12; // rcx
  int updated; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v17; // rdx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  float v24; // xmm2_4
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // eax
  struct CVisual *v29; // rdx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  CAccentTransition *v33; // rcx
  int SolidFillOpacity; // [rsp+20h] [rbp-48h]
  struct _MARGINS v35; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+70h] [rbp+8h] BYREF

  v37 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v35 = 0LL;
  CVisual::SetInsetFromParent((struct _MARGINS *)this, &v35);
  *(struct tagRECT *)((char *)this + 536) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v26 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    v27 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 97) >= 0 )
      v27 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    *((_DWORD *)this + 136) = *((_DWORD *)this + 134) + v27;
    v28 = 0;
    if ( v26 >= 0 )
      v28 = v26;
    *((_DWORD *)this + 137) = *((_DWORD *)this + 135) + v28;
    CDesktopManager::SetBackStop(this);
  }
  v8 = *a3;
  v35 = (struct _MARGINS)v8;
  v9 = _mm_cvtsi128_si32(v8);
  if ( (unsigned int)(v9 - 2) <= 1 )
    goto LABEL_3;
  if ( v9 == 4 )
  {
LABEL_21:
    if ( *((_DWORD *)this + 60) == v9 )
    {
      v10 = 0;
LABEL_5:
      v11 = (char *)this + 244;
      if ( (*((_BYTE *)this + 244) & 2) != 0 && v10 )
      {
        CContainerVisual::RemoveAllChildren(this);
        v18 = (CBaseObject *)*((_QWORD *)this + 35);
        if ( v18 )
        {
          CBaseObject::Release(v18);
          *((_QWORD *)this + 35) = 0LL;
          v11 = (char *)this + 244;
        }
        v19 = (CBaseObject *)*((_QWORD *)this + 36);
        if ( v19 )
        {
          CBaseObject::Release(v19);
          *((_QWORD *)this + 36) = 0LL;
        }
        v20 = (CBaseObject *)*((_QWORD *)this + 37);
        if ( v20 )
        {
          CBaseObject::Release(v20);
          *((_QWORD *)this + 37) = 0LL;
        }
      }
      *((__m128i *)this + 15) = v8;
      *((_DWORD *)this + 78) = *((_DWORD *)this + 62);
      if ( (*v11 & 1) != 0 )
        CAccent::s_clrCurrentAccentBackground = *((_DWORD *)this + 79);
      v12 = (CBaseObject *)*((_QWORD *)this + 37);
      if ( (unsigned int)(*((_DWORD *)this + 60) - 3) > 1 )
      {
        if ( v12 )
        {
          CBaseObject::Release(v12);
          *((_QWORD *)this + 37) = 0LL;
        }
        CContainerVisual::RemoveAllChildren(this);
        v23 = 0;
        if ( *((_DWORD *)this + 137) - *((_DWORD *)this + 135) >= 0 )
          v23 = *((_DWORD *)this + 137) - *((_DWORD *)this + 135);
        v24 = (float)v23;
        v25 = 0;
        if ( *((_DWORD *)this + 136) - *((_DWORD *)this + 134) >= 0 )
          v25 = *((_DWORD *)this + 136) - *((_DWORD *)this + 134);
        v35.cxLeftWidth = 0;
        v35.cxRightWidth = 0;
        *(float *)&v35.cyTopHeight = (float)v25 + 0.0;
        *(float *)&v35.cyBottomHeight = v24 + 0.0;
        SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(this, this, *((unsigned int *)this + 78), &v35);
        v14 = updated;
        if ( updated < 0 )
        {
          v17 = 1027LL;
          goto LABEL_29;
        }
      }
      else
      {
        if ( !v12 )
        {
          v21 = CAccentAcrylicBlurBehind::Create((struct CAccentAcrylicBlurBehind **)this + 37);
          v14 = v21;
          if ( v21 < 0 )
          {
            v22 = 1005LL;
LABEL_42:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v21,
              SolidFillOpacity);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v37);
            return v14;
          }
        }
        (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
      }
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
      goto LABEL_12;
    }
LABEL_4:
    v10 = 1;
    goto LABEL_5;
  }
  if ( v9 == 5 )
  {
LABEL_3:
    if ( v9 != 4 )
      goto LABEL_4;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 272) )
  {
    v33 = (CAccentTransition *)*((_QWORD *)this + 40);
    if ( v33 )
      CAccentTransition::StopAnimation(v33);
    v35.cyBottomHeight = 0;
    v8 = (__m128i)v35;
  }
  if ( v9 != *((_DWORD *)this + 60)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) != *((_DWORD *)this + 61)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) != *((_DWORD *)this + 62) )
  {
    *((__m128i *)this + 16) = v8;
    *((_BYTE *)this + 272) = 1;
    updated = CAccent::StartTransition(this);
    v14 = updated;
    if ( updated < 0 )
    {
      v17 = 959LL;
      goto LABEL_29;
    }
  }
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  if ( (*((_BYTE *)this + 244) & 2) != 0 )
  {
    CContainerVisual::RemoveAllChildren(this);
    v31 = (CBaseObject *)*((_QWORD *)this + 35);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *((_QWORD *)this + 35) = 0LL;
    }
    v32 = (CBaseObject *)*((_QWORD *)this + 36);
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *((_QWORD *)this + 36) = 0LL;
    }
  }
  v29 = (struct CVisual *)*((_QWORD *)this + 37);
  if ( v29 )
  {
    if ( *((_QWORD *)v29 + 3) )
    {
      v21 = CContainerVisual::RemoveChild(this, v29);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 974LL;
        goto LABEL_42;
      }
    }
  }
  v30 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v30 )
  {
    CBaseObject::Release(v30);
    *((_QWORD *)this + 37) = 0LL;
  }
LABEL_12:
  if ( (*((_BYTE *)this + 244) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    v14 = updated;
    if ( updated >= 0 )
    {
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
LABEL_16:
      v15 = *((_DWORD *)this + 61);
      if ( (v15 & 0x10) != 0 )
      {
        CAccent::SetClipRegion(this, a4);
      }
      else if ( (v15 & 0x200) != 0 && *((_QWORD *)this + 42) )
      {
        (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
      }
      v14 = 0;
      goto LABEL_19;
    }
    v17 = 1035LL;
  }
  else
  {
    updated = CAccent::_RemoveBorderShadowAtlas(this);
    v14 = updated;
    if ( updated >= 0 )
      goto LABEL_16;
    v17 = 1040LL;
  }
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)updated,
    SolidFillOpacity);
LABEL_19:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v14;
}
