/*
 * XREFs of sub_180015784 @ 0x180015784
 * Callers:
 *     sub_1800159C0 @ 0x1800159C0 (sub_1800159C0.c)
 *     sub_18001BE84 @ 0x18001BE84 (sub_18001BE84.c)
 * Callees:
 *     sub_18000E4EC @ 0x18000E4EC (sub_18000E4EC.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180015828 @ 0x180015828 (sub_180015828.c)
 *     sub_180015ADC @ 0x180015ADC (sub_180015ADC.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180015784(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (void *)sub_18001C540(48LL);
  v10 = v5;
  if ( v5 )
  {
    v6 = sub_180015828(v5);
    v9 = 0LL;
    sub_180015ADC(&v9, v6);
    v10 = 0LL;
    v7 = v9;
    sub_180013540((__int64 *)(v9 + 32), a2);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    sub_18000F938(&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_18000E4EC(&v10);
  return v4;
}
