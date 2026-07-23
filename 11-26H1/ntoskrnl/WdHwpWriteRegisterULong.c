/*
 * XREFs of WdHwpWriteRegisterULong @ 0x1404D5FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WdHwpWriteRegisterULong(_DWORD *a1, int a2)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a1 = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
