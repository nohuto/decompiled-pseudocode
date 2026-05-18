/*
 * XREFs of sub_1800D1314 @ 0x1800D1314
 * Callers:
 *     sub_1800D3710 @ 0x1800D3710 (sub_1800D3710.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D1280 @ 0x1800D1280 (sub_1800D1280.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D37C0 @ 0x1800D37C0 (sub_1800D37C0.c)
 *     sub_1800D4270 @ 0x1800D4270 (sub_1800D4270.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D1314(__int64 a1, __int64 a2, char a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD v22[5]; // [rsp+28h] [rbp-71h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v25[32]; // [rsp+90h] [rbp-9h] BYREF

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v22[4] = a1 + 64;
  sub_180012AC4(a1 + 64);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v25, a2);
  v9 = *(_QWORD *)sub_1800D21F4(a1 + 144, v24, v25) + 64LL;
  v10 = sub_1800141BC(a2);
  if ( (unsigned __int8)sub_1800D4380(v9, v10) )
  {
    v11 = 2;
    if ( a4 == 2 )
    {
      v11 = 3;
    }
    else
    {
      v12 = sub_180013440(v23, a2);
      v13 = sub_1800D4270(v9, v12);
      v14 = v13;
      if ( *(_DWORD *)v13 == 5 )
      {
        sub_18001E58C((__int64)v24, (__int64)L"Value");
        v16 = sub_1800141BC((__int64)v24);
        if ( (unsigned __int8)sub_1800D4380(v14, v16)
          && (v17 = sub_180013440(v22, (__int64)v24), v18 = sub_1800D4270(v14, v17), *(_DWORD *)v18 == 4) )
        {
          if ( *(_BYTE *)(v18 + 60) != a3 )
          {
            v19 = sub_180013440(v22, (__int64)v24);
            sub_1800D1280(v14, (__int64)v19, a3);
            v11 = 1;
          }
        }
        else
        {
          v11 = 5;
        }
        sub_180014244((__int64)v24);
      }
      else if ( *(_DWORD *)v13 == 4 )
      {
        if ( *(_BYTE *)(v13 + 60) != a3 )
        {
          v15 = sub_180013440(v23, a2);
          sub_1800D1280(v9, (__int64)v15, a3);
          v11 = 1;
        }
      }
      else
      {
        v11 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v20 = sub_180013440(v22, a2);
    sub_1800D1280(v9, (__int64)v20, a3);
    v11 = 0;
  }
  else
  {
    v11 = 4;
  }
  sub_180014244((__int64)v25);
  Mtx_unlock(v8);
  if ( v11 <= 1 )
    sub_1800D37C0(a1, a2);
  return v11;
}
