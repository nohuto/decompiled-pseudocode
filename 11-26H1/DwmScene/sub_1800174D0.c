/*
 * XREFs of sub_1800174D0 @ 0x1800174D0
 * Callers:
 *     sub_1800190B0 @ 0x1800190B0 (sub_1800190B0.c)
 * Callees:
 *     sub_18000E4EC @ 0x18000E4EC (sub_18000E4EC.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800174D0(__int64 **a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (__int64 *)sub_18001C540(32LL);
  v6 = v5;
  v8 = v5;
  if ( v5 )
  {
    *v5 = (__int64)&ISpectreSampler::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    *v5 = (__int64)off_1800EE638;
    if ( qword_1801C84F8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C84F8 + 8LL))(qword_1801C84F8);
    *v6 = (__int64)off_1800EE920;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v9 = v6;
    v8 = 0LL;
    sub_180013540(v6 + 2, a2);
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    sub_18000F938((__int64 *)&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_18000E4EC((void **)&v8);
  return v4;
}
