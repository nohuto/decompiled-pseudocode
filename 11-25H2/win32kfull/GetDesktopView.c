/*
 * XREFs of GetDesktopView @ 0x14019C310
 * Callers:
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14019C1C0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401D2B2C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     UserCommitDesktopMemory @ 0x1401D8B80 (UserCommitDesktopMemory.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     NtUserDwmValidateWindow @ 0x140248A50 (NtUserDwmValidateWindow.c)
 *     NtUserPostThreadMessage @ 0x14024B7E0 (NtUserPostThreadMessage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  W32GetUserGdiSessionState(a1);
  for ( result = *(_QWORD **)(a1 + 688); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
