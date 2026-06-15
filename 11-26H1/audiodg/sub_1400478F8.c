/*
 * XREFs of sub_1400478F8 @ 0x1400478F8
 * Callers:
 *     sub_1400478A0 @ 0x1400478A0 (sub_1400478A0.c)
 * Callees:
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005A370 @ 0x14005A370 (sub_14005A370.c)
 *     sub_14005A40C @ 0x14005A40C (sub_14005A40C.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

void __fastcall sub_1400478F8(__int64 *a1, char *a2, const void *a3, size_t a4)
{
  _QWORD *v8; // r12
  __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rcx
  char *v12; // rdx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r12
  char *v18; // rdi
  char *v19; // rcx
  char *v20; // rdi
  _QWORD v21[3]; // [rsp+30h] [rbp-68h] BYREF
  char *v22; // [rsp+48h] [rbp-50h]
  char *v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+A0h] [rbp+8h]
  char *v25; // [rsp+A8h] [rbp+10h]

  v8 = a1 + 1;
  v9 = *a1;
  v24 = *a1;
  v10 = (char *)a1[1];
  v11 = a1[2];
  if ( a4 )
  {
    if ( a4 <= v11 - (__int64)v10 )
    {
      if ( a4 >= v10 - a2 )
      {
        *v8 = sub_14005A370(a2, v10);
      }
      else
      {
        v20 = &v10[-a4];
        *v8 = sub_14005A370(&v10[-a4], v10);
        memmove(&v10[-(v20 - a2)], a2, v20 - a2);
      }
      memmove(a2, a3, a4);
    }
    else
    {
      v12 = &v10[-v9];
      v13 = 0x7FFFFFFFFFFFFFFFLL;
      if ( a4 > 0x7FFFFFFFFFFFFFFFLL - (__int64)&v10[-v9] )
        sub_14005B2D0(v11, v12);
      v14 = (unsigned __int64)&v12[a4];
      v25 = &v12[a4];
      v15 = v11 - v9;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v13 = v16 + v15;
        if ( v16 + v15 < v14 )
          v13 = v14;
      }
      v17 = sub_140044584(v13);
      v18 = &a2[v17 - v9];
      v21[0] = a1;
      v21[2] = v13;
      v23 = &v18[a4];
      memmove(v18, a3, a4);
      v22 = v18;
      if ( a4 == 1 && a2 == v10 )
      {
        v19 = (char *)v24;
      }
      else
      {
        sub_14005A370(v24, a2);
        v22 = (char *)v17;
        v19 = a2;
      }
      sub_14005A370(v19, v10);
      v21[1] = 0LL;
      if ( *a1 )
        sub_1400453E4(*a1, a1[2] - *a1);
      *a1 = v17;
      a1[1] = (__int64)&v25[v17];
      a1[2] = v17 + v13;
      sub_14005A40C(v21);
    }
  }
}
