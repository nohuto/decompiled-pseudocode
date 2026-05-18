/*
 * XREFs of sub_1800C5C48 @ 0x1800C5C48
 * Callers:
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800BF920 @ 0x1800BF920 (sub_1800BF920.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800CCD60 @ 0x1800CCD60 (sub_1800CCD60.c)
 *     sub_1800CCEE0 @ 0x1800CCEE0 (sub_1800CCEE0.c)
 *     sub_1800CD010 @ 0x1800CD010 (sub_1800CD010.c)
 *     sub_1800CD210 @ 0x1800CD210 (sub_1800CD210.c)
 *     sub_1800CE050 @ 0x1800CE050 (sub_1800CE050.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800C5C48(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180012A94(a1 + 72, &v7);
  sub_180029EF8(v7 + 24, v4);
  if ( v8 )
    sub_180010EC8(v8);
  v5 = *(_QWORD *)(a1 + 144);
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
