/*
 * XREFs of sub_14008B71C @ 0x14008B71C
 * Callers:
 *     sub_14008B568 @ 0x14008B568 (sub_14008B568.c)
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 *     sub_14008C6C4 @ 0x14008C6C4 (sub_14008C6C4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008B71C(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rcx

  *(_DWORD *)a1 = a2;
  v4 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v4 )
    sub_1400B6010(v4);
  return a1;
}
