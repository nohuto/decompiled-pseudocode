/*
 * XREFs of MiWalkFreeZeroListHead @ 0x140359F50
 * Callers:
 *     MiPurgeZeroListHeads @ 0x140358F40 (MiPurgeZeroListHeads.c)
 *     MiMoveHibernateFreeToZeroListHeads @ 0x1406F4BD0 (MiMoveHibernateFreeToZeroListHeads.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkFreeZeroListHead(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // ebp
  int v7; // r13d
  __int64 result; // rax
  __int64 *v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // r8
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  signed __int64 v18; // rax
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rtt
  __int64 v21; // r8
  signed __int64 v22; // rax
  signed __int64 v23; // rtt

  v4 = 0LL;
  v5 = *(_QWORD *)a2;
  v6 = *(_WORD *)(a2 + 26) & 3;
  v7 = *(_DWORD *)(a2 + 28);
  result = 0x3FFFFFFFFFLL;
  v9 = (__int64 *)a2;
  v10 = a1;
  CurrentIrql = 17;
  if ( *(_QWORD *)a2 != 0x3FFFFFFFFFLL )
  {
    do
    {
      if ( CurrentIrql == 17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1, a2);
        }
        v12 = v6 < 2 ? 8 : 0;
        v13 = *(_QWORD *)(v12 + v10 + 14104);
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v12 + v10 + 14104),
                  (v13 + 1) ^ (v13 ^ (v13 + 1)) & 0xFFFFFFFFFFFF0000uLL,
                  v13);
        }
        while ( v14 != v13 );
      }
      v15 = 48 * v5 - 0x220000000000LL;
      if ( (unsigned __int8)MiSafeLockPageAtDpc(v5) != 17 )
      {
        if ( (*(_BYTE *)(v15 + 34) & 7) == v7
          && (unsigned int)MiGetPfnPageSizeIndex(48 * v5 - 0x220000000000LL) == v6
          && (a1 = *(_QWORD *)(v10 + 13896), ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FF) == *(_WORD *)a1) )
        {
          result = guard_dispatch_icall_no_overrides(48 * v5 - 0x220000000000LL, a4, v16);
          a1 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !(_DWORD)result )
            break;
          if ( (++v4 & 0x3F) == 0 && KeShouldYieldProcessor() )
          {
            v21 = v6 < 2 ? 8 : 0;
            v22 = *(_QWORD *)(v21 + v10 + 14104);
            do
            {
              a2 = v22 - 1;
              a1 = (v22 - 1) ^ (v22 ^ (v22 - 1)) & 0xFFFFFFFFFFFF0000uLL;
              if ( (_WORD)v22 == 1 )
              {
                a2 = (a1 ^ (a1 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
                a1 ^= a2;
              }
              v23 = v22;
              v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + v10 + 14104), a1, v22);
            }
            while ( v23 != v22 );
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            CurrentIrql = 17;
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      v5 = *v9;
      result = 0x3FFFFFFFFFLL;
    }
    while ( *v9 != 0x3FFFFFFFFFLL );
    if ( CurrentIrql != 17 )
    {
      v17 = v6 < 2 ? 8 : 0;
      v18 = *(_QWORD *)(v17 + v10 + 14104);
      do
      {
        v19 = (v18 - 1) ^ (v18 ^ (v18 - 1)) & 0xFFFFFFFFFFFF0000uLL;
        if ( (_WORD)v18 == 1 )
          v19 ^= (v19 ^ (v19 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
        v20 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + v10 + 14104), v19, v18);
      }
      while ( v20 != v18 );
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
