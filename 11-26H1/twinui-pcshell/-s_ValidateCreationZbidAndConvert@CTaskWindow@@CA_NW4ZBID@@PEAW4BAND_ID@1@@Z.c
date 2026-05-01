/*
 * XREFs of ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1802BB794
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802B7410 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180301FEC (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTaskWindow::s_ValidateCreationZbidAndConvert(int a1, int *a2)
{
  char v3; // dl
  int v4; // ecx

  *a2 = -1;
  switch ( a1 )
  {
    case 1:
    case 8:
      goto LABEL_8;
    case 13:
      v3 = 1;
      v4 = 4;
LABEL_11:
      *a2 = v4;
      return v3;
    case 2:
    case 16:
LABEL_8:
      v3 = 1;
      if ( a1 == 1 )
        v4 = 5;
      else
        v4 = a1 - 8;
      goto LABEL_11;
  }
  return 0;
}
