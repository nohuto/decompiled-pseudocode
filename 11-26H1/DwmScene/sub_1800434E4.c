/*
 * XREFs of sub_1800434E4 @ 0x1800434E4
 * Callers:
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_18004B480 @ 0x18004B480 (sub_18004B480.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 *     sub_180093220 @ 0x180093220 (sub_180093220.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 *     sub_18004E0D4 @ 0x18004E0D4 (sub_18004E0D4.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 */

__int64 __fastcall sub_1800434E4(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  result = sub_180026A6C(a1, &v10);
  if ( v10 )
  {
    v6 = (_QWORD *)sub_18005DD64(v10, v12);
    v8 = sub_18004E0D4(*v6, v7);
    LOBYTE(v9) = a3;
    result = sub_180043560(a1, v8, v9);
    if ( v13 )
      result = sub_180010EC8(v13);
  }
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
