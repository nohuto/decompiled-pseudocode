/*
 * XREFs of sub_14003A37C @ 0x14003A37C
 * Callers:
 *     sub_14003A2F0 @ 0x14003A2F0 (sub_14003A2F0.c)
 * Callees:
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14003A37C(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (__int64 *)(a1 + 168);
  if ( *(_QWORD *)(a1 + 168) || (v7 = *(_QWORD *)(a1 + 40), *v3 = 0LL, v8 = sub_1400B6010(v7), v9 = v8, v8 >= 0) )
  {
    v4 = sub_140007B68(v3, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        79,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v4);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      77,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v8);
    return v9;
  }
}
