/*
 * XREFs of sub_140031778 @ 0x140031778
 * Callers:
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_140031610 @ 0x140031610 (sub_140031610.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140072AE0 @ 0x140072AE0 (sub_140072AE0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140031778(__int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v10 = *(_OWORD *)(a1 + 104);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  v5 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v7 = *(_QWORD *)(a1 + 184);
LABEL_7:
      v6 = sub_1400B6010(v7);
      goto LABEL_8;
    case 1:
      v7 = *(_QWORD *)(a1 + 184);
      goto LABEL_7;
    case 2:
      v7 = *(_QWORD *)(a1 + 184);
      goto LABEL_7;
    case 3:
      v6 = sub_1400B6010(*(_QWORD *)(a1 + 184));
LABEL_8:
      v5 = v6;
      break;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8 && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0 )
  {
    v9 = ((v5 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)off_1400E73D8 + 25) >= (unsigned int)v9 )
      sub_140072AE0(
        *((_QWORD *)off_1400E73D8 + 2),
        v9,
        v4,
        *(unsigned int *)(a1 + 192),
        a2,
        v5,
        v10,
        *((_QWORD *)&v10 + 1),
        v11,
        *((_QWORD *)&v11 + 1),
        v12,
        v13);
  }
  if ( v5 < 0 )
    a2 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 192) = a2;
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v5;
}
