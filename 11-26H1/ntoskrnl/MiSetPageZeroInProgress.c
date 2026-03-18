/*
 * XREFs of MiSetPageZeroInProgress @ 0x1403C4C00
 * Callers:
 *     MiGetBestPageToZero @ 0x1403C497C (MiGetBestPageToZero.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiColorGetCache @ 0x140289A00 (MiColorGetCache.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiBeginPageAccessor @ 0x1403C4E34 (MiBeginPageAccessor.c)
 */

__int64 __fastcall MiSetPageZeroInProgress(__int64 *a1)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned int Cache; // eax
  __int64 v6; // r10
  __int64 v7; // r11
  ULONG_PTR *v8; // r15
  ULONG_PTR v9; // rcx
  __int64 v10; // rdi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  int v14; // ebx

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 7);
  v4 = HIWORD(*((_DWORD *)a1 + 7)) & 3;
  Cache = MiColorGetCache(*((_DWORD *)a1 + 7));
  v8 = (ULONG_PTR *)(*(_QWORD *)(v2 + 8 * (((unsigned __int64)v4 << 7) + ((v3 >> 18) & 3) + 3 * (v6 + 4 * v7)) + 848)
                   + 88LL * Cache);
  while ( 1 )
  {
    do
    {
      do
      {
        v9 = *v8;
        if ( *v8 == 0x3FFFFFFFFFLL )
          return 0LL;
      }
      while ( v9 > qword_140E2D7A0 && !MiIsDecayPfn(v9) );
      v10 = 48 * v9 - 0x220000000000LL;
      if ( (*(_DWORD *)(v10 + 32) & 0x80000) != 0 )
        return 0LL;
      if ( (a1[4] & 0x400) == 0 && *(__int64 *)(v10 + 24) < 0 )
      {
        *((_DWORD *)a1 + 8) |= 2u;
        return 0LL;
      }
      v12 = MiSafeLockPage(v9, 0xFFFFDE0000000000uLL);
      v13 = v12;
    }
    while ( v12 == 17 );
    v14 = *(_DWORD *)(v10 + 32);
    if ( (v14 & 0x70000) == 0x10000
      && (unsigned int)MiGetPfnPageSizeIndex(v10) == v4
      && ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FF) == **(_WORD **)(v2 + 13896) )
    {
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v13 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
    }
  }
  if ( (v14 & 0x80000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v13 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
    }
    return 0LL;
  }
  MiBeginPageAccessor(a1[5], v4, v10, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v13 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    __writecr8(v13);
  }
  return v10;
}
