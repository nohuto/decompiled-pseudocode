/*
 * XREFs of sub_1400458C4 @ 0x1400458C4
 * Callers:
 *     sub_140021488 @ 0x140021488 (sub_140021488.c)
 * Callees:
 *     sub_140045810 @ 0x140045810 (sub_140045810.c)
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400458C4(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  try
  {
    v3 = sub_140045810(&v7, &v6);
    sub_14004591C(a1 + 16, v3);
    if ( v7 )
      sub_1400B6010(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           retaddr,
                           13LL,
                           "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp");
  }
  return result;
}
