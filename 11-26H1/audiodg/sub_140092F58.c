/*
 * XREFs of sub_140092F58 @ 0x140092F58
 * Callers:
 *     sub_140093458 @ 0x140093458 (sub_140093458.c)
 * Callees:
 *     sub_14003D2CC @ 0x14003D2CC (sub_14003D2CC.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 *     sub_14008B690 @ 0x14008B690 (sub_14008B690.c)
 *     sub_14008B9B8 @ 0x14008B9B8 (sub_14008B9B8.c)
 *     sub_14008CB44 @ 0x14008CB44 (sub_14008CB44.c)
 *     sub_140093414 @ 0x140093414 (sub_140093414.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_140092F58(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char *v14; // rdi
  char *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  char *v18; // r8
  _QWORD *v19; // rcx
  __int64 v21[2]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]

  v7 = (unsigned __int64)a2 - *a1;
  v8 = (a1[1] - *a1) >> 4;
  v9 = 0xFFFFFFFFFFFFFFFLL;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    sub_14005B2D0();
  v10 = v8 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v8 + 1;
  }
  v13 = sub_14003D2CC(v9);
  v14 = (char *)sub_140044584(v13);
  v15 = &v14[v7 & 0xFFFFFFFFFFFFFFF0uLL];
  sub_140093414(v16, v15, a3, a4, a1, v14, v9, v15 + 16, v15 + 16);
  v22 = v15;
  v17 = (_QWORD *)a1[1];
  v18 = v14;
  v19 = (_QWORD *)*a1;
  if ( a2 != v17 )
  {
    sub_14008B690(v19, a2, v14);
    v22 = v14;
    v18 = v15 + 16;
    v17 = (_QWORD *)a1[1];
    v19 = a2;
  }
  sub_14008B690(v19, v17, v18);
  v21[1] = 0LL;
  sub_14008CB44(a1, (__int64)v14, v10, v9);
  sub_14008B9B8(v21);
  return v15;
}
