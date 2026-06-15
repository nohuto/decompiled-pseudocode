/*
 * XREFs of sub_140065010 @ 0x140065010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140028D60 @ 0x140028D60 (sub_140028D60.c)
 *     sub_140064760 @ 0x140064760 (sub_140064760.c)
 *     sub_14006622C @ 0x14006622C (sub_14006622C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140065010(__int64 a1, unsigned int *a2, int a3)
{
  unsigned __int64 v6; // r8
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  sub_140028D60(*((_QWORD *)a2 + 1), (__int64)&v12);
  v6 = DWORD1(v13) * (unsigned __int64)(unsigned int)v13;
  if ( v6 > 0xFFFFFFFF )
  {
    v8 = 632;
    goto LABEL_20;
  }
  if ( (unsigned int)v6 * (unsigned __int64)*a2 > 0xFFFFFFFF )
  {
    v8 = 636;
LABEL_20:
    v7 = -2147024362;
    goto LABEL_21;
  }
  sub_14006622C(&v12);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = sub_1400B6010(*(_QWORD *)(a1 + 40));
    if ( v7 < 0 )
    {
      v8 = 644;
LABEL_21:
      sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v7);
      return (unsigned int)v7;
    }
    return 0LL;
  }
  if ( !a3 )
  {
    v7 = sub_1400B6010(*(_QWORD *)(a1 + 40));
    if ( v7 < 0 )
    {
      v8 = 654;
      goto LABEL_21;
    }
    return 0LL;
  }
  if ( (unsigned int)(a3 - 1) >= 2 )
  {
    v7 = -2147024809;
    v8 = 667;
    goto LABEL_21;
  }
  v16 = 0LL;
  v9 = sub_140064760(*(_QWORD *)(a1 + 48), &v16);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v9 = sub_1400B6010(v16);
    v7 = v9;
    if ( v9 >= 0 )
    {
      sub_140003238(&v16);
      return 0LL;
    }
    v10 = 663;
  }
  else
  {
    v10 = 662;
  }
  sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v9);
  sub_140003238(&v16);
  return (unsigned int)v7;
}
