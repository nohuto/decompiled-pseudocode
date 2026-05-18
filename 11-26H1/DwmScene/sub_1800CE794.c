/*
 * XREFs of sub_1800CE794 @ 0x1800CE794
 * Callers:
 *     sub_1800CE050 @ 0x1800CE050 (sub_1800CE050.c)
 *     sub_1800CE2A0 @ 0x1800CE2A0 (sub_1800CE2A0.c)
 *     sub_1800CE4B0 @ 0x1800CE4B0 (sub_1800CE4B0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800CE794(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v8);
  v4 = (_QWORD *)sub_180012A94(v3, &v6);
  *a2 = *v4;
  a2[1] = 0LL;
  a2[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v7 )
    sub_180010EC8(v7);
  if ( v9 )
    sub_180010F00(v9);
  return a2;
}
