/*
 * XREFs of sub_1800C68A0 @ 0x1800C68A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 *     sub_180054048 @ 0x180054048 (sub_180054048.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 *     sub_180054238 @ 0x180054238 (sub_180054238.c)
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C4EB4 @ 0x1800C4EB4 (sub_1800C4EB4.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800C68A0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 *v5; // rax
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r12
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  char *v13; // rdi
  __int64 i; // rcx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // r10d
  unsigned int v18; // r13d
  __int64 v19; // kr00_8
  size_t v20; // r11
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // r8d
  int v24; // r10d
  size_t v25; // r11
  unsigned int v26; // edi
  unsigned int v27; // ebx
  int v28; // r14d
  unsigned int v29; // r9d
  unsigned int v31; // [rsp+48h] [rbp-C0h]
  int v32; // [rsp+50h] [rbp-B8h]
  unsigned int v33; // [rsp+54h] [rbp-B4h]
  size_t v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  __int128 v39; // [rsp+80h] [rbp-88h] BYREF
  __int64 v40; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  _DWORD v46[2]; // [rsp+C8h] [rbp-40h]
  char v47; // [rsp+D0h] [rbp-38h] BYREF
  int v48; // [rsp+120h] [rbp+18h]
  int v49; // [rsp+124h] [rbp+1Ch]
  int v50; // [rsp+128h] [rbp+20h]

  v4 = a1;
  if ( *a2 )
  {
    v5 = sub_180054068(*a2, &v34, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v37 = 0LL;
    v5 = &v36;
    v6 = 2;
    v7 = 0LL;
  }
  v44 = v7;
  v8 = v5[1];
  v43 = v8;
  v45 = v8;
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v37 )
      sub_180010EC8(v37);
  }
  if ( (v6 & 1) != 0 && v35 )
    sub_180010EC8(v35);
  if ( (unsigned int)sub_180054238(v7) == 1 )
  {
    v9 = *sub_1800C4EEC(v7, &v40);
    v38 = v9;
    sub_18000F938(&v40);
  }
  else
  {
    v9 = *sub_1800C4EB4(v7, &v41);
    v38 = v9;
    sub_18000F938(&v41);
  }
  v39 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v9,
          0LL,
          1LL,
          0,
          &v39);
  sub_180012A94(v4 + 72, &v34);
  sub_1800C52A0(&v36, &v34);
  if ( v35 )
    sub_180010EC8(v35);
  sub_1800BDDBC(v36, v10);
  if ( v10 < 0 )
  {
    sub_18001DCFC(&qword_1801BD548, 3);
    if ( v37 )
      sub_180010EC8(v37);
    if ( v8 )
      sub_180010EC8(v8);
    return 0;
  }
  else
  {
    v11 = sub_1800540C4(v7);
    sub_18004744C(v11);
    v12 = (unsigned int)sub_1800540C4(v7);
    v46[0] = 0;
    v46[1] = 1;
    v13 = &v47;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v13 = 1;
      v13 += 4;
    }
    v48 = 4;
    v49 = 1;
    v50 = 1;
    v15 = v46[v12];
    v16 = sub_180054278(v7);
    v18 = v17 * v16;
    v32 = v17 * v16 * sub_1800541A4(v7);
    v19 = *((_QWORD *)&v39 + 1);
    v20 = v18;
    if ( DWORD2(v39) <= v18 )
      v20 = DWORD2(v39);
    v34 = v20;
    v42 = v39;
    v31 = (v15 + (unsigned int)sub_1800541A4(v7) - 1) / v15;
    v22 = sub_180054048(v7);
    v33 = v22;
    v26 = 0;
    if ( v22 )
    {
      do
      {
        v27 = 0;
        if ( v21 )
        {
          v28 = v23 * v26;
          do
          {
            v29 = v28 + v18 * v27;
            if ( v29 >= a4 )
              break;
            sub_1800114C0((void *)(a3 + v29), v18, (const void *)(v42 + (_DWORD)v19 * v27++ + v24 * v26), v25);
            v21 = v31;
            v24 = HIDWORD(v19);
            v25 = v34;
          }
          while ( v27 < v31 );
          v23 = v32;
          v22 = v33;
        }
        ++v26;
      }
      while ( v26 < v22 );
      v8 = v43;
      v4 = a1;
      v9 = v38;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v9, 0LL);
    if ( v37 )
      sub_180010EC8(v37);
    if ( v8 )
      sub_180010EC8(v8);
    return 1;
  }
}
