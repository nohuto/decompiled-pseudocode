/*
 * XREFs of ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CADB4
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180020370 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

void __fastcall CTopLevelWindow::ComputeWindowFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v3; // ecx
  __int64 v5; // rax
  int *v6; // rdx
  _DWORD *v7; // rdx
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  int v11; // ecx
  bool v12; // sf
  int v13; // r9d
  int v14; // eax
  int v15; // r10d
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx

  v3 = *((_DWORD *)this + 142);
  *a2 = 0LL;
  if ( CTopLevelWindow::HasRenderedBorder(v3) || (*((_DWORD *)this + 142) & 0x200000) != 0 )
  {
    v5 = *((_QWORD *)this + 87);
    v6 = (int *)((char *)this + ((*((_BYTE *)this + 184) & 4) != 0 ? 620LL : 604LL));
    if ( !v5 || (*(_BYTE *)(v5 + 736) & 8) != 0 )
    {
      if ( !CTopLevelWindow::IsSheetOfGlass(this) )
      {
        if ( CDesktopManager::IsHighContrastMode() )
        {
          v13 = v9 - *(_DWORD *)(*((_QWORD *)this + 39) + 32LL);
          v12 = v13 < 0;
          v14 = v13;
          v9 = v8;
          if ( !v12 )
            v9 = v14;
          v15 = v10 - *(_DWORD *)(*((_QWORD *)this + 40) + 32LL);
          v12 = v15 < 0;
          v16 = v15;
          v10 = v8;
          if ( !v12 )
            v10 = v16;
          v17 = v11 - *(_DWORD *)(*((_QWORD *)this + 42) + 36LL);
          if ( v17 >= 0 )
            v8 = v17;
        }
        else
        {
          v8 = v11;
        }
      }
      v18 = v7[2];
      a2->cxLeftWidth = v9 + *v7;
      v19 = v10 + v7[1];
      a2->cyTopHeight = v18;
      a2->cxRightWidth = v19;
      a2->cyBottomHeight = v8 + v7[3];
    }
    else
    {
      a2->cxLeftWidth = *v6;
      a2->cyTopHeight = v6[2];
      a2->cxRightWidth = v6[1];
      a2->cyBottomHeight = v6[3];
    }
  }
}
