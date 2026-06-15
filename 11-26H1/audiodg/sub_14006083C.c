/*
 * XREFs of sub_14006083C @ 0x14006083C
 * Callers:
 *     sub_140060664 @ 0x140060664 (sub_140060664.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14009D2B8 @ 0x14009D2B8 (sub_14009D2B8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14006083C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int v12; // edi
  int v13; // edx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // eax
  int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // r15d
  __int64 v26; // rsi
  __int128 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  char v29; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v31; // [rsp+B0h] [rbp+30h] BYREF

  v10 = (_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 40);
  *v10 = 0LL;
  if ( v11 )
    sub_1400B6010(v11);
  v27 = xmmword_1400C5548;
  v28 = *a4;
  v12 = sub_14009D2B8((unsigned int)&v28, (unsigned int)&v27, a5, (_DWORD)a4, (__int64)v10);
  if ( v12 < 0 )
  {
    v13 = 57;
LABEL_5:
    sub_14000C2A8((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp", v12);
    return (unsigned int)v12;
  }
  v15 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v15 )
    sub_1400B6010(v15);
  v16 = sub_1400B6010(*v10);
  v17 = v16;
  if ( v16 < 0 )
  {
    sub_14000C2A8((int)retaddr, 59, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp", v16);
    return v17;
  }
  v12 = sub_1400B6010(*(_QWORD *)(a1 + 32));
  if ( v12 < 0 )
  {
    v13 = 60;
    goto LABEL_5;
  }
  v18 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v18 )
    sub_1400B6010(v18);
  v12 = sub_1400B6010(*v10);
  if ( v12 < 0 )
  {
    v13 = 62;
    goto LABEL_5;
  }
  v19 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( v19 )
    sub_1400B6010(v19);
  v12 = sub_1400B6010(*v10);
  if ( v12 < 0 )
  {
    v13 = 63;
    goto LABEL_5;
  }
  v20 = *v10;
  v28 = (unsigned __int64)(a1 + 16);
  v29 = 1;
  v21 = sub_1400B6010(v20);
  sub_140033E34((__int64)&v28);
  if ( v21 >= 0 )
  {
    v31 = 0LL;
    v22 = sub_14004B6D4(
            *(_QWORD *)(a1 + 16),
            (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 16LL) + 18,
            &v31);
    v21 = v22;
    if ( v22 >= 0 )
    {
      v24 = a6;
      v25 = a7;
      if ( a6 >= a7 )
        v24 = a7;
      *(_DWORD *)(a1 + 84) = 2 * v24;
      sub_14001821C((__int64 *)(a1 + 24), a2);
      v26 = *(_QWORD *)(a1 + 24);
      sub_14000EE10((__int64 *)(a1 + 64));
      v22 = sub_1400B6010(v26);
      v21 = v22;
      if ( v22 >= 0 )
      {
        *(_DWORD *)(a1 + 72) = v25;
        *(_BYTE *)(a1 + 81) = 1;
        v21 = 0;
        goto LABEL_30;
      }
      v23 = 86;
    }
    else
    {
      v23 = 68;
    }
    sub_14000C2A8((int)retaddr, v23, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp", v22);
LABEL_30:
    sub_140003238(&v31);
    return (unsigned int)v21;
  }
  sub_14000C2A8((int)retaddr, 65, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp", v21);
  return (unsigned int)v21;
}
