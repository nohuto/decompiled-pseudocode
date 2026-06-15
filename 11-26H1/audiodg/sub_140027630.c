/*
 * XREFs of sub_140027630 @ 0x140027630
 * Callers:
 *     sub_140027570 @ 0x140027570 (sub_140027570.c)
 *     sub_140027DEC @ 0x140027DEC (sub_140027DEC.c)
 *     sub_140070910 @ 0x140070910 (sub_140070910.c)
 *     sub_140070EE0 @ 0x140070EE0 (sub_140070EE0.c)
 * Callees:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140027854 @ 0x140027854 (sub_140027854.c)
 *     sub_140031778 @ 0x140031778 (sub_140031778.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140027630(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v4; // rdx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v5);
  v2 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 11LL, &unk_1400C6808);
    v2 = off_1400E73D8;
  }
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_140027854(a1);
    *(_DWORD *)(a1 + 196) = 0;
    v2 = off_1400E73D8;
  }
  if ( !*(_QWORD *)(a1 + 184) )
    goto LABEL_5;
  if ( !*(_DWORD *)(a1 + 192) )
    goto LABEL_8;
  if ( v2 != &off_1400E73D8 && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    sub_14005A010(v2[2], 12LL, &unk_1400C6808);
  if ( (int)sub_140031778(a1, 0LL) >= 0 )
    goto LABEL_29;
  v2 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 13LL, &unk_1400C6808);
LABEL_29:
    v2 = off_1400E73D8;
  }
LABEL_8:
  v4 = *(_QWORD *)(a1 + 184);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 184) = 0LL;
    sub_1400B6010(v4);
    v2 = off_1400E73D8;
  }
  if ( v2 != &off_1400E73D8 )
  {
    if ( (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    {
      sub_14005A010(v2[2], 14LL, &unk_1400C6808);
      v2 = off_1400E73D8;
    }
LABEL_5:
    if ( v2 != &off_1400E73D8 && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      sub_14005A010(v2[2], 15LL, &unk_1400C6808);
  }
  sub_140007CC0();
  return EtwEventActivityIdControl(4LL, &v5);
}
