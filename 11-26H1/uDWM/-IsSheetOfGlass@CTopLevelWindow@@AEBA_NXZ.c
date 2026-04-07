/*
 * XREFs of ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180020370
 * Callers:
 *     ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18001EC20 (-UpdateMargins@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180020300 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CADB4 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsSheetOfGlass(CTopLevelWindow *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 87);
  return *(_QWORD *)(v1 + 96) == 0x7FFFFFFF7FFFFFFFLL
      && *(_DWORD *)(v1 + 104) == 0x7FFFFFFF
      && *(_DWORD *)(v1 + 108) == 0x7FFFFFFF;
}
