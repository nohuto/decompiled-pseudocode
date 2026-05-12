/*
 * XREFs of sub_1400C5A64 @ 0x1400C5A64
 * Callers:
 *     sub_1400D0FF0 @ 0x1400D0FF0 (sub_1400D0FF0.c)
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C5A64(_QWORD *SystemArgument2, char a2)
{
  __int64 *v5; // rsi
  __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // r8d
  __int64 v9; // rax
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm1
  int v14; // r8d
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF

  v15 = 0LL;
  if ( (*(_BYTE *)(SystemArgument2[74] + 261LL) & 0x20) == 0 )
    return 3221225659LL;
  v5 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v5 )
    return 3221225626LL;
  v7 = sub_1400E736C(SystemArgument2, 1024LL, v6, &v15, (char *)&v15 + 8, 0);
  if ( v7 >= 0 )
  {
    if ( SystemArgument2[155]
      || (v9 = sub_1400143E0(64LL, 1024LL, 1380147538LL, *(_QWORD *)(SystemArgument2[16] + 8LL)),
          (SystemArgument2[155] = v9) != 0LL) )
    {
      LOBYTE(v8) = 18;
      *(_DWORD *)(*v5 + 4256) |= 1u;
      *(_DWORD *)(*v5 + 4256) |= 0x20u;
      *(_DWORD *)(*v5 + 4256) |= 2u;
      *(_DWORD *)(*v5 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*v5 + 4252) = 0;
      *(_QWORD *)(*v5 + 4184) = 0LL;
      *(_QWORD *)(*v5 + 4192) = sub_1400E90F0;
      *(_QWORD *)(*v5 + 4200) = v5;
      *(_OWORD *)(*v5 + 4160) = v15;
      *(_DWORD *)(*v5 + 4248) = 1024;
      sub_1400BC8A4((__int64)SystemArgument2, *v5 + 4096, v8, 0x400u, *((__int64 *)&v15 + 1), -1, 0LL, 0, *v5, v5[1]);
      v7 = sub_1400BD378(SystemArgument2, (__int64)v5);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  v10 = (_OWORD *)SystemArgument2[155];
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v10, 0x52436152u);
    SystemArgument2[155] = 0LL;
  }
  else
  {
    v11 = (_OWORD *)v15;
    v12 = 8LL;
    do
    {
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10 += 8;
      v13 = v11[7];
      v11 += 8;
      *(v10 - 1) = v13;
      --v12;
    }
    while ( v12 );
  }
  sub_140122C20(SystemArgument2, v5);
  sub_1400F5FEC((_DWORD)SystemArgument2, 1024, v14, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)v7;
}
