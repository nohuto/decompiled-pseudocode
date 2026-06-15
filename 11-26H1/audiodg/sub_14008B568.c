/*
 * XREFs of sub_14008B568 @ 0x14008B568
 * Callers:
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 *     sub_14008C6C4 @ 0x14008C6C4 (sub_14008C6C4.c)
 * Callees:
 *     sub_14003D2CC @ 0x14003D2CC (sub_14003D2CC.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 *     sub_14008B690 @ 0x14008B690 (sub_14008B690.c)
 *     sub_14008B71C @ 0x14008B71C (sub_14008B71C.c)
 *     sub_14008B9B8 @ 0x14008B9B8 (sub_14008B9B8.c)
 *     sub_14008CB08 @ 0x14008CB08 (sub_14008CB08.c)
 *     sub_14008CB44 @ 0x14008CB44 (sub_14008CB44.c)
 */

unsigned __int64 __fastcall sub_14008B568(__int64 *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v7; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+40h] [rbp-38h]

  v4 = *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    sub_14005B2D0();
  v9 = v7 + 1;
  v10 = sub_14008CB08(a1, v7 + 1);
  v11 = sub_14003D2CC(v10);
  v19[0] = a1;
  v19[2] = v10;
  v12 = sub_140044584(v11);
  v13 = *a3;
  v14 = ((a2 - v4) & 0xFFFFFFFFFFFFFFF0uLL) + v12;
  v21 = v14 + 16;
  sub_14008B71C(v14, v13, a4);
  v15 = a1[1];
  v16 = v12;
  v17 = *a1;
  v20 = v14;
  if ( a2 != v15 )
  {
    sub_14008B690(v17, a2, v12);
    v15 = a1[1];
    v16 = v14 + 16;
    v17 = a2;
    v20 = v12;
  }
  sub_14008B690(v17, v15, v16);
  v19[1] = 0LL;
  sub_14008CB44(a1, v12, v9, v10);
  sub_14008B9B8(v19);
  return v14;
}
