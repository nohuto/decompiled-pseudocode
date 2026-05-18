/*
 * XREFs of sub_18004E514 @ 0x18004E514
 * Callers:
 *     sub_180080B64 @ 0x180080B64 (sub_180080B64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A50 @ 0x180012A50 (sub_180012A50.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18004B7F4 @ 0x18004B7F4 (sub_18004B7F4.c)
 *     sub_18004B8C0 @ 0x18004B8C0 (sub_18004B8C0.c)
 *     sub_18004B98C @ 0x18004B98C (sub_18004B98C.c)
 *     sub_18004BA58 @ 0x18004BA58 (sub_18004BA58.c)
 *     sub_18004BB24 @ 0x18004BB24 (sub_18004BB24.c)
 *     sub_18004C300 @ 0x18004C300 (sub_18004C300.c)
 *     sub_18004F174 @ 0x18004F174 (sub_18004F174.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 *     sub_180083E30 @ 0x180083E30 (sub_180083E30.c)
 *     sub_180084080 @ 0x180084080 (sub_180084080.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_18004E514(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 **v6; // rbx
  _QWORD *v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+28h] [rbp-38h]
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v28[3]; // [rsp+40h] [rbp-20h] BYREF

  v25 = a2;
  v28[2] = a3;
  v6 = (__int64 **)(a1 + 18576);
  sub_18004F194(a1 + 18576, &v25, a3);
  if ( v25 != *v6 )
  {
    v7 = v25 + 8;
    v27 = 0LL;
    if ( v25[11] )
      sub_180013540((__int64 *)&v27, v25 + 11);
    v8 = (__int64 *)*v7;
    if ( *v7 )
    {
      v9 = *v8;
      if ( *v8 == v8[1] )
        v9 = v8[3];
    }
    else
    {
      v9 = 0LL;
    }
    v28[0] = v9;
    v10 = v27;
    if ( (_QWORD)v27
      || *(_BYTE *)(a1 + 18624)
      && *v7
      && !(unsigned __int8)sub_18004F174(*v7)
      && *v11 == v11[1]
      && v11[3]
      && (sub_180012A50((__int64 *)(a1 + 18608), (__int64)&v25, v28), v25 != *(__int64 **)(a1 + 18608))
      && (sub_180013540((__int64 *)&v27, v25 + 5), (v10 = v27) != 0) )
    {
      v14 = *((_QWORD *)&v27 + 1);
    }
    else
    {
      if ( !*v7 || (unsigned __int8)sub_18004F174(*v7) )
      {
        v14 = *((_QWORD *)&v27 + 1);
LABEL_60:
        *a2 = v10;
        a2[1] = v14;
        goto LABEL_61;
      }
      if ( *((_DWORD *)v7 + 4) == 1 )
      {
        sub_18004BB24(*(_QWORD *)(a1 + 18688), (__int64 *)&v25);
        sub_180084080(v25, a3);
        sub_180083E30(v25, v7);
        v12 = v26;
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v12 = v26;
        }
        v10 = (__int64)v25;
        *(_QWORD *)&v27 = v25;
        v13 = *((_QWORD *)&v27 + 1);
        v14 = v12;
        *((_QWORD *)&v27 + 1) = v12;
        if ( v13 )
        {
          sub_180010EC8(v13);
          v12 = v26;
        }
        if ( v12 )
          sub_180010EC8(v12);
      }
      else
      {
        v14 = *((_QWORD *)&v27 + 1);
      }
      if ( *((_DWORD *)v7 + 4) == 5 )
      {
        sub_18004BA58(*(_QWORD *)(a1 + 18688), (__int64 *)&v25);
        sub_180084080(v25, a3);
        sub_180083E30(v25, v7);
        v15 = v26;
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v15 = v26;
        }
        v10 = (__int64)v25;
        *(_QWORD *)&v27 = v25;
        v16 = v14;
        v14 = v15;
        *((_QWORD *)&v27 + 1) = v15;
        if ( v16 )
        {
          sub_180010EC8(v16);
          v15 = v26;
        }
        if ( v15 )
          sub_180010EC8(v15);
      }
      if ( *((_DWORD *)v7 + 4) == 4 )
      {
        sub_18004B8C0(*(_QWORD *)(a1 + 18688), (__int64 *)&v25);
        sub_180084080(v25, a3);
        sub_180083E30(v25, v7);
        v17 = v26;
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v17 = v26;
        }
        v10 = (__int64)v25;
        *(_QWORD *)&v27 = v25;
        v18 = v14;
        v14 = v17;
        *((_QWORD *)&v27 + 1) = v17;
        if ( v18 )
        {
          sub_180010EC8(v18);
          v17 = v26;
        }
        if ( v17 )
          sub_180010EC8(v17);
      }
      if ( *((_DWORD *)v7 + 4) == 3 )
      {
        sub_18004B7F4(*(_QWORD *)(a1 + 18688), (__int64 *)&v25);
        sub_180084080(v25, a3);
        sub_180083E30(v25, v7);
        v19 = v26;
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v19 = v26;
        }
        v10 = (__int64)v25;
        *(_QWORD *)&v27 = v25;
        v20 = v14;
        v14 = v19;
        *((_QWORD *)&v27 + 1) = v19;
        if ( v20 )
        {
          sub_180010EC8(v20);
          v19 = v26;
        }
        if ( v19 )
          sub_180010EC8(v19);
      }
      if ( *((_DWORD *)v7 + 4) == 2 )
      {
        sub_18004B98C(*(_QWORD *)(a1 + 18688), (__int64 *)&v25);
        sub_180084080(v25, a3);
        sub_180083E30(v25, v7);
        v21 = v26;
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
          v21 = v26;
        }
        v10 = (__int64)v25;
        *(_QWORD *)&v27 = v25;
        v22 = v14;
        v14 = v21;
        *((_QWORD *)&v27 + 1) = v21;
        if ( v22 )
        {
          sub_180010EC8(v22);
          v21 = v26;
        }
        if ( v21 )
          sub_180010EC8(v21);
      }
    }
    if ( v10 )
    {
      sub_180013540(v7 + 3, &v27);
      if ( *(_BYTE *)(a1 + 18624) )
      {
        v23 = sub_18004C300((__int64 *)(a1 + 18608), (__int64)&v25, v28);
        sub_180013540((__int64 *)(*(_QWORD *)v23 + 40LL), &v27);
      }
    }
    goto LABEL_60;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_61:
  sub_1800129D0(a3);
  return a2;
}
