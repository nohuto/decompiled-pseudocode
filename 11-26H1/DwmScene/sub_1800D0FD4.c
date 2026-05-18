/*
 * XREFs of sub_1800D0FD4 @ 0x1800D0FD4
 * Callers:
 *     sub_1800D3750 @ 0x1800D3750 (sub_1800D3750.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D0964 @ 0x1800D0964 (sub_1800D0964.c)
 *     sub_1800D099C @ 0x1800D099C (sub_1800D099C.c)
 *     sub_1800D0F08 @ 0x1800D0F08 (sub_1800D0F08.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D37C0 @ 0x1800D37C0 (sub_1800D37C0.c)
 *     sub_1800D4270 @ 0x1800D4270 (sub_1800D4270.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800D0FD4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // r14
  unsigned int v14; // edi
  _QWORD *v15; // rax
  bool v16; // di
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _DWORD *v21; // rax
  _QWORD *v22; // rax
  bool v23; // di
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD v29[5]; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v30[4]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v32[4]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v33[32]; // [rsp+C0h] [rbp-9h] BYREF

  v29[4] = a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180012AC4(a1 + 64);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v33, a2);
  v9 = *(_QWORD *)sub_1800D21F4(a1 + 144, v31, v33) + 64LL;
  v10 = sub_1800141BC(a2);
  if ( (unsigned __int8)sub_1800D4380(v9, v10) )
  {
    if ( a4 == 2 )
    {
      v14 = 3;
    }
    else
    {
      v11 = sub_180013440(v29, a2);
      v12 = (_DWORD *)sub_1800D4270(v9, v11);
      v13 = (__int64)v12;
      v14 = 5;
      if ( *v12 == 5 )
      {
        sub_18001E58C((__int64)v31, (__int64)L"Value");
        v19 = sub_1800141BC((__int64)v31);
        if ( (unsigned __int8)sub_1800D4380(v13, v19) )
        {
          v20 = sub_180013440(v30, (__int64)v31);
          v21 = (_DWORD *)sub_1800D4270(v13, v20);
          if ( !*v21 )
          {
            v22 = sub_1800D099C(v32, (__int64)v21);
            v23 = sub_1800D0964((__int64)v22, a3);
            sub_180014244((__int64)v32);
            if ( v23 )
            {
              v24 = sub_180013440(v32, a3);
              v25 = sub_180013440(v30, (__int64)v31);
              sub_1800D0F08(v13, (__int64)v25, (__int64)v24);
              v14 = 1;
            }
            else
            {
              v14 = 2;
            }
          }
        }
        sub_180014244((__int64)v31);
      }
      else if ( !*v12 )
      {
        v15 = sub_1800D099C(v30, (__int64)v12);
        v16 = sub_1800D0964((__int64)v15, a3);
        sub_180014244((__int64)v30);
        if ( v16 )
        {
          v17 = sub_180013440(v30, a3);
          v18 = sub_180013440(v29, a2);
          sub_1800D0F08(v9, (__int64)v18, (__int64)v17);
          v14 = 1;
        }
        else
        {
          v14 = 2;
        }
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v26 = sub_180013440(v32, a3);
    v27 = sub_180013440(v30, a2);
    sub_1800D0F08(v9, (__int64)v27, (__int64)v26);
    v14 = 0;
  }
  else
  {
    v14 = 4;
  }
  sub_180014244((__int64)v33);
  Mtx_unlock(v8);
  if ( v14 <= 1 )
    sub_1800D37C0(a1, a2);
  sub_180014244(a3);
  return v14;
}
