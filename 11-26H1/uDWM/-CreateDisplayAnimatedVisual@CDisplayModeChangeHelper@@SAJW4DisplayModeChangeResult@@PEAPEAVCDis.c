/*
 * XREFs of ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180044ED0
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x180045BF8 (-Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2C44 (-Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2D10 (-Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2DDC (-Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2EA8 (-Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B2F74 (-Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B3040 (-Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B310C (-Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B31D8 (-Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B32A4 (-Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(int a1, CBaseObject **a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  CBaseObject *v22; // rax
  int v24; // eax
  CBaseObject *v25; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  CBaseObject *v28; // [rsp+38h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( !CDesktopManager::IsWindowAnimationEnabled() || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
    v28 = 0LL;
    v24 = CDisplayBlackCurtainAnimatedVisual::Create(&v28);
    v13 = v24;
    if ( v24 >= 0 )
    {
      v25 = v28;
      v28 = 0LL;
      *a2 = v25;
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v24,
        savedregs);
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    return v13;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v28 = 0LL;
    v21 = CDisplayDisconnectAnimatedVisual::Create(&v28);
    v13 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v21,
        savedregs);
      if ( v28 )
        CBaseObject::Release(v28);
      return v13;
    }
    goto LABEL_39;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v28 = 0LL;
    v20 = CDisplayDuplicateAnimatedVisual::Create(&v28);
    v13 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v20,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v28 = 0LL;
    v19 = CDisplayDuplicateToExtendAnimatedVisual::Create(&v28);
    v13 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v19,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  v7 = v6 - 3;
  if ( !v7 )
  {
    v28 = 0LL;
    v18 = CDisplayExtendAnimatedVisual::Create(&v28);
    v13 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v18,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v28 = 0LL;
    v17 = CDisplayExtendToDuplicateAnimatedVisual::Create(&v28);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E1,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v17,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v28 = 0LL;
    v16 = CDisplaySecondaryOnlyAnimatedVisual::Create(&v28);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EA,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v16,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v28 = 0LL;
    v15 = CDisplaySecondaryOnlyToDuplicateAnimatedVisual::Create(&v28);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v15,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v28 = 0LL;
    v14 = CDisplaySecondaryOnlyToExtendAnimatedVisual::Create(&v28);
    v13 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
        (const char *)(unsigned int)v14,
        savedregs);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
      return v13;
    }
    goto LABEL_39;
  }
  if ( v11 != 2 )
    return 0LL;
  v28 = 0LL;
  v12 = CDisplayMixedModeAnimatedVisual::Create(&v28);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_39:
    v22 = v28;
    v28 = 0LL;
    *a2 = v22;
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x207,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymodechangehelper.cpp",
    (const char *)(unsigned int)v12,
    savedregs);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v28);
  return v13;
}
