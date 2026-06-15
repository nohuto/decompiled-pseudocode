/*
 * XREFs of sub_14007B9C8 @ 0x14007B9C8
 * Callers:
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003F4A8 @ 0x14003F4A8 (sub_14003F4A8.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004CF78 @ 0x14004CF78 (sub_14004CF78.c)
 *     sub_14004D618 @ 0x14004D618 (sub_14004D618.c)
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_14004E670 @ 0x14004E670 (sub_14004E670.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 *     sub_140077CBC @ 0x140077CBC (sub_140077CBC.c)
 */

__int64 __fastcall sub_14007B9C8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rbx
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)sub_14004E670(8u, 0x130uLL);
  v8 = (_QWORD *)v6;
  if ( v6 )
  {
    v13 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_14004F778();
    v10 = sub_14004D618((__int64)&v13, a1, v7, v6 >> 2);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v8[1] = *a2;
      v12 = v13;
      *a2 = 0LL;
      *((_OWORD *)v8 + 1) = __PAIR128__(*((unsigned __int64 *)&v13 + 1), v12);
      v13 = 0uLL;
      memset(v8 + 5, 0, 0x108uLL);
      v8[4] = 0LL;
      sub_140077CBC((__int64)(v8 + 5));
      sub_14003F4A8((__int64)(v8 + 29));
      *a3 = v8;
      sub_14004CF78((__int64)&v13);
      return 0LL;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 331, (int)&unk_1400C71E8, v10);
      sub_14004CF78((__int64)&v13);
      sub_14004DB08(v8);
      return v11;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 328, (int)&unk_1400C71E8, -2147024882);
    return 2147942414LL;
  }
}
