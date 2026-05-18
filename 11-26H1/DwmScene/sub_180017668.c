/*
 * XREFs of sub_180017668 @ 0x180017668
 * Callers:
 *     sub_180019350 @ 0x180019350 (sub_180019350.c)
 * Callees:
 *     sub_18000E4EC @ 0x18000E4EC (sub_18000E4EC.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18001C3C0 @ 0x18001C3C0 (sub_18001C3C0.c)
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180017668(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (_DWORD *)sub_18001C540(200LL);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreWorld::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = off_1800EEA10;
    if ( qword_1801C84F8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C84F8 + 8LL))(qword_1801C84F8);
    *v5 = off_1800EE698;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    sub_18009B150(v5 + 6);
    v8 = v5;
    v9 = 0LL;
    v6 = sub_18001C3C0(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      sub_18000F938((__int64 *)&v8);
      v6 = 0;
    }
    else
    {
      sub_18000F938((__int64 *)&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  sub_18000E4EC(&v9);
  return (unsigned int)v6;
}
