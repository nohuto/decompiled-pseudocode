/*
 * XREFs of sub_140021CC8 @ 0x140021CC8
 * Callers:
 *     sub_140021C40 @ 0x140021C40 (sub_140021C40.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140021D2C @ 0x140021D2C (sub_140021D2C.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 */

_QWORD *__fastcall sub_140021CC8(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  result = (_QWORD *)*a2;
  try
  {
    while ( result )
    {
      if ( result[1] == a3 )
        return result;
      result = (_QWORD *)*result;
    }
    v5 = sub_140021D2C();
    if ( v5 < 0 )
      sub_140007934(
        (int)retaddr,
        146,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v5);
    result = (_QWORD *)sub_14004C84C(a2, &v7);
  }
  catch ( ... )
  {
    return (_QWORD *)sub_140050410(
                       retaddr,
                       151LL,
                       "avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp");
  }
  return result;
}
