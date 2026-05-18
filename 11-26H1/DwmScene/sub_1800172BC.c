/*
 * XREFs of sub_1800172BC @ 0x1800172BC
 * Callers:
 *     sub_180018EE0 @ 0x180018EE0 (sub_180018EE0.c)
 * Callees:
 *     sub_18000E4EC @ 0x18000E4EC (sub_18000E4EC.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_18007EBB8 @ 0x18007EBB8 (sub_18007EBB8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800172BC(__int64 **a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (__int64 *)sub_18001C540(32LL);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    *v5 = (__int64)&ISpectreMaterial::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    *v5 = (__int64)off_1800EE768;
    if ( qword_1801C84F8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C84F8 + 8LL))(qword_1801C84F8);
    *v6 = (__int64)off_1800EE998;
    v7 = v6 + 2;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v11 = v6;
    v10 = 0LL;
    sub_180013540(v6 + 2, a2);
    *(_WORD *)(*v7 + 112) |= 0x10u;
    *(_WORD *)(*v7 + 112) &= ~2u;
    *(_WORD *)(*v7 + 112) |= 1u;
    LOBYTE(v8) = 1;
    sub_1800434E4(v6[2], &unk_1801CCF38, v8);
    sub_18007EBB8(*(_QWORD *)(v6[2] + 120), &unk_1801CBF78, 1LL);
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    sub_18000F938((__int64 *)&v11);
  }
  else
  {
    v4 = -2147024882;
  }
  sub_18000E4EC((void **)&v10);
  return v4;
}
