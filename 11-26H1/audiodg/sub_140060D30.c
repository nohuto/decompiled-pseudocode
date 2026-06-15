/*
 * XREFs of sub_140060D30 @ 0x140060D30
 * Callers:
 *     sub_14000908C @ 0x14000908C (sub_14000908C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140060D30(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edi
  int v4; // edx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 *v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+48h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  LODWORD(v9) = *(_DWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = sub_1400B6010(v2);
    if ( v3 < 0 )
    {
      v4 = 109;
LABEL_4:
      sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v3);
      return (unsigned int)v3;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      v3 = sub_1400B6010(v6);
      if ( v3 < 0 )
      {
        v4 = 113;
        goto LABEL_4;
      }
    }
  }
  v10 = &v9;
  v11 = 1;
  v7 = sub_1400B6010(*(_QWORD *)(a1 + 48));
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( *((_QWORD *)&v9 + 1) )
      sub_1400B6010(*((_QWORD *)&v9 + 1));
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 118, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v7);
    if ( *((_QWORD *)&v9 + 1) )
      sub_1400B6010(*((_QWORD *)&v9 + 1));
    return v8;
  }
}
