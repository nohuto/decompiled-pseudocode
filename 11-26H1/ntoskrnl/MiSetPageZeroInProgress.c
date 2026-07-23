/*
 * XREFs of MiSetPageZeroInProgress @ 0x1403CEB0C
 * Callers:
 *     MiGetBestPageToZero @ 0x1403CE888 (MiGetBestPageToZero.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 */

__int64 __fastcall MiSetPageZeroInProgress(__int64 *a1)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned int Cache; // eax
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  ULONG_PTR *v9; // r15
  ULONG_PTR v10; // rcx
  __int64 v11; // rdi
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rsi
  int v15; // ebx

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 7);
  v4 = HIWORD(*((_DWORD *)a1 + 7)) & 3;
  Cache = MiColorGetCache(*((_DWORD *)a1 + 7));
  v9 = (ULONG_PTR *)(*(_QWORD *)(v2 + 8 * (((unsigned __int64)v4 << 7) + ((v3 >> 18) & 3) + 3 * (v7 + 4 * v8)) + 848)
                   + 88LL * Cache);
  while ( 1 )
  {
    do
    {
      do
      {
        v10 = *v9;
        if ( *v9 == 0x3FFFFFFFFFLL )
          return 0LL;
      }
      while ( v10 > qword_140E2D920 && !MiIsDecayPfn(v10) );
      v11 = 48 * v10 - 0x220000000000LL;
      if ( (*(_DWORD *)(v11 + 32) & 0x80000) != 0 )
        return 0LL;
      if ( (a1[4] & 0x400) == 0 && *(__int64 *)(v11 + 24) < 0 )
      {
        *((_DWORD *)a1 + 8) |= 2u;
        return 0LL;
      }
      v13 = MiSafeLockPage(v10, 0xFFFFDE0000000000uLL, v6);
      v14 = v13;
    }
    while ( v13 == 17 );
    v15 = *(_DWORD *)(v11 + 32);
    if ( (v15 & 0x70000) == 0x10000
      && (unsigned int)MiGetPfnPageSizeIndex(v11) == v4
      && ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FF) == **(_WORD **)(v2 + 13896) )
    {
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v14 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      __writecr8(v14);
    }
  }
  if ( (v15 & 0x80000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v14 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      __writecr8(v14);
    }
    return 0LL;
  }
  MiBeginPageAccessor(a1[5], v4, v11, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v14 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
  }
  return v11;
}
