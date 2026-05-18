/*
 * XREFs of sub_18006EC64 @ 0x18006EC64
 * Callers:
 *     sub_180061720 @ 0x180061720 (sub_180061720.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038F30 @ 0x180038F30 (sub_180038F30.c)
 *     sub_180038F8C @ 0x180038F8C (sub_180038F8C.c)
 *     sub_180039078 @ 0x180039078 (sub_180039078.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_18006DC9C @ 0x18006DC9C (sub_18006DC9C.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_18006F058 @ 0x18006F058 (sub_18006F058.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 *     sub_18009993C @ 0x18009993C (sub_18009993C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18006EC64(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  void (__fastcall *v10)(__int64, _QWORD *); // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rax
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 result; // rax
  __int128 v27; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29; // [rsp+48h] [rbp-51h]
  _QWORD *v30; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+58h] [rbp-41h]
  __int64 v32; // [rsp+60h] [rbp-39h] BYREF
  __int64 v33; // [rsp+68h] [rbp-31h]
  __int128 v34; // [rsp+70h] [rbp-29h] BYREF
  __int64 v35; // [rsp+80h] [rbp-19h] BYREF
  __int64 v36; // [rsp+88h] [rbp-11h]
  __int128 v37; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v38[4]; // [rsp+A0h] [rbp+7h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 376LL))(*a2, &v27);
  sub_180012A94(v6, &v30);
  if ( *((_QWORD *)&v27 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v27 + 1));
  sub_180029E54(a1[36] + 16LL);
  v7 = v30;
  sub_180029EF8((__int64)(v30 + 3), v8);
  sub_180012C40(&v35, v7 + 34);
  v9 = sub_180012C40(&v27, &v30);
  v10(v11, v9);
  v34 = 0LL;
  if ( a1[8] )
  {
    v13 = (__int64 *)sub_18006F058(a1, &v27, v12, &v30);
    sub_180011F5C(&v34, v13);
    if ( *((_QWORD *)&v27 + 1) )
      sub_180010EC8(*((__int64 *)&v27 + 1));
    v7 = v30;
  }
  else
  {
    v14 = (__int64 *)sub_180026A6C(a1[57], &v27);
    sub_180011F5C(&v34, v14);
    if ( *((_QWORD *)&v27 + 1) )
      sub_180010EC8(*((__int64 *)&v27 + 1));
  }
  sub_1800592E4(a1[34], &v32, (__int64)&v30);
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v27);
  v16 = sub_1800162D0(&v28, v15);
  sub_180038F8C(v35, v16);
  v17 = sub_1800162D0(&v28, &v27);
  sub_180038F30(v35, v17);
  v18 = sub_1800162D0(&v28, v15);
  sub_180038F8C(v19, v18);
  v20 = sub_1800162D0(&v28, &v27);
  sub_180038F30(v21, v20);
  if ( *((_QWORD *)&v27 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v27 + 1));
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v7 + 104LL))(v7, &v32);
  sub_180011CC4(v38, "IPM_ProcessScene");
  sub_180099888(&v37, &v32, v38);
  sub_1800129D0((__int64)v38);
  if ( a3 )
  {
    v22 = sub_180012C40(&v27, &v34);
    v23 = sub_18006DC9C((__int64)a1, &v28, (__int64 *)&v30, (__int64)a2, v22);
    sub_180011F5C(&v34, v23);
    if ( v29 )
      sub_180010EC8(v29);
    v7 = v30;
  }
  v24 = sub_180012C40(&v27, &v34);
  v28 = v24;
  sub_18006E60C((__int64)a1, a2, v24);
  v25 = v24[1];
  if ( v25 )
    sub_180010EC8(v25);
  sub_18009993C(&v37);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v7 + 112LL))(v7, &v32);
  v37 = 0LL;
  v27 = 0LL;
  sub_180039078(v35, &v27, &v37);
  v27 = 0LL;
  sub_180038F8C(v35, (__int64 *)&v27);
  v27 = 0LL;
  sub_180038F30(v35, (__int64 *)&v27);
  v27 = 0LL;
  sub_180038F8C(v32, (__int64 *)&v27);
  v27 = 0LL;
  result = (__int64)sub_180038F30(v32, (__int64 *)&v27);
  if ( v33 )
    result = sub_180010EC8(v33);
  if ( *((_QWORD *)&v34 + 1) )
    result = sub_180010EC8(*((__int64 *)&v34 + 1));
  if ( v36 )
    result = sub_180010EC8(v36);
  if ( v31 )
    return sub_180010EC8(v31);
  return result;
}
