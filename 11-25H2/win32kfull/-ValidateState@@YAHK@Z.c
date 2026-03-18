/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1401CF040
 * Callers:
 *     ClearWindowState @ 0x1401CEF80 (ClearWindowState.c)
 *     SetWindowState @ 0x1401CEFE0 (SetWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_140356F00[HIBYTE(a1)]) == (_BYTE)a1;
}
