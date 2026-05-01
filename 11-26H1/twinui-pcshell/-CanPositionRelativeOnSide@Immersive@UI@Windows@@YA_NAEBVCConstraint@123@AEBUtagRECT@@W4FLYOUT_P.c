/*
 * XREFs of ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801C3254
 * Callers:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013ED78 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::UI::Immersive::CanPositionRelativeOnSide(int *a1, _DWORD *a2, int a3, _DWORD *a4)
{
  char v4; // bl
  int v5; // r11d
  int v6; // r10d
  int v7; // r8d
  int v8; // r8d
  int v10; // r8d
  int v11; // r10d
  int v12; // r11d

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !a3 || (v7 = a3 - 1) == 0 )
  {
    v12 = a4[2];
    v11 = a1[1];
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_5;
      v5 = a4[2] - a1[2];
      v11 = a4[3];
LABEL_14:
      v6 = v11 - a4[1];
      goto LABEL_5;
    }
    v12 = *a1;
    v11 = a4[3];
LABEL_13:
    v5 = v12 - *a4;
    goto LABEL_14;
  }
  v5 = a4[2] - *a4;
  v6 = a4[3] - a1[3];
LABEL_5:
  if ( v5 >= a2[2] - *a2 && v6 >= a2[3] - a2[1] )
    return 1;
  return v4;
}
