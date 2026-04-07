/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3510 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800445A4 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180044AA8 (-OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ @ 0x180044E84 (-OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180096D4C (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     _o_ceilf_0 @ 0x18009B6A0 (_o_ceilf_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // ebp
  int v5; // r14d
  int v6; // esi
  int v7; // eax
  CTopLevelWindow *v8; // rcx
  CWindowIconic *v9; // rcx
  __int64 i; // rbx
  __int64 j; // rbx
  int v12; // eax
  CThumbnailVisual *v13; // rcx
  CThumbnailVisual *v14; // rcx
  int v15[4]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((float *)a2 + 83);
  v15[0] = (int)o_ceilf_0((float)*((int *)a2 + 67) * v3);
  v4 = (int)o_ceilf_0((float)*((int *)a2 + 68) * v3);
  v15[1] = v4;
  v5 = (int)o_ceilf_0((float)*((int *)a2 + 69) * v3);
  v15[2] = v5;
  v6 = (int)o_ceilf_0((float)*((int *)a2 + 70) * v3);
  v15[3] = v6;
  v7 = (int)o_ceilf_0((float)*((int *)a2 + 75) * v3);
  if ( *((_QWORD *)a2 + 8) != __PAIR64__(v4, v15[0])
    || *((_DWORD *)a2 + 18) != v5
    || *((_DWORD *)a2 + 19) != v6
    || *((_DWORD *)a2 + 28) != v7 )
  {
    v8 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    *((_DWORD *)a2 + 28) = v7;
    *((_OWORD *)a2 + 4) = *(_OWORD *)v15;
    if ( v8 )
      CTopLevelWindow::OnClientMarginsUpdated(v8);
    v9 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( v9 )
      CWindowIconic::OnWindowSizeUpdated(v9);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 148); i = (unsigned int)(i + 1) )
    {
      v13 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 71) + 8 * i) + 88LL);
      if ( v13 )
        CThumbnailVisual::OnSourceWindowClientMarginsChanged(v13);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 140); j = (unsigned int)(j + 1) )
    {
      v14 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * j) + 88LL);
      if ( v14 )
        CThumbnailVisual::OnDestinationClientRectChanged(v14);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 58)
                                                                  + 104LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
            a2);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFF4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v12,
        v15[0]);
  }
}
