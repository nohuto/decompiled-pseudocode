/*
 * XREFs of sub_140026DE0 @ 0x140026DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140026DE0(__int64 a1)
{
  __int64 v1; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  sub_140026F50(*(_QWORD *)(a1 + 16), &xmmword_1400C67D8, &v6);
  v1 = v6;
  if ( !v6 )
  {
LABEL_2:
    if ( v1 )
      sub_1400B6010(v1);
    return 0LL;
  }
  v3 = sub_1400B6010(v6);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v1 = v6;
    goto LABEL_2;
  }
  sub_14000C2A8(
    (int)retaddr,
    22,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    v3);
  if ( v6 )
    sub_1400B6010(v6);
  return v4;
}
