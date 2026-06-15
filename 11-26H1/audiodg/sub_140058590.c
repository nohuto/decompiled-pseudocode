/*
 * XREFs of sub_140058590 @ 0x140058590
 * Callers:
 *     sub_140058500 @ 0x140058500 (sub_140058500.c)
 *     sub_1400A22A4 @ 0x1400A22A4 (sub_1400A22A4.c)
 *     sub_1400A2330 @ 0x1400A2330 (sub_1400A2330.c)
 *     sub_1400A23BC @ 0x1400A23BC (sub_1400A23BC.c)
 *     sub_1400A2448 @ 0x1400A2448 (sub_1400A2448.c)
 *     sub_1400A24D8 @ 0x1400A24D8 (sub_1400A24D8.c)
 *     sub_1400A255C @ 0x1400A255C (sub_1400A255C.c)
 * Callees:
 *     sub_140058634 @ 0x140058634 (sub_140058634.c)
 *     sub_140059048 @ 0x140059048 (sub_140059048.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_UNKNOWN **__fastcall sub_140058590(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  _UNKNOWN **result; // rax
  int v9; // eax
  int v10; // r9d
  int v11; // r10d
  int v12; // r11d
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a7 )
  {
    v9 = sub_140059048(a7, a6);
    result = (_UNKNOWN **)sub_140058634(v12, a2, v11, v10, v9);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)qword_1400E8570;
      if ( qword_1400E8570 )
        return (_UNKNOWN **)sub_1400B6010(a2);
    }
  }
  return result;
}
