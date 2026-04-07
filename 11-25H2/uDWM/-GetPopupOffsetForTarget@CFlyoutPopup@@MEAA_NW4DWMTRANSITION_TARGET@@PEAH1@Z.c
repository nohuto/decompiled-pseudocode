/*
 * XREFs of ?GetPopupOffsetForTarget@CFlyoutPopup@@MEAA_NW4DWMTRANSITION_TARGET@@PEAH1@Z @ 0x18008B450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlyoutPopup::GetPopupOffsetForTarget(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  char v4; // cl
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  double v10; // xmm0_8
  double v11; // xmm0_8
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( a2 > 79 )
  {
    v12 = a2 - 80;
    if ( v12 )
    {
      v13 = v12 - 8;
      if ( !v13 )
        goto LABEL_25;
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_9;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_24;
      if ( v15 != 1 )
        return v4;
    }
    v11 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -80.0;
    goto LABEL_21;
  }
  if ( a2 == 79 )
  {
LABEL_24:
    v11 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 80.0;
    goto LABEL_21;
  }
  v5 = a2 - 12;
  if ( !v5 )
  {
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 40.0;
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -40.0;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 40.0;
    goto LABEL_21;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -40.0;
LABEL_21:
    *a4 = (int)v11;
    return 1;
  }
  v9 = v8 - 62;
  if ( !v9 )
  {
LABEL_25:
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 80.0;
    goto LABEL_13;
  }
  if ( v9 == 1 )
  {
LABEL_9:
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -80.0;
LABEL_13:
    *a3 = (int)v10;
    return 1;
  }
  return v4;
}
