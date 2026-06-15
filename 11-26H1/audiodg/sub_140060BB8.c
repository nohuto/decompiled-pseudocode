/*
 * XREFs of sub_140060BB8 @ 0x140060BB8
 * Callers:
 *     sub_14000908C @ 0x14000908C (sub_14000908C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005DFF0 @ 0x14005DFF0 (sub_14005DFF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140060BB8(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // esi
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  if ( *(_DWORD *)a1 )
  {
    if ( a2 )
      sub_1400B6010(a2);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      v5 = sub_1400B6010(v4);
      if ( v5 < 0 )
      {
        v6 = 64;
LABEL_7:
        sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v5);
        return (unsigned int)v5;
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( v8 )
      {
        v5 = sub_1400B6010(v8);
        if ( v5 < 0 )
        {
          v6 = 68;
          goto LABEL_7;
        }
      }
    }
    v9 = sub_1400B6010(*(_QWORD *)(a1 + 48));
    v5 = v9;
    if ( v9 < 0 )
    {
      sub_14000C2A8((int)retaddr, 73, (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", v9);
      return (unsigned int)v5;
    }
    if ( a2 )
      sub_14005DFF0((__int64 *)(a1 + 56), a2);
  }
  return 0LL;
}
