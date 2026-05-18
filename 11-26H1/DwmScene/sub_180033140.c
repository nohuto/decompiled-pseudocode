/*
 * XREFs of sub_180033140 @ 0x180033140
 * Callers:
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800263D4 @ 0x1800263D4 (sub_1800263D4.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     sub_180027018 @ 0x180027018 (sub_180027018.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_18002EB04 @ 0x18002EB04 (sub_18002EB04.c)
 *     sub_18002F858 @ 0x18002F858 (sub_18002F858.c)
 *     sub_180033678 @ 0x180033678 (sub_180033678.c)
 *     sub_1800336C8 @ 0x1800336C8 (sub_1800336C8.c)
 *     sub_180033FB8 @ 0x180033FB8 (sub_180033FB8.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_180034A88 @ 0x180034A88 (sub_180034A88.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_1800357BC @ 0x1800357BC (sub_1800357BC.c)
 *     sub_18003608C @ 0x18003608C (sub_18003608C.c)
 *     sub_180038158 @ 0x180038158 (sub_180038158.c)
 *     sub_18004E014 @ 0x18004E014 (sub_18004E014.c)
 *     sub_18007E800 @ 0x18007E800 (sub_18007E800.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180033140(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *i; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int j; // r14d
  __int64 v14; // rbx
  __int64 v15; // rdx
  _BOOL8 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int k; // ebx
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // r14
  _QWORD *v24; // rsi
  __int64 *v25; // r14
  __int64 *m; // rbx
  __int64 v27; // rcx
  __int128 v28; // [rsp+30h] [rbp-69h] BYREF
  __int64 v29; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h]
  __int64 v31; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h]
  _QWORD v33[3]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v34[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v35[16]; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v36[4]; // [rsp+98h] [rbp-1h] BYREF

  v31 = *a2;
  v3 = v31;
  v4 = a2[1];
  v32 = v4;
  *a2 = 0LL;
  a2[1] = 0LL;
  v28 = 0LL;
  v5 = sub_180012C40(&v29, &v31);
  sub_1800349D0(a1, 8LL, v5, &v28);
  sub_180029C50((__int64)(a1 + 1), (__int64)v35);
  sub_180029C10((__int64)(a1 + 138), (__int64)v34);
  v6 = sub_180012C40(&v28, &v31);
  sub_18003608C(a1, v6);
  sub_18001DCFC(&qword_1801BD288, 3);
  v7 = sub_18002D818(v36, v3 + 80);
  sub_1800148EC((__int64)v7);
  sub_18001DCFC(&qword_1801BD288, 3);
  sub_1800129D0((__int64)v36);
  sub_180029DD4((__int64)(a1 + 14), (__int64)&v28);
  if ( *(_QWORD **)(v3 + 3984) == a1 )
  {
    for ( i = (_QWORD *)a1[11]; i != (_QWORD *)a1[12]; i += 2 )
    {
      if ( *i == v3 )
      {
        sub_180029B0C((__int64)&v28);
        sub_180029C50(v3 + 24, (__int64)v36);
        v11 = *(_DWORD *)(v3 + 244);
        v12 = sub_1800266A4(v3);
        for ( j = 0; j < v12; ++j )
        {
          sub_180026650(v3, &v28, j);
          v14 = v28;
          sub_180029C10(v28 + 8, (__int64)v33);
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 320LL))(v14, &v29);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 360LL))(v14, 0LL);
          sub_18002B3C4((__int64)&v29);
          sub_180011E54((__int64)v33);
          if ( *((_QWORD *)&v28 + 1) )
            sub_180010EC8(*((__int64 *)&v28 + 1));
        }
        sub_1800162D0(&v28, &v31);
        v15 = sub_18002EB04(a1 + 23, v33, (__int64)&v28)[2];
        v16 = !*(_BYTE *)(v15 + 25) && *((_QWORD *)&v28 + 1) >= *(_QWORD *)(v15 + 40);
        if ( *((_QWORD *)&v28 + 1) )
          sub_180010F00(*((volatile signed __int32 **)&v28 + 1));
        if ( v16 )
        {
          sub_1800162D0(&v28, &v31);
          v17 = sub_18002F858(a1 + 23, (__int64)v33, (__int64)&v28);
          sub_180012C40(&v29, (_QWORD *)(*(_QWORD *)v17 + 48LL));
          if ( *((_QWORD *)&v28 + 1) )
            sub_180010F00(*((volatile signed __int32 **)&v28 + 1));
          sub_1800162D0(&v28, &v31);
          sub_180038158(a1 + 23, &v28);
          if ( *((_QWORD *)&v28 + 1) )
            sub_180010F00(*((volatile signed __int32 **)&v28 + 1));
          sub_180033678(a1, &v29);
          if ( v30 )
            sub_180010EC8(v30);
        }
        v18 = sub_180012C40(v33, &v31);
        sub_1800336C8(a1, v18);
        if ( *(_BYTE *)(v3 + 3976) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        for ( k = 0; k < v12; ++k )
        {
          sub_180026650(v3, &v28, k);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 176LL))(v28);
          if ( *((_QWORD *)&v28 + 1) )
            sub_180010EC8(*((__int64 *)&v28 + 1));
        }
        v21 = **(_QWORD **)(a1[64] + 18560LL);
        v29 = v21;
        while ( !*(_BYTE *)(v21 + 25) )
        {
          v22 = (_QWORD *)(*(_QWORD *)(v21 + 64) + 256LL);
          v23 = *(_QWORD *)(v21 + 64) + 416LL;
          while ( v22 != (_QWORD *)v23 )
          {
            if ( *v22 )
              sub_18007E800(*v22);
            v22 += 2;
          }
          sub_18001D6F4(&v29, v19);
          v21 = v29;
        }
        sub_18004E014(a1[64], v11);
        while ( (unsigned int)sub_1800266A4(v3) )
        {
          sub_180026650(v3, &v28, 0);
          sub_1800263D4(v3, (__int64 *)&v28);
          if ( *((_QWORD *)&v28 + 1) )
            sub_180010EC8(*((__int64 *)&v28 + 1));
        }
        if ( *(_BYTE *)(v3 + 3976) )
          sub_180027018((_BYTE *)v3);
        sub_180011E54((__int64)v36);
        sub_180029C50((__int64)(a1 + 14), (__int64)v36);
        v24 = (_QWORD *)(a1[11] + 16LL * (unsigned int)sub_180033FB8(a1, &v31));
        v25 = (__int64 *)a1[12];
        for ( m = v24 + 2; m != v25; m += 2 )
        {
          sub_180011F5C(v24, m);
          v24 += 2;
        }
        v27 = *(_QWORD *)(a1[12] - 8LL);
        if ( v27 )
          sub_180010EC8(v27);
        a1[12] -= 16LL;
        sub_180011E54((__int64)v36);
        v28 = 0LL;
        sub_180011F5C(&v31, (__int64 *)&v28);
        if ( *((_QWORD *)&v28 + 1) )
          sub_180010EC8(*((__int64 *)&v28 + 1));
        sub_18001DCFC(&qword_1801BD288, 3);
        sub_18001DCFC(&qword_1801BD288, 3);
        sub_180035438(a1);
        sub_1800357BC(a1);
        sub_180034A88(a1);
        sub_180011E54((__int64)v34);
        result = sub_180011E54((__int64)v35);
        v10 = v32;
        if ( !v32 )
          return result;
        return sub_180010EC8(v10);
      }
    }
  }
  sub_18001DCFC(&qword_1801BD288, 3);
  sub_180029B0C((__int64)&v28);
  sub_180011E54((__int64)v34);
  result = sub_180011E54((__int64)v35);
  if ( v4 )
  {
    v10 = v4;
    return sub_180010EC8(v10);
  }
  return result;
}
