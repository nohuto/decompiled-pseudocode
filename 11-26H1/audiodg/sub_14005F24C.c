/*
 * XREFs of sub_14005F24C @ 0x14005F24C
 * Callers:
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 *     sub_140065A28 @ 0x140065A28 (sub_140065A28.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_14005DA3C @ 0x14005DA3C (sub_14005DA3C.c)
 */

_QWORD *__fastcall sub_14005F24C(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3[2];
  v7 = (__int64)a3;
  if ( (unsigned __int64)a3[3] > 7 )
    v7 = *a3;
  v8 = sub_140026BBC((__int64)a1, v7, 2 * v5);
  v10 = sub_14005DA3C(a1, v12, v9, v8)[1];
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
