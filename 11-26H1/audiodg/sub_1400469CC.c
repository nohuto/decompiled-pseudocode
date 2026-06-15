/*
 * XREFs of sub_1400469CC @ 0x1400469CC
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     sub_140046A6C @ 0x140046A6C (sub_140046A6C.c)
 *     sub_140046B38 @ 0x140046B38 (sub_140046B38.c)
 */

__int64 __fastcall sub_1400469CC(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  int v4; // eax
  unsigned int v5; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_140044BB0(&v7, a1);
  sub_140046A6C(a1 + 304, v2);
  if ( *(_QWORD *)(a1 + 296) )
  {
    try
    {
      v4 = sub_140046B38();
      v5 = v4;
      if ( v4 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        sub_14000C2A8((int)retaddr, 221, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v4);
        result = v5;
      }
    }
    catch ( ... )
    {
      return (unsigned int)sub_14004EEE4(
                             retaddr,
                             224LL,
                             "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 219, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147024882);
    return 2147942414LL;
  }
  return result;
}
