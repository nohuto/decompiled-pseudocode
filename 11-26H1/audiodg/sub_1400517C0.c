/*
 * XREFs of sub_1400517C0 @ 0x1400517C0
 * Callers:
 *     sub_140050FFC @ 0x140050FFC (sub_140050FFC.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140045810 @ 0x140045810 (sub_140045810.c)
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 */

__int64 __fastcall sub_1400517C0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  try
  {
    v3 = sub_140045810(&v7, &v6);
    sub_14004591C(a1 + 16, v3);
    sub_140003238(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           (int)retaddr,
                           61,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp");
  }
  return result;
}
