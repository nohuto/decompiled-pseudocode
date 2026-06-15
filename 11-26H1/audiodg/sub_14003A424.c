/*
 * XREFs of sub_14003A424 @ 0x14003A424
 * Callers:
 *     sub_14003A2F0 @ 0x14003A2F0 (sub_14003A2F0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14003A424(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 176);
  if ( !*(_QWORD *)(a1 + 176) )
  {
    v12 = 0LL;
    v4 = sub_1400B6010(*(_QWORD *)(a1 + 40));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 65;
LABEL_8:
      sub_14000C2A8(
        (int)retaddr,
        v6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        v4);
      sub_140003238(&v12);
      return v5;
    }
    v7 = v12;
    v8 = *v3;
    *v3 = 0LL;
    if ( v8 )
      sub_1400B6010(v8);
    v4 = sub_1400B6010(v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 66;
      goto LABEL_8;
    }
    sub_140003238(&v12);
  }
  v10 = sub_140007B68(v3, a2);
  v5 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      68,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v10);
    return v5;
  }
  return 0LL;
}
