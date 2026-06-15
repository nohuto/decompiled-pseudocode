/*
 * XREFs of sub_140021D2C @ 0x140021D2C
 * Callers:
 *     sub_140021CC8 @ 0x140021CC8 (sub_140021CC8.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140020AA4 @ 0x140020AA4 (sub_140020AA4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140021D2C(__int64 a1)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 136) )
    return 0LL;
  v12 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  v4 = sub_1400B6010(v3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v12;
    v7 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( v7 )
      sub_1400B6010(v7);
    v8 = sub_1400B6010(v6);
    v5 = v8;
    if ( v8 < 0 )
    {
      v10 = 126;
    }
    else
    {
      v13 = a1;
      v9 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 184) = 0LL;
      if ( v9 )
        sub_1400B6010(v9);
      v8 = sub_140020AA4((_QWORD *)(a1 + 184), &v13);
      v5 = v8;
      if ( v8 < 0 )
      {
        v10 = 127;
      }
      else
      {
        v8 = sub_1400B6010(*(_QWORD *)(a1 + 144));
        v5 = v8;
        if ( v8 >= 0 )
        {
          *(_BYTE *)(a1 + 136) = 1;
          if ( v12 )
            sub_1400B6010(v12);
          return 0LL;
        }
        v10 = 128;
      }
    }
    sub_14000C2A8(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v8);
    sub_140003238(&v12);
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      125,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v4);
    if ( v12 )
      sub_1400B6010(v12);
  }
  return v5;
}
