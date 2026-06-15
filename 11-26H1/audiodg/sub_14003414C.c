/*
 * XREFs of sub_14003414C @ 0x14003414C
 * Callers:
 *     sub_14003412C @ 0x14003412C (sub_14003412C.c)
 * Callees:
 *     sub_14003B1C0 @ 0x14003B1C0 (sub_14003B1C0.c)
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 */

__int64 *__fastcall sub_14003414C(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&stru_1400E84E8, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    v4 = &stru_1400E84E8;
    v8 = &qword_1400E84F0;
    qword_1400E84F0 = (__int64)off_1400BB9E8;
    qword_1400E84F8 = 0LL;
    byte_1400E8500 = 0;
    dword_1400E8504 = 0;
    qword_1400E8508 = (__int64)&unk_1400E73A0;
    sub_14004967C(a2);
    v5 = 0;
    sub_14003B1C0(&v4);
  }
  return v8;
}
