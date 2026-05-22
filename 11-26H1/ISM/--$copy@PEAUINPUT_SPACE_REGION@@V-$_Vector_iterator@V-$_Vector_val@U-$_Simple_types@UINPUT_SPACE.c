/*
 * XREFs of ??$copy@PEAUINPUT_SPACE_REGION@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@std@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@0@PEAUINPUT_SPACE_REGION@@0V10@@Z @ 0x18006E2EC
 * Callers:
 *     ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18006DF80 (-OnSystemContextNotification@GestureServices@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18006E040 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x1801637C4 (-InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

_QWORD *__fastcall std::copy<INPUT_SPACE_REGION *,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<INPUT_SPACE_REGION>>>>(
        _QWORD *a1,
        const void *a2,
        __int64 a3,
        char *a4)
{
  __int64 v5; // rdi

  v5 = a3 - (_QWORD)a2;
  memmove_0(a4, a2, a3 - (_QWORD)a2);
  *a1 = &a4[v5];
  return a1;
}
