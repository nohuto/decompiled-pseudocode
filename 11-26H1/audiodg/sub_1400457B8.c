/*
 * XREFs of sub_1400457B8 @ 0x1400457B8
 * Callers:
 *     sub_140020AA4 @ 0x140020AA4 (sub_140020AA4.c)
 * Callees:
 *     sub_140045810 @ 0x140045810 (sub_140045810.c)
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400457B8(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+18h]

  try
  {
    v2 = sub_140045810();
    sub_14004591C(a1 + 16, v2);
    if ( v5 )
      sub_1400B6010(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           retaddr,
                           15LL,
                           "avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp");
  }
  return result;
}
