/*
 * XREFs of sub_1400EE400 @ 0x1400EE400
 * Callers:
 *     sub_1400EE870 @ 0x1400EE870 (sub_1400EE870.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400EE400(_QWORD *SystemArgument2, char a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  unsigned __int16 v6; // si
  __int64 v7; // r8
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  v4 = sub_1401225EC(SystemArgument2);
  if ( v4 )
  {
    v6 = 1;
    if ( *((_WORD *)SystemArgument2 + 13) )
    {
      while ( 1 )
      {
        v7 = SystemArgument2[108];
        v8 = (unsigned __int64)v6 << 7;
        *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)v4 + 4256LL) &= ~2u;
        *(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400E90F0;
        *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
        *(_QWORD *)(*(_QWORD *)v4 + 4160LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)v4 + 4168LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 0;
        v9 = SystemArgument2[108];
        LOBYTE(v7) = *(_BYTE *)(v8 + v7 - 48);
        v10 = *(_QWORD *)v4 + 4096LL;
        v11 = *(_DWORD *)(*(_QWORD *)v4 + 4140LL) | 1;
        *(_BYTE *)v10 = 5;
        *(_QWORD *)(v10 + 24) = *(_QWORD *)(v8 + v9 - 120);
        *(_WORD *)(v10 + 40) = v6;
        *(_WORD *)(v10 + 42) = *((_WORD *)SystemArgument2 + 4) - 1;
        v12 = v11 | 2;
        v13 = v11 & 0xFFFFFFFD;
        if ( (_BYTE)v7 != 1 )
          v13 = v12;
        *(_DWORD *)(v10 + 44) = v13;
        *(_WORD *)(v10 + 46) = *(_WORD *)(v8 + v9 - 104);
        v5 = sub_1400BD378(SystemArgument2, v4);
        if ( v5 < 0 )
          break;
        if ( *((_BYTE *)SystemArgument2 + 1728) == 1 )
          sub_1400F24C8(SystemArgument2, 0x80000000LL, 40LL);
        if ( ++v6 > *((_WORD *)SystemArgument2 + 13) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  sub_140122C20(SystemArgument2, v4);
  return (unsigned int)v5;
}
