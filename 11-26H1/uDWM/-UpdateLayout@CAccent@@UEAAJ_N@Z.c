/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ??$SetDirtyFlag@$00@CVisual@@QEAAXXZ @ 0x180017474 (--$SetDirtyFlag@$00@CVisual@@QEAAXXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180089798 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18008BAF0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ @ 0x18008D5D8 (-_IsAcrylicBlurEnabledAndAllowed@CAccent@@IEBA_NXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800946E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(struct tagSIZE *this, bool a2)
{
  int updated; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  CVisual *v7; // rcx
  __int64 v8; // rbp
  char v9; // di
  char v10; // si
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+2Ch] [rbp-1Ch]
  char v16; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+31h] [rbp-17h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( CAccent::_IsAcrylicBlurEnabledAndAllowed((CAccent *)this) )
  {
    updated = CAccent::_UpdateAcrylicBlurBehind((CAccent *)this);
    if ( updated >= 0 )
      goto LABEL_3;
    v13 = 381LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated,
      v14);
    return (unsigned int)updated;
  }
  updated = CAccent::_UpdateResources((CAccent *)this);
  if ( updated < 0 )
  {
    v13 = 385LL;
    goto LABEL_21;
  }
LABEL_3:
  if ( (this[23].cy & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas((CAccent *)this);
    if ( updated < 0 )
    {
      v13 = 390LL;
      goto LABEL_21;
    }
    updated = CAccent::_UpdateBorderShadowParts((CAccent *)this);
    if ( updated < 0 )
    {
      v13 = 391LL;
      goto LABEL_21;
    }
    updated = CAccent::_UpdateBorderShadowForAccent((CAccent *)this);
    if ( updated < 0 )
    {
      v13 = 392LL;
      goto LABEL_21;
    }
  }
  updated = CContainerVisual::UpdateLayout((CContainerVisual *)this, a2);
  if ( updated < 0 )
  {
    v13 = 395LL;
    goto LABEL_21;
  }
  v7 = (CVisual *)this[37];
  if ( v7 )
    CVisual::SetSize(v7, this + 8, v5, v6);
  VisualCollection::GetIterator((__int64)&this[17], (__int64)&v14);
  v8 = v14;
  v9 = v17;
  v10 = v16;
  v11 = v15;
  while ( 1 )
  {
    if ( v10 )
    {
      if ( !v9 )
        ++v11;
    }
    else
    {
      v10 = 1;
      v11 = 0;
    }
    if ( v11 >= *(_DWORD *)(v8 + 32) )
      v9 = 1;
    if ( v9 )
      break;
    CVisual::SetDirtyFlag<1>();
  }
  return 0LL;
}
