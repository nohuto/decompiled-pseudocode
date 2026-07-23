/*
 * XREFs of MiDefragmentSlabWorker @ 0x14070B0B4
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x14070AED0 (MiDefragmentAllSlabsHelper.c)
 *     MiDefragmentSlabAllocator @ 0x14070B024 (MiDefragmentSlabAllocator.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x140290C60 (MiClaimPhysicalRun.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiGetPageFromSlabEntry @ 0x1403599BC (MiGetPageFromSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiEstablishDefragSlabEntries @ 0x14070B794 (MiEstablishDefragSlabEntries.c)
 *     MiGetSourcePageForDefrag @ 0x14070BD94 (MiGetSourcePageForDefrag.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x14070C48C (MiLockUnlockSlabContextsForDefrag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDefragmentSlabWorker(_DWORD *a1)
{
  bool v2; // zf
  signed int v3; // edi
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 SourcePageForDefrag; // r12
  ULONG_PTR PageFromSlabEntry; // r15
  __int64 v11; // rsi
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v16; // rcx
  int v18; // [rsp+58h] [rbp-79h] BYREF
  __int64 v19[3]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v20[128]; // [rsp+78h] [rbp-59h] BYREF

  v18 = 0;
  memset_0(v20, 0, sizeof(v20));
  v2 = a1[18] == 8;
  *(_OWORD *)v19 = 0LL;
  if ( v2 && !*(_DWORD *)(*(_QWORD *)a1 + 22064LL) )
  {
    v3 = -2147483622;
    goto LABEL_44;
  }
  if ( (unsigned int)MiEnumerateSlabAllocatorsEx(
                       *(_QWORD *)a1,
                       (__int64)MiDefragFreeEmptySlabEntries,
                       0LL,
                       a1[17],
                       a1[18]) )
  {
    v3 = 0;
    goto LABEL_44;
  }
  v4 = a1[17];
  v5 = 1;
  if ( v4 != -1 )
    v5 = v4 + 1;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    v5,
    (__int64)v19);
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v20, (__int64)v19, 8, 0LL) )
  {
    v6 = (unsigned int)a1[19];
    while ( 1 )
    {
      do
      {
        v3 = MiEstablishDefragSlabEntries(a1);
        if ( v3 < 0 )
          goto LABEL_44;
        v7 = *((_QWORD *)a1 + 5);
        if ( !v7 )
        {
          v3 = (a1[21] & 2) == 0 ? 0x8000001A : 0;
          goto LABEL_44;
        }
        if ( a1[16] )
          v8 = 0LL;
        else
          v8 = 48LL * *(_QWORD *)(v7 + 40) - 0x220000000000LL;
        SourcePageForDefrag = MiGetSourcePageForDefrag(a1);
        PageFromSlabEntry = -1LL;
        v11 = -1LL;
        if ( SourcePageForDefrag != -1 && !*((_QWORD *)a1 + 7) )
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(*((_QWORD *)a1 + 6), *(_QWORD *)(*((_QWORD *)a1 + 6) + 56LL));
          v11 = PageFromSlabEntry;
          *((_QWORD *)a1 + 7) = 48 * PageFromSlabEntry - 0x220000000000LL;
        }
        MiLockUnlockSlabContextsForDefrag(a1, 0LL, 0LL);
      }
      while ( SourcePageForDefrag == -1 );
      if ( v11 != -1 )
      {
        v13 = a1[18];
        if ( v13 <= 4 && v13 != 2 )
        {
          v14 = *((_QWORD *)a1 + 7);
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v12) = 2;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
          }
          LODWORD(v19[0]) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v19);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          MiUpdateSlabPagePlaceholderState(a1[18], PageFromSlabEntry, 1LL, 0);
          _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 7) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
        }
      }
      if ( v8 )
      {
        if ( MiPfnsWorthTrying(*(__int16 **)a1, v8, v6, 0x410000u, &v18) )
          goto LABEL_42;
        if ( (v18 & 1) != 0 )
          MiAdjustCachedStacks(*(_QWORD *)a1, 1);
      }
      v16 = *(_QWORD *)a1;
      v19[0] = (*((_QWORD *)a1 + 7) + 0x220000000000LL) / 48;
      if ( MiClaimPhysicalRun(v16, SourcePageForDefrag, 1LL, qword_140E2D920, (__int64)v20, 4259840, 0, 0LL, v19, &v18) )
      {
LABEL_42:
        a1[16] = v6;
      }
      else if ( v19[0] != -1 )
      {
        *((_QWORD *)a1 + 7) = 0LL;
      }
    }
  }
  v3 = -1073741670;
LABEL_44:
  if ( *((_BYTE *)a1 + 80) != 17 )
    MiLockUnlockSlabContextsForDefrag(a1, 0LL, 0LL);
  MiDeleteUltraThreadContext((__int64)v20);
  return (unsigned int)v3;
}
