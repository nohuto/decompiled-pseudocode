/*
 * XREFs of sub_1400206D0 @ 0x1400206D0
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400206D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a2 = a3;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
