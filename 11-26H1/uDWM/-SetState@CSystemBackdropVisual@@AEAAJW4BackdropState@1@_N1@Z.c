/*
 * XREFs of ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180027A84
 * Callers:
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180027914 (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z @ 0x180027990 (-UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z.c)
 * Callees:
 *     ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x1800369F0 (-CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Compos.c)
 *     ?GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Composition@UI@Windows@@XZ @ 0x180042E58 (-GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Compositio.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemBackdropVisual::SetState(__int64 a1, int a2, char a3, char a4)
{
  __int64 v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  struct Windows::UI::Composition::ICompositionEffectFactory *CrossfadeEffectFactory; // rax
  DWORD SysColor; // eax
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 192) = a3;
  v6 = 0LL;
  v25 = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_4;
      SysColor = GetSysColor(5);
      *(_BYTE *)(a1 + 200) = -1;
      *(_WORD *)(a1 + 201) = SysColor;
      *(_BYTE *)(a1 + 203) = BYTE2(SysColor);
      v25 = 0LL;
      v22 = CSystemBackdropVisual::CreateColorBrush(BYTE1(SysColor), *(unsigned int *)(a1 + 200), &v25);
      v15 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
          (const char *)(unsigned int)v22,
          v23);
        goto LABEL_12;
      }
      *(_DWORD *)(a1 + 196) = 3;
    }
    else
    {
      v16 = *(unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
      *(_DWORD *)(a1 + 200) = v16;
      v25 = 0LL;
      v18 = CSystemBackdropVisual::CreateColorBrush(v17, v16, &v25);
      v15 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA7,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
          (const char *)(unsigned int)v18,
          v23);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        return v15;
      }
      *(_DWORD *)(a1 + 196) = 2;
    }
    v6 = v25;
    goto LABEL_4;
  }
  if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
    AssertW(
      0LL,
      L"CDesktopManager::GetWindowList()->IsTransparencyAllowedBySystem()",
      L"CSystemBackdropVisual::SetState",
      L"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      0x99u);
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
  v6 = v19;
  v25 = v19;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  *(_BYTE *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 196) = 1;
LABEL_4:
  if ( a4 && CDesktopManager::IsWindowAnimationEnabled() )
  {
    CrossfadeEffectFactory = CCompositionEffectCache::GetCrossfadeEffectFactory(*((CCompositionEffectCache **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 26));
    v10 = CrossFadeToNewBrush(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL), v6, CrossfadeEffectFactory, 250LL);
    if ( v10 < 0 )
    {
      v14 = 190LL;
      goto LABEL_11;
    }
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 40LL) + 56LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL),
           v6);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
        (const char *)(unsigned int)v9,
        v23);
      v14 = 194LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v10,
        v23);
      v15 = v10;
LABEL_12:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v25);
      return v15;
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v11,
      v23);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v12;
  }
  else
  {
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
}
