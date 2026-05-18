/*
 * XREFs of sub_1800C05D4 @ 0x1800C05D4
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_1800BF920 @ 0x1800BF920 (sub_1800BF920.c)
 *     sub_1800BFAC0 @ 0x1800BFAC0 (sub_1800BFAC0.c)
 *     sub_1800BFBF0 @ 0x1800BFBF0 (sub_1800BFBF0.c)
 *     sub_1800BFEF0 @ 0x1800BFEF0 (sub_1800BFEF0.c)
 *     sub_1800C0290 @ 0x1800C0290 (sub_1800C0290.c)
 *     sub_1800C0430 @ 0x1800C0430 (sub_1800C0430.c)
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 *     sub_1800C13F0 @ 0x1800C13F0 (sub_1800C13F0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800BF284 @ 0x1800BF284 (sub_1800BF284.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C05D4(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v7);
  sub_180012A94(v3, &v5);
  if ( v8 )
    sub_180010F00(v8);
  if ( v5 )
  {
    sub_1800BF284(a2, &v5);
    if ( v6 )
      sub_180010EC8(v6);
  }
  else
  {
    if ( v6 )
      sub_180010EC8(v6);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
