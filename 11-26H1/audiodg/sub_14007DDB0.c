/*
 * XREFs of sub_14007DDB0 @ 0x14007DDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007DDB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // r9d
  int v7; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 1477;
LABEL_8:
    v6 = v4;
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v4 = -2147024809;
    v5 = 1478;
    goto LABEL_8;
  }
  if ( !a4 )
  {
    v5 = 1479;
LABEL_7:
    v4 = -2147467261;
    goto LABEL_8;
  }
  sub_14001821C(&v10, *(_QWORD *)(a2 + 96));
  if ( !v10 )
  {
    v5 = 1483;
    goto LABEL_7;
  }
  v7 = sub_1400B6010(v10);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v4 = 0;
    goto LABEL_15;
  }
  v6 = v7;
  v5 = 1486;
LABEL_9:
  sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
LABEL_15:
  sub_140003238(&v10);
  return v4;
}
