/*
 * XREFs of sub_1400EF52C @ 0x1400EF52C
 * Callers:
 *     sub_1400EE870 @ 0x1400EE870 (sub_1400EE870.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400EF52C(_QWORD *SystemArgument2, char a2)
{
  int v3; // r15d
  __int64 v5; // rdi
  unsigned __int16 i; // si
  __int64 v7; // rdx
  __int64 v8; // r14

  v3 = 0;
  v5 = sub_1401225EC(SystemArgument2);
  if ( v5 )
  {
    for ( i = 1; i <= *((_WORD *)SystemArgument2 + 11); ++i )
    {
      *(_DWORD *)(*(_QWORD *)v5 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)v5 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v5 + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)v5 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v5 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*(_QWORD *)v5 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)v5 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v5 + 4192LL) = sub_1400E90F0;
      *(_QWORD *)(*(_QWORD *)v5 + 4200LL) = v5;
      *(_QWORD *)(*(_QWORD *)v5 + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v5 + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)v5 + 4248LL) = 0;
      v7 = *(_QWORD *)v5 + 4096LL;
      *(_BYTE *)v7 = 1;
      v8 = 192LL * i;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v8 + SystemArgument2[91] - 184);
      *(_WORD *)(v7 + 40) = i;
      *(_WORD *)(v7 + 42) = *((_WORD *)SystemArgument2 + 4) - 1;
      *(_DWORD *)(v7 + 44) = *(_DWORD *)(v7 + 44) & 0xFFFFFFF8 | 5;
      *(_WORD *)(v7 + 46) = *(_WORD *)(v8 + SystemArgument2[91] - 54);
      v3 = sub_1400BD378(SystemArgument2, v5);
      if ( v3 < 0 )
        break;
      if ( *((_BYTE *)SystemArgument2 + 1728) == 1 )
      {
        sub_1400F24C8(SystemArgument2, 0x80000000LL, 40LL);
        sub_1400F24C8(SystemArgument2, 2147483649LL, 40LL);
        if ( *(_QWORD *)(v8 + SystemArgument2[91] - 152) )
          sub_1400F24C8(SystemArgument2, 2147483651LL, 40LL);
      }
    }
  }
  else
  {
    v3 = -1073741670;
  }
  sub_140122C20(SystemArgument2, v5);
  return (unsigned int)v3;
}
