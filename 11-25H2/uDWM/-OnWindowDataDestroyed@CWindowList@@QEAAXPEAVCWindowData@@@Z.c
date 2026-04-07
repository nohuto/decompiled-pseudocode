/*
 * XREFs of ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001B724
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001A658 (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001D180 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180084300 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnWindowDataDestroyed(CDisplayAnimatedVisual **this, struct CWindowData *a2)
{
  CDisplayAnimatedVisual *v4; // rcx
  CTopLevelWindow3D *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == this[87] )
  {
    v7 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed((CWindowList *)this, 1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v7,
        v8);
    this[87] = 0LL;
  }
  v4 = this[70];
  if ( v4 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v4, a2);
  v5 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
  if ( v5 )
    CTopLevelWindow3D::SetWindowData(v5, 0LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 58)
                                                               + 192LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
         a2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC99,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v6,
      v8);
}
