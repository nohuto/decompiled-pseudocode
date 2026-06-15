/*
 * XREFs of sub_14001AD30 @ 0x14001AD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001BB78 @ 0x14001BB78 (sub_14001BB78.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001AD30(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v10; // [rsp+68h] [rbp+48h] BYREF

  if ( a2 )
  {
    *a2 = 0LL;
    v10 = 0LL;
    v3 = sub_14001BB78(a1, &v10);
    v4 = v3;
    if ( v3 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1422, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v3);
    }
    else
    {
      sub_1400B6010(*(_QWORD *)(a1 + 64));
      v5 = v10;
      v6 = sub_1400B6010(v10);
      v7 = v6;
      if ( v6 >= 0 )
      {
        sub_1400B6010(v5);
        return 0LL;
      }
      sub_14000C2A8((int)retaddr, 1440, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
      v4 = v7;
    }
    sub_140003238(&v10);
  }
  else
  {
    v4 = -2147467261;
    sub_14000C2A8(
      (int)retaddr,
      1418,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      -2147467261);
  }
  return v4;
}
