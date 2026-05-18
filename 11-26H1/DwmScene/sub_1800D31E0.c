/*
 * XREFs of sub_1800D31E0 @ 0x1800D31E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800D2CA8 @ 0x1800D2CA8 (sub_1800D2CA8.c)
 *     sub_1800D3370 @ 0x1800D3370 (sub_1800D3370.c)
 *     sub_1800D4270 @ 0x1800D4270 (sub_1800D4270.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D31E0(__int64 *a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD v12[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-48h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180012AC4((__int64)(a1 + 8));
  v5 = 0;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v13, a2);
    v7 = sub_1800D2CA8(a1 + 18, v6);
    sub_180014244((__int64)v13);
    v8 = sub_1800141BC(a2);
    if ( (unsigned __int8)sub_1800D4380(v7, v8) )
    {
      v9 = sub_180013440(v12, a2);
      v10 = sub_1800D4270(v7, v9);
      v5 = sub_1800D3370(a1, v10);
    }
  }
  Mtx_unlock(v4);
  return v5;
}
