/*
 * XREFs of sub_1800B97F8 @ 0x1800B97F8
 * Callers:
 *     sub_1800BBCE0 @ 0x1800BBCE0 (sub_1800BBCE0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180017BB8 @ 0x180017BB8 (sub_180017BB8.c)
 *     sub_180018788 @ 0x180018788 (sub_180018788.c)
 *     sub_180026CDC @ 0x180026CDC (sub_180026CDC.c)
 *     sub_180029B78 @ 0x180029B78 (sub_180029B78.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_1800BA724 @ 0x1800BA724 (sub_1800BA724.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800B97F8(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int128 v16; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  char v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  sub_180029EF8((__int64)(a1 + 3), (__int64)a2);
  v18 = 0LL;
  v19 = 0;
  if ( a1[498] )
  {
    v9 = (__int64 *)sub_180026CDC((__int64)a1, (__int64)v17);
    sub_180018788(&v18, v9);
    sub_180011E54((__int64)v17);
  }
  sub_1800BA724(a2, a3, a4, a5, 0);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v10 = a1 + 31;
  v11 = a2[1];
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v16 = *(_OWORD *)a2;
  v12 = a1[32];
  if ( v12 == a1[33] )
    sub_180017BB8(v10, v12, &v16);
  else
    sub_1800119A4((__int64)v10, &v16);
  if ( *((_QWORD *)&v16 + 1) )
    sub_180010EC8(*((__int64 *)&v16 + 1));
  v16 = 0LL;
  v13 = a2[1];
  if ( v13 )
  {
    *(_QWORD *)&v16 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v16 + 1) = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
  }
  v14 = (_QWORD *)sub_180012BF8((__int64)(a1 + 1), &v20);
  v17[0] = (*v14 + 24LL) & -(__int64)(*v14 != 0LL);
  v17[1] = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  sub_180029B78((__int64)v17, (__int64)&v16);
  if ( v21 )
    sub_180010EC8(v21);
  sub_180011E54((__int64)&v18);
  return a2;
}
