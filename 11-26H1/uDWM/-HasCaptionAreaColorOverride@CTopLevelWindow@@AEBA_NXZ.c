/*
 * XREFs of ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x180020F94
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x1800207AC (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18004BE00 (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z @ 0x180067A58 (-HasAccentColor@CDesktopManager@@QEAA_N_N@Z.c)
 */

char __fastcall CTopLevelWindow::HasCaptionAreaColorOverride(CTopLevelWindow *this)
{
  int v1; // edx
  char v2; // bl
  bool active; // al

  v1 = *(_DWORD *)(*((_QWORD *)this + 87) + 192LL);
  if ( v1 == 1 )
    return 0;
  v2 = 0;
  if ( v1 )
    return 1;
  active = CTopLevelWindow::TreatAsActiveWindow(this);
  if ( CDesktopManager::HasAccentColor(CDesktopManager::s_pDesktopManagerInstance, active) )
    return 1;
  return v2;
}
