/*
 * XREFs of sub_140079510 @ 0x140079510
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001BB78 @ 0x14001BB78 (sub_14001BB78.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140079510(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  int v6; // edx
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]

  v12 = 0LL;
  if ( a3 )
  {
    if ( a2 )
    {
      v8 = sub_14001BB78(a1, &v12);
      v5 = v8;
      if ( v8 < 0 )
      {
        v7 = v8;
        v6 = 660;
        goto LABEL_6;
      }
      v9 = sub_1400B6010(*(_QWORD *)(a1 + 112));
      v5 = v9;
      if ( v9 < 0 )
      {
        v7 = v9;
        v6 = 662;
        goto LABEL_6;
      }
      v10 = sub_1400B6010(v12);
      v5 = v10;
      if ( v10 < 0 )
      {
        v7 = v10;
        v6 = 682;
        goto LABEL_6;
      }
      if ( *a3 )
      {
        v5 = 0;
        goto LABEL_16;
      }
      v5 = -2147467259;
      v6 = 683;
    }
    else
    {
      v5 = -2147024809;
      v6 = 658;
    }
  }
  else
  {
    v5 = -2147467261;
    v6 = 657;
  }
  v7 = v5;
LABEL_6:
  sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v7);
LABEL_16:
  sub_140003238(&v12);
  return v5;
}
