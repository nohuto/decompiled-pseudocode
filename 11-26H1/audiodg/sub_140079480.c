/*
 * XREFs of sub_140079480 @ 0x140079480
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140079480(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v6; // eax
  unsigned int v7; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147467261;
    v4 = 775;
LABEL_3:
    sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v3);
    return v3;
  }
  v6 = sub_1400B6010(*(_QWORD *)(a1 + 112));
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !*a2 )
    {
      v3 = -2147467259;
      v4 = 777;
      goto LABEL_3;
    }
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 776, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
    return v7;
  }
}
