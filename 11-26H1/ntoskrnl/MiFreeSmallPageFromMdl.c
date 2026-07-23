/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1403CE304
 * Callers:
 *     MiFreeSecureKernelPage @ 0x1403CCF10 (MiFreeSecureKernelPage.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR a1, __int64 a2, char a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  char v7; // r14
  ULONG_PTR v8; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // r15
  _QWORD *InitialStack; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdi
  int v21; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v4 = 48 * a1;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  v10 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = 17;
  v12 = 2LL;
  v21 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 8) != 0 )
    {
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)(v10 + 24) < 0 );
        v5 = v24;
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(v12) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v12, a2);
      }
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      v5 = v24;
    }
    v8 = a1;
    v9 = 0LL;
  }
  v13 = *(_DWORD *)(v10 + 32);
  v14 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
  if ( !stru_140E366D8.InitialStack )
    goto LABEL_35;
  if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) != 1 )
    goto LABEL_35;
  InitialStack = stru_140E366D8.InitialStack;
  v16 = v4 / 48;
  if ( !stru_140E366D8.InitialStack )
    goto LABEL_35;
  do
  {
    a4 = InitialStack[3];
    if ( v16 < a4 )
    {
      InitialStack = (_QWORD *)*InitialStack;
    }
    else
    {
      if ( v16 - a4 < InitialStack[4] )
        break;
      InitialStack = (_QWORD *)InitialStack[1];
    }
  }
  while ( InitialStack );
  if ( InitialStack )
  {
    v17 = 0LL;
  }
  else
  {
LABEL_35:
    if ( ((v7 & 1) != 0 && v5 || (a3 & 4) != 0 && (unsigned int)MiGetPfnSlabType(v10) != 9) && (_WORD)v13 == 2 )
    {
      *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x50000;
      v19 = v9;
      MiSimpleInsertPage(v5 + 72, v8, 2LL);
      LODWORD(v9) = 0;
      goto LABEL_16;
    }
    v17 = 1LL;
  }
  *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
  v18 = *(_DWORD *)(v10 + 32);
  *(_DWORD *)(v10 + 32) = v18 ^ (unsigned __int16)(v18 ^ (v18 - 2));
  if ( (_WORD)v18 == 2 )
  {
    MiInsertPageInFreeOrZeroedList(v8);
    LODWORD(v9) = 0;
    v19 = 0LL;
    if ( (a3 & 1) == 0 )
      v19 = v17;
  }
  else
  {
    v19 = v9;
    *(_DWORD *)(v10 + 32) |= 0x70000u;
    *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
  }
LABEL_16:
  if ( v21 == (_DWORD)v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags != (_DWORD)v9 )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  if ( v19 && (a3 & 1) == 0 )
    MiFreeLargePageCharges(v14, v19, 2 * (a3 & 0x10u), a4);
  return v19;
}
