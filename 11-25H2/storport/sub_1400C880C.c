/*
 * XREFs of sub_1400C880C @ 0x1400C880C
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C880C(PVOID SystemArgument2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  int v5; // esi
  __int64 v6; // rax
  int v7; // r8d
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  v2 = sub_1401225EC(SystemArgument2);
  if ( !v2 )
    return 3221225626LL;
  v5 = sub_1400E736C(SystemArgument2, 256LL, v3, &v8, (char *)&v8 + 8, 0);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)v2 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v2 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v2 + 4192LL) = sub_1400C8990;
    *(_QWORD *)(*(_QWORD *)v2 + 4200LL) = v2;
    *(_OWORD *)(*(_QWORD *)v2 + 4160LL) = v8;
    *(_DWORD *)(*(_QWORD *)v2 + 4248LL) = 256;
    v6 = *(_QWORD *)v2;
    *(_QWORD *)(v6 + 4120) = *((_QWORD *)&v8 + 1);
    *(_BYTE *)(v6 + 4096) = 10;
    *(_BYTE *)(v6 + 4136) = 12;
    v5 = sub_1400BD378(SystemArgument2, v2);
  }
  sub_140122C20(SystemArgument2, v2);
  sub_1400F5FEC((_DWORD)SystemArgument2, 256, v7, v8, *((__int64 *)&v8 + 1));
  return (unsigned int)v5;
}
