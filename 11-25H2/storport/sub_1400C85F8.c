/*
 * XREFs of sub_1400C85F8 @ 0x1400C85F8
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400BDDF4 @ 0x1400BDDF4 (sub_1400BDDF4.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C85F8(PVOID SystemArgument2, char a2)
{
  __int64 *v4; // rbx
  __int64 v5; // r8
  int v7; // esi
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  v4 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v4 )
    return 3221225626LL;
  v7 = sub_1400E736C(SystemArgument2, 8LL, v5, &v9, (char *)&v9 + 8, 0);
  if ( v7 >= 0 )
  {
    *(_QWORD *)v9 = (MEMORY[0xFFFFF78000000014] / 0x2710uLL - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
    if ( !(unsigned int)sub_1400BDDF4(*v4, *v4 + 4096, *((__int64 *)&v9 + 1), 8, (_QWORD *)*v4, v4[1]) )
      return 3221225701LL;
    *(_DWORD *)(*v4 + 4256) |= 1u;
    *(_DWORD *)(*v4 + 4256) |= 0x20u;
    *(_DWORD *)(*v4 + 4256) |= 2u;
    *(_DWORD *)(*v4 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v4 + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*v4 + 4252) = 0;
    *(_QWORD *)(*v4 + 4184) = 0LL;
    *(_QWORD *)(*v4 + 4192) = sub_1400E90F0;
    *(_QWORD *)(*v4 + 4200) = v4;
    *(_OWORD *)(*v4 + 4160) = v9;
    *(_DWORD *)(*v4 + 4248) = 8;
    *(_DWORD *)(*v4 + 4100) = -1;
    *(_BYTE *)(*v4 + 4096) = 9;
    *(_BYTE *)(*v4 + 4136) = 14;
    v7 = sub_1400BD378(SystemArgument2, (__int64)v4);
  }
  sub_140122C20(SystemArgument2, v4);
  sub_1400F5FEC((_DWORD)SystemArgument2, 8, v8, v9, *((__int64 *)&v9 + 1));
  return (unsigned int)v7;
}
