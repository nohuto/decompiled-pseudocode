/*
 * XREFs of sub_1400C5820 @ 0x1400C5820
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
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400C5820(_QWORD *SystemArgument2, char a2)
{
  __int64 *v5; // rsi
  __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // r8d
  __int64 v9; // rax
  void *v10; // rcx
  int v11; // r8d
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  if ( (*(_BYTE *)(SystemArgument2[74] + 261LL) & 2) == 0 )
    return 3221225659LL;
  v5 = (__int64 *)sub_1401225EC(SystemArgument2);
  if ( !v5 )
    return 3221225626LL;
  v7 = sub_1400E736C(SystemArgument2, 4096LL, v6, &Src, (char *)&Src + 8, 0);
  if ( v7 >= 0 )
  {
    if ( SystemArgument2[152]
      || (v9 = sub_1400143E0(64LL, 4096LL, 1380147538LL, *(_QWORD *)(SystemArgument2[16] + 8LL)),
          (SystemArgument2[152] = v9) != 0LL) )
    {
      LOBYTE(v8) = 5;
      *(_DWORD *)(*v5 + 4256) |= 1u;
      *(_DWORD *)(*v5 + 4256) |= 0x20u;
      *(_DWORD *)(*v5 + 4256) |= 2u;
      *(_DWORD *)(*v5 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*v5 + 4252) = 0;
      *(_QWORD *)(*v5 + 4184) = 0LL;
      *(_QWORD *)(*v5 + 4192) = sub_1400E90F0;
      *(_QWORD *)(*v5 + 4200) = v5;
      *(_OWORD *)(*v5 + 4160) = Src;
      *(_DWORD *)(*v5 + 4248) = 4096;
      sub_1400BC8A4((__int64)SystemArgument2, *v5 + 4096, v8, 0x1000u, *((__int64 *)&Src + 1), -1, 0LL, 0, *v5, v5[1]);
      v7 = sub_1400BD378(SystemArgument2, (__int64)v5);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  v10 = (void *)SystemArgument2[152];
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v10, 0x52436152u);
    SystemArgument2[152] = 0LL;
  }
  else
  {
    memmove(v10, (const void *)Src, 0x1000uLL);
  }
  sub_140122C20(SystemArgument2, v5);
  sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v11, Src, *((__int64 *)&Src + 1));
  return (unsigned int)v7;
}
