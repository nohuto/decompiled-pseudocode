/*
 * XREFs of sub_140028A40 @ 0x140028A40
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

__int64 __fastcall sub_140028A40(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  __int128 Buf1; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h]
  int v10; // [rsp+40h] [rbp-40h]
  __int128 Buf2; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-18h]

  v10 = 0;
  v13 = 0;
  Buf1 = 0LL;
  v9 = 0LL;
  Buf2 = 0LL;
  v12 = 0LL;
  if ( !a2 )
    return 0;
  v5 = (_QWORD *)(a1 + 16);
  v6 = sub_1400B6010(*(_QWORD *)(a1 + 16));
  if ( v6 >= 0 )
  {
    v6 = sub_1400B6010(a2);
    if ( v6 >= 0 )
    {
      if ( !memcmp(&Buf1, &Buf2, 0x10uLL)
        && (_DWORD)v9 == (_DWORD)v12
        && *(_QWORD *)((char *)&v9 + 4) == *(_QWORD *)((char *)&v12 + 4)
        && *((float *)&v9 + 3) == *((float *)&v12 + 3) )
      {
        return (unsigned int)v6;
      }
      v6 = sub_14002678C(v5, a3);
      if ( v6 >= 0 )
        return 1;
    }
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 12LL, &unk_1400CA218);
  }
  sub_14005A470("CProcessNode::IsRightFormatSupported", 289LL, (unsigned int)v6);
  return (unsigned int)v6;
}
