/*
 * XREFs of sub_1400796FC @ 0x1400796FC
 * Callers:
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001BB78 @ 0x14001BB78 (sub_14001BB78.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1400796FC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edi
  int v7; // edx
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]

  v13 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      v13 = 0LL;
      v9 = sub_14001BB78(a1, &v13);
      v6 = v9;
      if ( v9 < 0 )
      {
        v8 = v9;
        v7 = 719;
        goto LABEL_6;
      }
      v10 = sub_1400B6010(*(_QWORD *)(a1 + 112));
      v6 = v10;
      if ( v10 < 0 )
      {
        v8 = v10;
        v7 = 721;
        goto LABEL_6;
      }
      v11 = sub_1400B6010(v13);
      v6 = v11;
      if ( v11 < 0 )
      {
        v8 = v11;
        v7 = 747;
        goto LABEL_6;
      }
      if ( *a4 )
      {
        v6 = 0;
        goto LABEL_16;
      }
      v6 = -2147467259;
      v7 = 748;
    }
    else
    {
      v6 = -2147024809;
      v7 = 717;
    }
  }
  else
  {
    v6 = -2147467261;
    v7 = 716;
  }
  v8 = v6;
LABEL_6:
  sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v8);
LABEL_16:
  sub_140003238(&v13);
  return v6;
}
