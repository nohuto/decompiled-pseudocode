/*
 * XREFs of sub_1400313EC @ 0x1400313EC
 * Callers:
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1400313EC(_QWORD *a1)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( (int)sub_1400B6010(*a1) >= 0 )
  {
    v4 = sub_1400B6010(a1[5]);
    v5 = v4;
    if ( v4 < 0 )
    {
      sub_14000C2A8((int)retaddr, 452, (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", v4);
      sub_140003238(&v9);
      return v5;
    }
    v6 = v9;
    v2 = 0LL;
    v9 = 0LL;
    v7 = a1[3];
    a1[3] = v6;
    if ( v7 )
    {
      sub_1400B6010(v7);
      v2 = v9;
    }
  }
  else
  {
    v2 = v9;
  }
  if ( v2 )
    sub_1400B6010(v2);
  return 0LL;
}
