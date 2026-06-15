/*
 * XREFs of sub_14007BD30 @ 0x14007BD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140077108 @ 0x140077108 (sub_140077108.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14007BD30(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  int v4; // r9d
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+20h]
  unsigned int v15; // [rsp+70h] [rbp+28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+30h] BYREF
  __int64 v17; // [rsp+80h] [rbp+38h] BYREF
  __int64 v18; // [rsp+88h] [rbp+40h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  sub_14001821C(&v17, *(_QWORD *)(*(_QWORD *)(a1 + 176) + 96LL));
  v2 = v17;
  if ( v17 )
  {
    v6 = v16;
    v16 = 0LL;
    if ( v6 )
      sub_1400B6010(v6);
    v7 = sub_1400B6010(v2);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v13[0] = v16;
      v15 = 0;
      v8 = sub_140077108(&v18, &v15, v13);
      v9 = *v8;
      *v8 = 0LL;
      v10 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 160) = v9;
      if ( v10 )
        sub_1400B6010(v10);
      v11 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        sub_1400B6010(v11);
      }
      if ( !*(_QWORD *)(a1 + 160) )
      {
        v3 = -2147024882;
        v4 = -2147024882;
        v5 = 1750;
        goto LABEL_8;
      }
      v7 = sub_140079B90(a1);
      v3 = v7;
      if ( v7 >= 0 )
      {
        v3 = 0;
        goto LABEL_18;
      }
      v5 = 1753;
    }
    else
    {
      v5 = 1745;
    }
    v4 = v7;
  }
  else
  {
    v3 = -2147467261;
    v4 = -2147467261;
    v5 = 1743;
  }
LABEL_8:
  sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v4);
LABEL_18:
  sub_140003238(&v16);
  sub_140003238(&v17);
  return v3;
}
