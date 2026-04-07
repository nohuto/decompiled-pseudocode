/*
 * XREFs of ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x18000B980
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18000DBB0 (-UpdateMargins@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000DD10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18000E1D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000E200 (-UpdateStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800C5340 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateStyle@CProjectionBorderVisual@@QEAAXXZ @ 0x1800C53E4 (-UpdateStyle@CProjectionBorderVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateMarginsAndStyle(
        CTopLevelWindow *this,
        char a2,
        char a3,
        char a4,
        bool *a5,
        bool *a6,
        bool *a7)
{
  unsigned int v9; // r14d
  bool updated; // al
  unsigned int v11; // esi
  bool v12; // bp
  bool HasRenderedBorder; // r12
  int v14; // edi
  int v15; // r15d
  bool v16; // al
  struct CWindowData **v17; // rdi
  bool v18; // r12
  bool v19; // bp
  CProjectionBorderVisual *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  bool v24; // [rsp+70h] [rbp+8h]

  v9 = 0;
  updated = CTopLevelWindow::UpdateMargins(this);
  v11 = *((_DWORD *)this + 146);
  v12 = updated;
  HasRenderedBorder = CTopLevelWindow::HasRenderedBorder(v11);
  v24 = CTopLevelWindow::UpdateStyle(this);
  v14 = ((unsigned __int8)v11 ^ (unsigned __int8)*((_DWORD *)this + 146)) & 0x40;
  v15 = ((unsigned __int8)v11 ^ (unsigned __int8)*((_DWORD *)this + 146)) & 0x20;
  v16 = v24 && HasRenderedBorder != CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 146));
  if ( v15 || v14 || a2 || v16 )
    LOBYTE(v15) = 1;
  v17 = (struct CWindowData **)((char *)this + 712);
  v18 = !*((_QWORD *)this + 60) && *((_QWORD *)*v17 + 18);
  v19 = CTopLevelWindow::UpdateMarginsDependentOnStyle(this) || v12;
  if ( a3 || v19 || v24 || (_BYTE)v15 || v18 || a4 )
  {
    v20 = (CProjectionBorderVisual *)*((_QWORD *)*v17 + 58);
    if ( v20 )
    {
      if ( v19 )
        CProjectionBorderVisual::UpdateRectFromWindow(v20, *v17);
      if ( a2 )
        CProjectionBorderVisual::UpdateStyle(*(CProjectionBorderVisual **)(*((_QWORD *)this + 89) + 464LL));
    }
    v21 = CTopLevelWindow::UpdateWindowVisuals(this);
    v9 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x1182u, 0LL);
      goto LABEL_31;
    }
    v17 = (struct CWindowData **)((char *)this + 712);
  }
  v22 = *((_QWORD *)*v17 + 3);
  if ( v22 && ((v11 & 4) != 0) != ((*((_DWORD *)this + 146) & 4) != 0) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 440LL))(v22);
LABEL_31:
  *a5 = v19;
  *a6 = v24;
  *a7 = v15;
  return v9;
}
