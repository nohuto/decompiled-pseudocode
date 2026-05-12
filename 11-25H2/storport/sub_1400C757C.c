/*
 * XREFs of sub_1400C757C @ 0x1400C757C
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C757C(PVOID SystemArgument2, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r8d
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = sub_1401225EC(SystemArgument2);
  if ( !v4 )
    return 3221225626LL;
  v7 = sub_1400E736C(SystemArgument2, 512LL, v5, &v11, (char *)&v11 + 8, 0);
  if ( v7 >= 0 )
  {
    v8 = v11;
    *(_WORD *)v11 = 256;
    *(_BYTE *)(v8 + 2) = 0;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
    *(_OWORD *)(*(_QWORD *)v4 + 4160LL) = v11;
    *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 512;
    v9 = *(_QWORD *)v4;
    *(_QWORD *)(v9 + 4120) = *((_QWORD *)&v11 + 1);
    *(_BYTE *)(v9 + 4096) = 9;
    *(_BYTE *)(v9 + 4136) = 22;
    *(_DWORD *)(v9 + 4100) = 0;
    v7 = sub_1400BD378(SystemArgument2, v4);
  }
  sub_140122C20(SystemArgument2, v4);
  sub_1400F5FEC((_DWORD)SystemArgument2, 512, v10, v11, *((__int64 *)&v11 + 1));
  return (unsigned int)v7;
}
