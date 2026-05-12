/*
 * XREFs of sub_1400C55C0 @ 0x1400C55C0
 * Callers:
 *     sub_1400B8928 @ 0x1400B8928 (sub_1400B8928.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C55C0(PVOID SystemArgument2)
{
  __int64 *v2; // rsi
  __int64 v3; // r8
  int v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // r8
  __int128 v11; // xmm1
  int v12; // r8d
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  v2 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v2 )
    return 3221225626LL;
  v5 = sub_1400E736C(SystemArgument2, 512LL, v3, &v13, (char *)&v13 + 8, 0);
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)SystemArgument2 + 157)
      || (v7 = sub_1400143E0(64LL, 512LL, 1380147538LL, *(_QWORD *)(*((_QWORD *)SystemArgument2 + 16) + 8LL)),
          (*((_QWORD *)SystemArgument2 + 157) = v7) != 0LL) )
    {
      LOBYTE(v6) = -64;
      *(_DWORD *)(*v2 + 4256) |= 1u;
      *(_DWORD *)(*v2 + 4256) |= 0x20u;
      *(_DWORD *)(*v2 + 4256) |= 2u;
      *(_DWORD *)(*v2 + 4256) |= 0x40u;
      *(_WORD *)(*v2 + 4252) = 0;
      *(_QWORD *)(*v2 + 4184) = 0LL;
      *(_QWORD *)(*v2 + 4192) = sub_1400E90F0;
      *(_QWORD *)(*v2 + 4200) = v2;
      *(_OWORD *)(*v2 + 4160) = v13;
      *(_DWORD *)(*v2 + 4248) = 512;
      sub_1400BC8A4((__int64)SystemArgument2, *v2 + 4096, v6, 0x200u, *((__int64 *)&v13 + 1), -1, 0LL, 0, *v2, v2[1]);
      v5 = sub_1400BD378(SystemArgument2, (__int64)v2);
      if ( v5 >= 0 )
      {
        v8 = (_OWORD *)*((_QWORD *)SystemArgument2 + 157);
        v9 = (_OWORD *)v13;
        v10 = 4LL;
        do
        {
          *v8 = *v9;
          v8[1] = v9[1];
          v8[2] = v9[2];
          v8[3] = v9[3];
          v8[4] = v9[4];
          v8[5] = v9[5];
          v8[6] = v9[6];
          v8 += 8;
          v11 = v9[7];
          v9 += 8;
          *(v8 - 1) = v11;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  *((_QWORD *)SystemArgument2 + 17) |= 0x4000000000uLL;
  sub_140122C20(SystemArgument2, v2);
  sub_1400F5FEC((_DWORD)SystemArgument2, 512, v12, v13, *((__int64 *)&v13 + 1));
  return (unsigned int)v5;
}
