/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1402077E4
 * Callers:
 *     ClearWindowState @ 0x140207724 (ClearWindowState.c)
 *     SetWindowState @ 0x140207784 (SetWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1403641F8[HIBYTE(a1)]) == (_BYTE)a1;
}
