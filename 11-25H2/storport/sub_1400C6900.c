/*
 * XREFs of sub_1400C6900 @ 0x1400C6900
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 *     sub_140199F08 @ 0x140199F08 (sub_140199F08.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C6900(PVOID SystemArgument2, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)SystemArgument2 + 74) + 525LL) & 1) != 0 )
  {
    v6 = sub_1401225EC(SystemArgument2);
    v4 = v6;
    if ( v6 )
    {
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v6 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      v7 = v6;
      *(_WORD *)(*(_QWORD *)v6 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4192LL) = sub_1400C6A50;
      *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
      *(_QWORD *)(*(_QWORD *)v6 + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)v6 + 4248LL) = 0;
      v8 = *(_QWORD *)v6;
      *(_BYTE *)(v8 + 4136) = 6;
      *(_DWORD *)(v8 + 4136) &= 0xFFFFF8FF;
      *(_BYTE *)(v8 + 4096) = 10;
      v5 = sub_1400BD378(SystemArgument2, v7);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  sub_140122C20(SystemArgument2, v4);
  return v5;
}
