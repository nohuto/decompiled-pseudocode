/*
 * XREFs of sub_1400ECCD0 @ 0x1400ECCD0
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BC9C0 @ 0x1400BC9C0 (sub_1400BC9C0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400BD6D8 @ 0x1400BD6D8 (sub_1400BD6D8.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400ECCD0(PVOID SystemArgument2)
{
  __int64 v2; // rcx
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // edi
  __int64 v7; // r9
  const void *v8; // rbp
  void *v9; // rax
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-58h]
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  if ( !sub_1400BD6D8((__int64)SystemArgument2) )
    return 3221225659LL;
  v4 = sub_1401225EC(v2);
  if ( !v4 )
    return 3221225626LL;
  v6 = sub_1400E736C((__int64)SystemArgument2, 0x1000u, v5, (void **)&Src, (_QWORD *)&Src + 1, 0);
  if ( v6 >= 0 )
  {
    v8 = (const void *)Src;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
    *(_OWORD *)(*(_QWORD *)v4 + 4160LL) = __PAIR128__(*((unsigned __int64 *)&Src + 1), (unsigned __int64)v8);
    *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 4096;
    *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
    sub_1400BC9C0((__int64)SystemArgument2, *(_QWORD *)v4 + 4096LL, 23, v7, v11, 0, *((__int64 *)&Src + 1), 0, 0);
    v6 = sub_1400BD378(SystemArgument2, v4);
    if ( v6 >= 0 )
    {
      v9 = (void *)*((_QWORD *)SystemArgument2 + 132);
      if ( v9
        || (v9 = (void *)sub_1400143E0(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*((_QWORD *)SystemArgument2 + 16) + 8LL)),
            (*((_QWORD *)SystemArgument2 + 132) = v9) != 0LL) )
      {
        memmove(v9, v8, 0x1000uLL);
      }
      else
      {
        v6 = -1073741670;
      }
    }
  }
  sub_140122C20(SystemArgument2, v4);
  sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v10, Src, *((__int64 *)&Src + 1));
  return (unsigned int)v6;
}
