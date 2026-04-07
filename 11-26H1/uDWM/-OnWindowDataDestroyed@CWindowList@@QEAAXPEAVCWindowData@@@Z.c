/*
 * XREFs of ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18008005C
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001AD44 (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001760C (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180075084 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@@details@wil@@QEAA_NXZ @ 0x1800DEF9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnWindowDataDestroyed(CDisplayAnimatedVisual **this, struct CWindowData *a2)
{
  int v4; // eax
  CDisplayAnimatedVisual *v5; // rcx
  CTopLevelWindow3D *v6; // rcx
  int v7; // eax
  __int64 ***v8; // rdi
  __int64 **i; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == this[87] )
  {
    v4 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed((CWindowList *)this, 1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD9B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v4,
        v10);
    this[87] = 0LL;
  }
  v5 = this[70];
  if ( v5 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v5, a2);
  v6 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
  if ( v6 )
    CTopLevelWindow3D::SetWindowData(v6, 0LL);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 59)
                                                               + 184LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
         a2);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v7,
      v10);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::GetImpl'::`2'::impl) )
  {
    v8 = (__int64 ***)*((_QWORD *)a2 + 85);
    for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
      SetEvent(i[3]);
  }
}
