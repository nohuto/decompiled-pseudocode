/*
 * XREFs of sub_180016A10 @ 0x180016A10
 * Callers:
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180017BB8 @ 0x180017BB8 (sub_180017BB8.c)
 *     sub_180017EE0 @ 0x180017EE0 (sub_180017EE0.c)
 *     sub_180018788 @ 0x180018788 (sub_180018788.c)
 *     sub_180026CDC @ 0x180026CDC (sub_180026CDC.c)
 *     sub_180029B78 @ 0x180029B78 (sub_180029B78.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180016A10(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  char v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  __int64 v24; // [rsp+88h] [rbp+Fh]

  sub_180029EF8(a1 + 24);
  v21 = 0LL;
  v22 = 0;
  if ( *(_QWORD *)(a1 + 3984) )
  {
    v13 = sub_180026CDC(a1, v20);
    sub_180018788(&v21, v13);
    sub_180011E54((__int64)v20);
  }
  sub_180017EE0((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  sub_180012C40(&v19, a2);
  v15 = *(_QWORD *)(v14 + 8);
  if ( v15 == *(_QWORD *)(v14 + 16) )
    sub_180017BB8(v14, v15, &v19);
  else
    sub_1800119A4(v14, &v19);
  if ( *((_QWORD *)&v19 + 1) )
    sub_180010EC8(*((__int64 *)&v19 + 1));
  v19 = 0LL;
  v16 = a2[1];
  if ( v16 )
  {
    *(_QWORD *)&v19 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v19 + 1) = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
  }
  v17 = (_QWORD *)sub_180012BF8(a1 + 8, &v23);
  v20[0] = (*v17 + 24LL) & -(__int64)(*v17 != 0LL);
  v20[1] = v17[1];
  *v17 = 0LL;
  v17[1] = 0LL;
  sub_180029B78(v20, &v19);
  if ( v24 )
    sub_180010EC8(v24);
  sub_180011E54((__int64)&v21);
  return a2;
}
