/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800608C8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18009444C (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800CE5E4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18005DBC4 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800681AC (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18006A438 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180089798 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8 (-_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180095424 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CBaseGeometryProxy *a4)
{
  CDesktopManager *v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  __m128i v12; // xmm6
  int v13; // ebx
  CAccentTransition *v14; // rcx
  int started; // eax
  unsigned int v16; // ebx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  struct CVisual *v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  char v22; // al
  _BYTE *v23; // rbx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  int *v30; // rax
  int *v31; // rax
  int v32; // eax
  int *v33; // rax
  int v35; // [rsp+20h] [rbp-58h] BYREF
  struct _MARGINS v36; // [rsp+28h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v37 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v36 = 0LL;
  CVisual::SetInsetFromParent(this, &v36);
  *((struct tagRECT *)this + 30) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    v10 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 97) >= 0 )
      v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    *((_DWORD *)this + 122) = *((_DWORD *)this + 120) + v10;
    v11 = 0;
    if ( v9 >= 0 )
      v11 = v9;
    *((_DWORD *)this + 123) = *((_DWORD *)this + 121) + v11;
    *((_QWORD *)v8 + 25) = this;
  }
  v12 = *a3;
  v36 = (struct _MARGINS)v12;
  v13 = _mm_cvtsi128_si32(v12);
  if ( (unsigned int)(v13 - 2) <= 1 )
    goto LABEL_28;
  if ( v13 == 4 )
    goto LABEL_29;
  if ( v13 == 5 )
  {
LABEL_28:
    if ( v13 != 4 )
    {
LABEL_30:
      v22 = 1;
LABEL_31:
      v23 = (char *)this + 188;
      if ( (*((_BYTE *)this + 188) & 2) != 0 && v22 )
      {
        CContainerVisual::RemoveAllChildren(this);
        v24 = (CBaseObject *)*((_QWORD *)this + 28);
        if ( v24 )
        {
          CBaseObject::Release(v24);
          *((_QWORD *)this + 28) = 0LL;
          v23 = (char *)this + 188;
        }
        v25 = (CBaseObject *)*((_QWORD *)this + 29);
        if ( v25 )
        {
          CBaseObject::Release(v25);
          *((_QWORD *)this + 29) = 0LL;
        }
        v26 = (CBaseObject *)*((_QWORD *)this + 30);
        if ( v26 )
        {
          CBaseObject::Release(v26);
          *((_QWORD *)this + 30) = 0LL;
        }
      }
      *(__m128i *)((char *)this + 184) = v12;
      *((_DWORD *)this + 64) = *((_DWORD *)this + 48);
      if ( (*v23 & 1) != 0 )
        CAccent::s_clrCurrentAccentBackground = *((_DWORD *)this + 65);
      if ( CAccent::_IsAcrylicBlurEnabledAndAllowed(this) )
      {
        if ( !*((_QWORD *)this + 30) )
        {
          v20 = CAccentAcrylicBlurBehind::Create((struct CAccentAcrylicBlurBehind **)this + 30);
          v16 = v20;
          if ( v20 < 0 )
          {
            v21 = 961LL;
            goto LABEL_45;
          }
        }
LABEL_52:
        v30 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v35);
        CVisual::SetDirtyFlags(this, *v30);
        if ( (*((_BYTE *)this + 188) & 0xE0) != 0 )
        {
          v20 = CAccent::_EnsureBorderShadowAtlas(this);
          v16 = v20;
          if ( v20 < 0 )
          {
            v21 = 976LL;
            goto LABEL_45;
          }
          v31 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v35);
          CVisual::SetDirtyFlags(this, *v31);
        }
        else
        {
          v20 = CAccent::_RemoveBorderShadowAtlas(this);
          v16 = v20;
          if ( v20 < 0 )
          {
            v21 = 981LL;
            goto LABEL_45;
          }
        }
        v32 = *((_DWORD *)this + 47);
        if ( (v32 & 0x10) != 0 )
        {
          CAccent::SetClipRegion((CBaseObject **)this, a4);
        }
        else if ( (v32 & 0x200) != 0 && *((_QWORD *)this + 35) )
        {
          v33 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v35);
          CVisual::SetDirtyFlags(this, *v33);
        }
        v16 = 0;
        goto LABEL_64;
      }
      CContainerVisual::RemoveAllChildren(this);
      v27 = (CBaseObject *)*((_QWORD *)this + 28);
      if ( v27 )
      {
        CBaseObject::Release(v27);
        *((_QWORD *)this + 28) = 0LL;
      }
      v28 = (CBaseObject *)*((_QWORD *)this + 29);
      if ( v28 )
      {
        CBaseObject::Release(v28);
        *((_QWORD *)this + 29) = 0LL;
      }
LABEL_50:
      v29 = (CBaseObject *)*((_QWORD *)this + 30);
      if ( v29 )
      {
        CBaseObject::Release(v29);
        *((_QWORD *)this + 30) = 0LL;
      }
      goto LABEL_52;
    }
LABEL_29:
    v22 = 0;
    if ( *((_DWORD *)this + 46) == v13 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 216) )
  {
    v14 = (CAccentTransition *)*((_QWORD *)this + 33);
    if ( v14 )
      CAccentTransition::StopAnimation(v14);
    v36.cyBottomHeight = 0;
    v12 = (__m128i)v36;
  }
  if ( v13 == *((_DWORD *)this + 46)
    && _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) == *((_DWORD *)this + 47)
    && _mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) == *((_DWORD *)this + 48)
    || (*(__m128i *)((char *)this + 200) = v12,
        *((_BYTE *)this + 216) = 1,
        started = CAccent::StartTransition(this),
        v16 = started,
        started >= 0) )
  {
    if ( (*((_BYTE *)this + 188) & 2) != 0 )
    {
      CContainerVisual::RemoveAllChildren(this);
      v17 = (CBaseObject *)*((_QWORD *)this + 28);
      if ( v17 )
      {
        CBaseObject::Release(v17);
        *((_QWORD *)this + 28) = 0LL;
      }
      v18 = (CBaseObject *)*((_QWORD *)this + 29);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 29) = 0LL;
      }
    }
    v19 = (struct CVisual *)*((_QWORD *)this + 30);
    if ( v19 )
    {
      if ( *((_QWORD *)v19 + 3) )
      {
        v20 = CContainerVisual::RemoveChild(this, v19);
        v16 = v20;
        if ( v20 < 0 )
        {
          v21 = 930LL;
LABEL_45:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v20,
            v35);
LABEL_64:
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v37);
          return v16;
        }
      }
    }
    goto LABEL_50;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x394,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)started,
    v35);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v16;
}
