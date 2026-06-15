/*
 * XREFs of sub_14005A55C @ 0x14005A55C
 * Callers:
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 * Callees:
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_1400382A0 @ 0x1400382A0 (sub_1400382A0.c)
 *     sub_1400478A0 @ 0x1400478A0 (sub_1400478A0.c)
 *     sub_14004846C @ 0x14004846C (sub_14004846C.c)
 *     sub_14005ABA8 @ 0x14005ABA8 (sub_14005ABA8.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall sub_14005A55C(int a1, int a2, __int64 *a3, int a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _WORD *v8; // r14
  __int64 *v9; // rsi
  _WORD *v10; // r9
  __int64 v11; // rax
  _WORD *v12; // r9
  __int64 v13; // rax
  _WORD *v14; // r9
  __int64 v15; // rax
  __int16 v16; // [rsp+50h] [rbp-A8h] BYREF
  char v17[6]; // [rsp+52h] [rbp-A6h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-98h]
  _WORD *v20; // [rsp+68h] [rbp-90h] BYREF
  _WORD *v21; // [rsp+70h] [rbp-88h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-80h]
  __int64 *v23; // [rsp+80h] [rbp-78h]
  void *v24; // [rsp+88h] [rbp-70h] BYREF
  void *v25; // [rsp+90h] [rbp-68h] BYREF
  void *v26; // [rsp+98h] [rbp-60h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-40h] BYREF
  __int64 v31[7]; // [rsp+C0h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h]

  v23 = a3;
  v19 = 0;
  v6 = a5;
  while ( 1 )
  {
    v7 = *v23;
    if ( v19 >= (unsigned __int64)((a3[1] - *v23) >> 4) )
      break;
    try
    {
      v8 = (_WORD *)(16LL * v19);
      v18 = v8;
      v9 = v6 + 1;
      v22 = v6 + 1;
      sub_1400478A0(v6, &v27, v6[1], (__int64)v8 + v7, (__int64)v8 + v7 + 16);
    }
    catch ( ... )
    {
      sub_140050410((int)retaddr, 290, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp");
      v6 = a5;
      v9 = v22;
      LODWORD(v8) = (_DWORD)v18;
    }
    v18 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v16 = 0;
    sub_1400118C0((void **)&v20, 0LL);
    sub_1400118C0((void **)&v21, 0LL);
    sub_1400118C0((void **)&v18, 0LL);
    sub_14005ABA8(
      a1,
      a2,
      (_DWORD)v8 + *(_DWORD *)v23,
      a4,
      (__int64)&v18,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v16,
      a6);
    v10 = v18;
    if ( !v18 )
    {
      sub_1400382A0(&v24, word_1400C8F0C);
      sub_14004846C((void **)&v18, &v24);
      sub_14001D96C(&v24);
      v10 = v18;
      if ( !v18 )
        goto LABEL_15;
    }
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    try
    {
      sub_1400478A0(v6, &v28, *v9, (__int64)v10, (__int64)&v10[v11 + 1]);
    }
    catch ( ... )
    {
      sub_140050410((int)retaddr, 317, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp");
      v6 = a5;
      v9 = v22;
    }
    v12 = v21;
    if ( !v21 )
    {
      sub_1400382A0(&v25, word_1400C8F0C);
      sub_14004846C((void **)&v21, &v25);
      sub_14001D96C(&v25);
      v12 = v21;
      if ( !v21 )
        goto LABEL_15;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    sub_1400478A0(v6, &v29, *v9, (__int64)v12, (__int64)&v12[v13 + 1]);
    v14 = v20;
    if ( !v20 )
    {
      sub_1400382A0(&v26, word_1400C8F0C);
      sub_14004846C((void **)&v20, &v26);
      sub_14001D96C(&v26);
      v14 = v20;
      if ( !v20 )
      {
LABEL_15:
        sub_14001D96C((void **)&v20);
        sub_14001D96C((void **)&v21);
        sub_14001D96C((void **)&v18);
        return;
      }
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    try
    {
      sub_1400478A0(v6, &v30, *v9, (__int64)v14, (__int64)&v14[v15 + 1]);
    }
    catch ( ... )
    {
      sub_140050410((int)retaddr, 357, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp");
      v6 = a5;
      v9 = v22;
    }
    try
    {
      sub_1400478A0(v6, v31, *v9, (__int64)&v16, (__int64)v17);
    }
    catch ( ... )
    {
      sub_140050410((int)retaddr, 366, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp");
      v6 = a5;
    }
    sub_14001D96C((void **)&v20);
    sub_14001D96C((void **)&v21);
    sub_14001D96C((void **)&v18);
    ++v19;
  }
}
