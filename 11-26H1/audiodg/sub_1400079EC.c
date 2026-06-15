/*
 * XREFs of sub_1400079EC @ 0x1400079EC
 * Callers:
 *     sub_1400070E0 @ 0x1400070E0 (sub_1400070E0.c)
 * Callees:
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400079EC(_QWORD *a1, int a2, __int64 a3)
{
  int v4; // edx
  _QWORD *v5; // rbx
  int v6; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v8 = a1 + 19;
    if ( !a1[19] )
    {
      v15 = a1[18];
      *v8 = 0LL;
      v12 = sub_1400B6010(v15);
      if ( v12 < 0 )
      {
        v13 = 86LL;
        goto LABEL_17;
      }
    }
    v6 = sub_140007B68(v8, a3);
    if ( v6 < 0 )
    {
      v9 = 88LL;
      goto LABEL_14;
    }
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v10 = a1 + 20;
    if ( !a1[20] )
    {
      v14 = a1[18];
      *v10 = 0LL;
      v12 = sub_1400B6010(v14);
      if ( v12 < 0 )
      {
        v13 = 94LL;
        goto LABEL_17;
      }
    }
    v6 = sub_140007B68(v10, a3);
    if ( v6 < 0 )
    {
      v9 = 96LL;
      goto LABEL_14;
    }
    return 0LL;
  }
  if ( v4 != 1 )
    return 0LL;
  v5 = a1 + 21;
  if ( a1[21] || (v11 = a1[18], *v5 = 0LL, v12 = sub_1400B6010(v11), v12 >= 0) )
  {
    v6 = sub_140007B68(v5, a3);
    if ( v6 >= 0 )
      return 0LL;
    v9 = 104LL;
LABEL_14:
    sub_14000C2A8(
      retaddr,
      v9,
      "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      (unsigned int)v6);
    return (unsigned int)v6;
  }
  v13 = 102LL;
LABEL_17:
  sub_14000C2A8(
    retaddr,
    v13,
    "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
    (unsigned int)v12);
  return (unsigned int)v12;
}
