/*
 * XREFs of sub_14004E30C @ 0x14004E30C
 * Callers:
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004CF78 @ 0x14004CF78 (sub_14004CF78.c)
 *     sub_14004D618 @ 0x14004D618 (sub_14004D618.c)
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_14004E670 @ 0x14004E670 (sub_14004E670.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 */

__int64 __fastcall sub_14004E30C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = sub_14004E670(8u, 0x78uLL);
  v9 = (_QWORD *)v6;
  if ( v6 )
  {
    v14 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_14004F778(v7);
    v11 = sub_14004D618((__int64)&v14, a1, v8, v6 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v9[1] = *a2;
      v13 = v14;
      *a2 = 0LL;
      *((_OWORD *)v9 + 1) = __PAIR128__(*((unsigned __int64 *)&v14 + 1), v13);
      v14 = 0uLL;
      memset((char *)v9 + 34, 0, 0x56uLL);
      *((_WORD *)v9 + 16) = 88;
      *((_DWORD *)v9 + 9) = 1;
      memset(v9 + 5, 0, 0x50uLL);
      *a3 = v9;
      sub_14004CF78((__int64)&v14);
      return 0LL;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 331, (int)&unk_1400C71E8, v11);
      sub_14004CF78((__int64)&v14);
      sub_14004DB08(v9);
      return v12;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 328, (int)&unk_1400C71E8, -2147024882);
    return 2147942414LL;
  }
}
