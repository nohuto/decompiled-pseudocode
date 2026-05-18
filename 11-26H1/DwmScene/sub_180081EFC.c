/*
 * XREFs of sub_180081EFC @ 0x180081EFC
 * Callers:
 *     sub_180081DB0 @ 0x180081DB0 (sub_180081DB0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_180038A14 @ 0x180038A14 (sub_180038A14.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_1800823B4 @ 0x1800823B4 (sub_1800823B4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180081EFC(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // r14
  unsigned int *v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 *v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  sub_180029070((__int64)a1, (__int64)a2);
  (*(void (__fastcall **)(__int64 *, __int64 **, _QWORD))(*a1 + 56))(a1, &v16, *a2);
  v4 = v16;
  v5 = (unsigned int *)a1[14];
  if ( v5 )
  {
    v6 = v5[5];
    v7 = v5[6];
    v8 = v5[4];
    v9 = v5[2];
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
  }
  v10 = a1[17];
  v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, unsigned int, unsigned int))(*v16 + 48))(
                     v16,
                     &v19,
                     v9,
                     v8,
                     v7,
                     v6);
  sub_180038A14(v4 + 12, v11);
  sub_180038A48(&v19);
  (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 56))(v4, v10);
  v12 = *(_DWORD *)(*a2 + 244LL);
  LODWORD(v19) = v12;
  v13 = sub_180051E20(a1 + 15, (__int64)v18, &v19);
  sub_180011F5C((_QWORD *)(*(_QWORD *)v13 + 40LL), (__int64 *)&v16);
  v14 = a1[14];
  if ( v14 && *(_DWORD *)(v14 + 24) == 2 )
    sub_1800823B4(a1, *a2);
  LODWORD(v19) = v12;
  result = sub_180028BD0(a1 + 10, (__int64)v18, &v19);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  if ( v17 )
    return sub_180010EC8(v17);
  return result;
}
