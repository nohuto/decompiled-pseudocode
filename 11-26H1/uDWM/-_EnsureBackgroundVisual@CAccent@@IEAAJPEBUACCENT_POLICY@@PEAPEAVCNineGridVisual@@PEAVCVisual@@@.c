/*
 * XREFs of ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@Z @ 0x180063914
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180020840 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188 (-Create@CNineGridVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x18007034C (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z @ 0x180094D04 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::_EnsureBackgroundVisual(
        CAccent *this,
        const struct ACCENT_POLICY *a2,
        struct CNineGridVisual **a3,
        struct CVisual *a4)
{
  struct CVisual *v8; // rbx
  struct CNineGridVisual **v9; // rsi
  struct CNineGridVisual **v10; // r8
  const char *v11; // r9
  struct CNineGridVisual *v12; // r10
  int v13; // eax
  unsigned int v14; // ebx
  LONG v15; // eax
  LONG v16; // eax
  float SolidFillOpacity; // xmm0_4
  struct CNineGridVisual *v18; // r10
  int updated; // esi
  __int64 v20; // rdx
  int inserted; // eax
  int v22; // edi
  int v24; // [rsp+20h] [rbp-20h]
  struct tagRECT v25; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CNineGridVisual *v27; // [rsp+80h] [rbp+40h] BYREF

  v8 = 0LL;
  v27 = 0LL;
  v9 = (struct CNineGridVisual **)((char *)this + 224);
  if ( !CAccent::s_IsPolicyActive(a2) && v10 != v9 )
    goto LABEL_7;
  if ( !v12 )
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v27);
    v13 = CNineGridVisual::Create(&v27);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v13,
        v24);
LABEL_26:
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
      return v14;
    }
    v8 = v27;
    v12 = v27;
LABEL_7:
    if ( !v12 )
      goto LABEL_23;
  }
  *(_QWORD *)&v25.left = 0LL;
  v15 = 0;
  if ( *((_DWORD *)this + 122) - *((_DWORD *)this + 120) >= 0 )
    v15 = *((_DWORD *)this + 122) - *((_DWORD *)this + 120);
  v25.right = v15;
  v16 = 0;
  if ( *((_DWORD *)this + 123) - *((_DWORD *)this + 121) >= 0 )
    v16 = *((_DWORD *)this + 123) - *((_DWORD *)this + 121);
  v25.bottom = v16;
  if ( a3 == v9 )
  {
    if ( *((_DWORD *)this + 46) == 2 )
    {
      SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
      updated = CAccent::_UpdateSolidFill(this, v18, *((_DWORD *)this + 64), &v25, SolidFillOpacity);
      if ( updated < 0 )
      {
        v20 = 513LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)updated,
          v24);
        v14 = updated;
        goto LABEL_26;
      }
    }
    else
    {
      updated = CAccent::_UpdateSolidFill(this, v12, *((_DWORD *)a2 + 2), &v25, 1.0);
      if ( updated < 0 )
      {
        v20 = 517LL;
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( a3 != (struct CNineGridVisual **)((char *)this + 232) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x20A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        v11);
    updated = CAccent::_UpdateSolidFill(this, v12, *((_DWORD *)a2 + 2), &v25, *((float *)this + 68));
    if ( updated < 0 )
    {
      v20 = 523LL;
      goto LABEL_16;
    }
  }
LABEL_23:
  if ( v8 )
  {
    inserted = CContainerVisual::InsertChildAfter(this, v8, a4);
    v22 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x211,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)inserted,
        v24);
      v14 = v22;
      goto LABEL_26;
    }
    *a3 = v8;
  }
  return 0LL;
}
