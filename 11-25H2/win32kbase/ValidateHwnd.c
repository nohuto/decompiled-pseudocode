/*
 * XREFs of ValidateHwnd @ 0x1400BAF20
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}
