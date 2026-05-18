/*
 * XREFs of sub_180063230 @ 0x180063230
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 *     sub_1800153D8 @ 0x1800153D8 (sub_1800153D8.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18003C8A4 @ 0x18003C8A4 (sub_18003C8A4.c)
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_1800435A4 @ 0x1800435A4 (sub_1800435A4.c)
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 *     sub_180085920 @ 0x180085920 (sub_180085920.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180063230(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r10
  __int64 *v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-99h] BYREF
  __int64 v28; // [rsp+28h] [rbp-91h]
  __int64 v29; // [rsp+30h] [rbp-89h] BYREF
  __int64 v30; // [rsp+38h] [rbp-81h]
  __int64 v31; // [rsp+40h] [rbp-79h] BYREF
  __int64 v32; // [rsp+48h] [rbp-71h]
  __int64 v33; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+58h] [rbp-61h]
  __int64 v35; // [rsp+60h] [rbp-59h] BYREF
  __int64 v36; // [rsp+68h] [rbp-51h]
  __int64 v37; // [rsp+70h] [rbp-49h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h]
  __int64 v39; // [rsp+90h] [rbp-29h] BYREF
  __int64 v40; // [rsp+98h] [rbp-21h]
  __int64 v41; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-11h]
  __int64 v43; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+Fh]

  v6 = sub_1800181BC(&v37, (__int64)&unk_1801CCF58);
  sub_18004E8E8(a2, &v35, (__int64)v6);
  sub_18005D23C(v35, &v31);
  sub_1800434E4(v31, (__int64)&unk_1801CCE18, 1);
  sub_18007EAEC(*(_QWORD *)(v31 + 120), &unk_1801CBF38, 0LL);
  v7 = *a3;
  v8 = sub_180013440(&v37, (__int64)&unk_1801C9078);
  sub_180040570(v7, (__int64)&v33, (__int64)v8);
  sub_180085920(&v39, a1, 0LL);
  v9 = sub_180012C40(&v29, &v33);
  sub_18003F6D8(v10, (__int64)&v37, qword_1801C9008, v9);
  sub_180011CC4(&v43, "PlanarReflection");
  v11 = v37;
  sub_1800143E4(v37 + 400, (__int64)&v43);
  sub_1800129D0((__int64)&v43);
  sub_180014CE0(v11, &v43);
  v12 = sub_180012C40(&v29, &v39);
  sub_1800153D8(v43, v12);
  v13 = sub_180012C40(&v29, &v31);
  sub_18004B290(v43, v13);
  result = sub_18003C8A4(v11, 1, 0);
  if ( (*(_BYTE *)(a1 + 560) & 1) != 0 )
  {
    v16 = sub_18005F93C(*a3, v15);
    v17 = sub_18005D23C(v35, &v41);
    v18 = (__int64 *)(v16 + 216);
    sub_180011F5C((_QWORD *)(v16 + 216), v17);
    if ( v42 )
      sub_180010EC8(v42);
    LOBYTE(v19) = 1;
    sub_18007EAEC(*(_QWORD *)(*v18 + 120), &unk_1801CBF38, v19);
    *(_DWORD *)(*v18 + 188) = 3;
    sub_1800435A4(*v18, 1, 1, 1);
    LOBYTE(v20) = 1;
    sub_180085920(&v29, a1, v20);
    v21 = sub_180012C40(&v41, &v33);
    v23 = (__int64 *)sub_18003F6D8(v22, (__int64)&v27, qword_1801C9030, v21);
    sub_180011F5C((_QWORD *)(v16 + 200), v23);
    if ( v28 )
      sub_180010EC8(v28);
    v24 = *(_QWORD *)(v16 + 200);
    sub_180011CC4(&v41, "GroundBack");
    sub_1800143E4(v24 + 400, (__int64)&v41);
    sub_1800129D0((__int64)&v41);
    sub_180014CE0(*(_QWORD *)(v16 + 200), &v41);
    v25 = sub_180012C40(&v27, &v29);
    sub_1800153D8(v41, v25);
    v26 = sub_180012C40(&v27, (_QWORD *)(v16 + 216));
    result = sub_18004B290(v41, v26);
    if ( v42 )
      result = sub_180010EC8(v42);
    if ( v30 )
      result = sub_180010EC8(v30);
  }
  if ( v44 )
    result = sub_180010EC8(v44);
  if ( v38 )
    result = sub_180010EC8(v38);
  if ( v40 )
    result = sub_180010EC8(v40);
  if ( v34 )
    result = sub_180010EC8(v34);
  if ( v32 )
    result = sub_180010EC8(v32);
  if ( v36 )
    return sub_180010EC8(v36);
  return result;
}
