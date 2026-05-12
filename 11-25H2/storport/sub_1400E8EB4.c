/*
 * XREFs of sub_1400E8EB4 @ 0x1400E8EB4
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400E8EB4(_QWORD *SystemArgument2, char a2)
{
  __int64 *v4; // rdi
  __int64 v5; // r8
  int v7; // esi
  unsigned int v8; // r8d
  __int64 v9; // rcx
  int v10; // r8d
  __int128 v11; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp-20h]
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]

  SystemArgument2[17] &= ~0x100000uLL;
  v11 = 0LL;
  *((_BYTE *)SystemArgument2 + 945) = 0;
  v12 = 0xA4F2BFEA2810AFC5uLL;
  v13 = 0xAFD514C97C6F4F9CuLL;
  v4 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v4 )
    return 3221225626LL;
  v7 = sub_1400E736C((__int64)SystemArgument2, 0x200u, v5, (void **)&v11, (_QWORD *)&v11 + 1, 0);
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = -64;
    *(_DWORD *)(*v4 + 4256) |= 1u;
    *(_DWORD *)(*v4 + 4256) |= 0x20u;
    *(_DWORD *)(*v4 + 4256) |= 2u;
    *(_DWORD *)(*v4 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v4 + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*v4 + 4252) = 0;
    *(_QWORD *)(*v4 + 4184) = 0LL;
    *(_QWORD *)(*v4 + 4192) = sub_1400E90F0;
    *(_QWORD *)(*v4 + 4200) = v4;
    *(_OWORD *)(*v4 + 4160) = v11;
    *(_DWORD *)(*v4 + 4248) = 512;
    sub_1400BC8A4((__int64)SystemArgument2, *v4 + 4096, v8, 0x200u, *((__int64 *)&v11 + 1), -1, 0LL, 0, *v4, v4[1]);
    v7 = sub_1400BD378(SystemArgument2, (__int64)v4);
    if ( v7 >= 0 )
    {
      v9 = v11;
      if ( (_QWORD)v11 )
      {
        if ( *(_QWORD *)(v11 + 496) == v12 && *(_QWORD *)(v11 + 504) == v13 )
        {
          SystemArgument2[17] |= 0x100000uLL;
          *((_BYTE *)SystemArgument2 + 945) = *(_BYTE *)(v9 + 103);
        }
      }
    }
  }
  sub_140122C20(SystemArgument2, v4);
  sub_1400F5FEC((_DWORD)SystemArgument2, 512, v10, v11, *((__int64 *)&v11 + 1));
  return (unsigned int)v7;
}
