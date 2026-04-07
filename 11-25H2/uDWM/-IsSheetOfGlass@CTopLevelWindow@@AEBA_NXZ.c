/*
 * XREFs of ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18000E910
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18000DBB0 (-UpdateMargins@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18000E8A0 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CFA40 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsSheetOfGlass(CTopLevelWindow *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 89);
  return *(_QWORD *)(v1 + 96) == 0x7FFFFFFF7FFFFFFFLL
      && *(_DWORD *)(v1 + 104) == 0x7FFFFFFF
      && *(_DWORD *)(v1 + 108) == 0x7FFFFFFF;
}
