/*
 * XREFs of sub_140006490 @ 0x140006490
 * Callers:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140040230 @ 0x140040230 (sub_140040230.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_14003B1C0 @ 0x14003B1C0 (sub_14003B1C0.c)
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 */

__int64 *__fastcall sub_140006490(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    v4 = &InitOnce;
    v8 = &qword_1400E84C8;
    qword_1400E84C8 = (__int64)off_1400BB9E8;
    qword_1400E84D0 = 0LL;
    byte_1400E84D8 = 0;
    dword_1400E84DC = 0;
    qword_1400E84E0 = (__int64)&unk_1400E7368;
    sub_14004967C(a2);
    v5 = 0;
    sub_14003B1C0(&v4);
  }
  return v8;
}
