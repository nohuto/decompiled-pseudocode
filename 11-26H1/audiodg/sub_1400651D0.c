/*
 * XREFs of sub_1400651D0 @ 0x1400651D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140064760 @ 0x140064760 (sub_140064760.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400651D0(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v9 = 0LL;
    v6 = sub_140064760(v2, &v9);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = sub_1400B6010(v9);
      v4 = v6;
      if ( v6 >= 0 )
      {
        sub_140003238(&v9);
        return 0LL;
      }
      v7 = 688;
    }
    else
    {
      v7 = 687;
    }
    sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v6);
    sub_140003238(&v9);
    return v4;
  }
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 40));
  v4 = v3;
  if ( v3 < 0 )
  {
    sub_14000C2A8((int)retaddr, 681, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v3);
    return v4;
  }
  return 0LL;
}
