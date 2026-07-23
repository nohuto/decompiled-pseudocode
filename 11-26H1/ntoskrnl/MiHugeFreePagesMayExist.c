/*
 * XREFs of MiHugeFreePagesMayExist @ 0x1404A28CC
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiGetHugeFreePageCount @ 0x1404A2920 (MiGetHugeFreePageCount.c)
 */

__int64 __fastcall MiHugeFreePagesMayExist(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  unsigned int v4; // r11d

  v2 = *(_QWORD *)(a2 + 80);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 136) + 32LL) != *(_QWORD *)(v2 + 136) + 32LL )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 184);
  if ( *(_QWORD *)(v3 + 16) )
    return 1LL;
  LOBYTE(v4) = MiGetHugeFreePageCount(a1, v3, 1LL) != 0;
  return v4;
}
