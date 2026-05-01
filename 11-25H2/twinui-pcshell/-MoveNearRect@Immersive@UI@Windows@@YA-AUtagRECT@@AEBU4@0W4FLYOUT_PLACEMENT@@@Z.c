/*
 * XREFs of ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1801D8338
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x180146D2C (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x180148434 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::MoveNearRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        _DWORD *a3,
        int a4)
{
  int v6; // edx
  int v7; // r9d
  int v8; // r9d
  int v9; // r8d
  int v11; // r9d

  v6 = 0;
  if ( !a4 || (v7 = a4 - 1) == 0 )
  {
    v9 = a3[1] - a2->bottom;
    goto LABEL_5;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v9 = 0;
        v6 = 0;
        goto LABEL_5;
      }
      v6 = a3[2] - a2->left;
    }
    else
    {
      v6 = *a3 - a2->right;
    }
    v9 = 0;
    goto LABEL_5;
  }
  v9 = a3[3] - a2->top;
LABEL_5:
  *a1 = *a2;
  OffsetRect(a1, v6, v9);
  return a1;
}
