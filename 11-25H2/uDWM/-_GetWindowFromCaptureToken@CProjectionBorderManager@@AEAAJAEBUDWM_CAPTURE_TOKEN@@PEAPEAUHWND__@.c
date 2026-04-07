/*
 * XREFs of ?_GetWindowFromCaptureToken@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@PEAPEAUHWND__@@@Z @ 0x1800C41CC
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2C10 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098390 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetWindowFromCaptureToken(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2,
        HWND *a3)
{
  _QWORD *Element; // rax

  *a3 = 0LL;
  Element = CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
              this + 6,
              *(_QWORD *)a2);
  if ( Element )
    *a3 = (HWND)Element[2];
  return 0LL;
}
