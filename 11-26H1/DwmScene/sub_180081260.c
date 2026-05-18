/*
 * XREFs of sub_180081260 @ 0x180081260
 * Callers:
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180081260(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = sub_180011CC4(v7, byte_1800F9DE0);
  v5 = sub_180011CC4(v8, byte_1800F9DE0);
  return sub_180080F34(a1, v5, a2, v4);
}
