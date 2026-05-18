/*
 * XREFs of sub_1800D1A4C @ 0x1800D1A4C
 * Callers:
 *     sub_1800D1A4C @ 0x1800D1A4C (sub_1800D1A4C.c)
 *     sub_1800D2F60 @ 0x1800D2F60 (sub_1800D2F60.c)
 *     sub_1800D38B0 @ 0x1800D38B0 (sub_1800D38B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 *     sub_1800D1A4C @ 0x1800D1A4C (sub_1800D1A4C.c)
 *     sub_1800D2CA8 @ 0x1800D2CA8 (sub_1800D2CA8.c)
 *     sub_1800D4270 @ 0x1800D4270 (sub_1800D4270.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D1A4C(__int64 a1, __int64 a2, _BYTE *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-39h] BYREF
  __int64 v19; // [rsp+28h] [rbp-31h]
  __int64 v20; // [rsp+40h] [rbp-19h]
  _QWORD v21[4]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp+Fh] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v20 = a1 + 64;
  sub_180012AC4(a1 + 64);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v22, a2);
  v8 = sub_1800D2CA8(a1 + 144, v7);
  sub_180014244((__int64)v22);
  v9 = sub_1800141BC(a2);
  if ( (unsigned __int8)sub_1800D4380(v8, v9) )
  {
    v11 = sub_180013440(v21, a2);
    v12 = sub_1800D4270(v8, v11);
    v13 = v12;
    if ( *(_DWORD *)v12 == 5 )
    {
      sub_18001E58C((__int64)v22, (__int64)L"Value");
      v14 = sub_1800141BC((__int64)v22);
      if ( (unsigned __int8)sub_1800D4380(v13, v14) )
      {
        v15 = sub_180013440(&v18, (__int64)v22);
        v16 = sub_1800D4270(v13, v15);
        if ( *(_DWORD *)v16 == 4 )
        {
          *a3 = *(_BYTE *)(v16 + 60);
          sub_180014244((__int64)v22);
          goto LABEL_14;
        }
      }
      sub_180014244((__int64)v22);
    }
    else if ( *(_DWORD *)v12 == 4 )
    {
      *a3 = *(_BYTE *)(v12 + 60);
LABEL_14:
      v10 = 0;
      goto LABEL_17;
    }
    v10 = 1;
    goto LABEL_17;
  }
  sub_18004068C(a1, &v18);
  if ( v18 )
  {
    v10 = sub_1800D1A4C(v18, a2, a3);
    if ( v19 )
      sub_180010EC8(v19);
  }
  else
  {
    if ( v19 )
      sub_180010EC8(v19);
    v10 = 2;
  }
LABEL_17:
  Mtx_unlock(v6);
  return v10;
}
