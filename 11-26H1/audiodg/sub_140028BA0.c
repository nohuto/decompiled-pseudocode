/*
 * XREFs of sub_140028BA0 @ 0x140028BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002678C @ 0x14002678C (sub_14002678C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140028BA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  int v7; // ebx
  __int128 Buf1; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h]
  int v11; // [rsp+40h] [rbp-40h]
  __int128 Buf2; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-18h]

  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  v11 = 0;
  v14 = 0;
  Buf1 = 0LL;
  v10 = 0LL;
  Buf2 = 0LL;
  v13 = 0LL;
  if ( !v4 )
    return 0;
  v7 = sub_1400B6010(v4);
  if ( v7 >= 0 )
  {
    v7 = sub_1400B6010(a2);
    if ( v7 >= 0 )
    {
      if ( !memcmp(&Buf1, &Buf2, 0x10uLL)
        && (_DWORD)v10 == (_DWORD)v13
        && *(_QWORD *)((char *)&v10 + 4) == *(_QWORD *)((char *)&v13 + 4)
        && *((float *)&v10 + 3) == *((float *)&v13 + 3) )
      {
        return (unsigned int)v7;
      }
      v7 = sub_14002678C(v3, a3);
      if ( v7 >= 0 )
        return 1;
    }
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 11LL, &unk_1400CA218);
  }
  sub_14005A470("CProcessNode::IsLeftFormatSupported", 218LL, (unsigned int)v7);
  return (unsigned int)v7;
}
