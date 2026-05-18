/*
 * XREFs of sub_1800D0CF0 @ 0x1800D0CF0
 * Callers:
 *     sub_1800D3720 @ 0x1800D3720 (sub_1800D3720.c)
 *     sub_1800D3730 @ 0x1800D3730 (sub_1800D3730.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D0C58 @ 0x1800D0C58 (sub_1800D0C58.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D37C0 @ 0x1800D37C0 (sub_1800D37C0.c)
 *     sub_1800D4270 @ 0x1800D4270 (sub_1800D4270.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D0CF0(__int64 a1, __int64 a2, double a3, int a4)
{
  struct _Mtx_internal_imp_t *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD v21[5]; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v24[32]; // [rsp+98h] [rbp-19h] BYREF

  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v21[4] = a1 + 64;
  sub_180012AC4(a1 + 64);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v24, a2);
  v8 = *(_QWORD *)sub_1800D21F4(a1 + 144, v23, v24) + 64LL;
  v9 = sub_1800141BC(a2);
  if ( (unsigned __int8)sub_1800D4380(v8, v9) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v11 = sub_180013440(v22, a2);
      v12 = sub_1800D4270(v8, v11);
      v13 = v12;
      if ( *(_DWORD *)v12 == 5 )
      {
        sub_18001E58C((__int64)v23, (__int64)L"Value");
        v15 = sub_1800141BC((__int64)v23);
        if ( (unsigned __int8)sub_1800D4380(v13, v15)
          && (v16 = sub_180013440(v21, (__int64)v23), v17 = sub_1800D4270(v13, v16), *(_DWORD *)v17 == 2) )
        {
          if ( *(double *)(v17 + 48) != a3 )
          {
            v18 = sub_180013440(v21, (__int64)v23);
            sub_1800D0C58(v13, (__int64)v18, a3);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        sub_180014244((__int64)v23);
      }
      else if ( *(_DWORD *)v12 == 2 )
      {
        if ( *(double *)(v12 + 48) != a3 )
        {
          v14 = sub_180013440(v22, a2);
          sub_1800D0C58(v8, (__int64)v14, a3);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v19 = sub_180013440(v21, a2);
    sub_1800D0C58(v8, (__int64)v19, a3);
    v10 = 0;
  }
  else
  {
    v10 = 4;
  }
  sub_180014244((__int64)v24);
  Mtx_unlock(v7);
  if ( v10 <= 1 )
    sub_1800D37C0(a1, a2);
  return v10;
}
