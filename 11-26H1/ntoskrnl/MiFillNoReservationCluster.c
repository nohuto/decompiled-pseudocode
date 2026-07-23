/*
 * XREFs of MiFillNoReservationCluster @ 0x1402D4A24
 * Callers:
 *     MiModwriterFillMdl @ 0x140400130 (MiModwriterFillMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404D0E00 (MiIsStoreVirtualPagefileFull.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiFillNoReservationCluster(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rdi
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rsi
  int v15; // r13d
  unsigned __int64 v17; // r13
  unsigned __int8 v18; // al
  int v19; // [rsp+60h] [rbp+8h]

  if ( (*(_BYTE *)(a2 + 172) & 0x40) != 0 )
  {
    v6 = (_QWORD *)(a1 + 4480);
    v7 = 88LL * (*(_WORD *)(a2 + 172) & 0xF);
    v8 = *(_QWORD *)(v7 + a1 + 4624);
    v9 = (_QWORD *)(v7 + a1 + 4608);
    if ( v8 )
      v6 = v9;
  }
  else
  {
    v6 = (_QWORD *)(a1 + 4352);
    if ( !*(_QWORD *)(a1 + 4368) )
    {
      if ( (unsigned int)MiIsStoreVirtualPagefileFull() )
      {
        v6 = (_QWORD *)(a1 + 88LL * *(unsigned int *)(a1 + 1300) + 4608);
        if ( !v6[2] )
          v6 = (_QWORD *)(a1 + 4480);
      }
    }
  }
  v10 = 0LL;
  v19 = 1;
  do
  {
    v11 = *v6;
    if ( *v6 == 0x3FFFFFFFFFLL )
      break;
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = MiSafeLockPage(*v6);
    v14 = v13;
    if ( v13 != 17 )
    {
      if ( v11 != *v6 )
        goto LABEL_28;
      if ( !*(_DWORD *)(a1 + 1180)
        || *(__int64 *)(v12 + 40) >= 0
        || *(__int64 *)(v12 + 8) > 0 && (*(_QWORD *)(v12 + 40) & 0x10000000000LL) == 0
        || !(unsigned int)MiSufficientAvailablePages(a1, 0x32uLL) )
      {
        goto LABEL_9;
      }
      v17 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v14 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
      }
      MiReservePageFileSpace(a1, v17, 0LL);
      v18 = MiSafeLockPage(v11);
      v14 = v18;
      if ( v18 == 17 )
        continue;
      if ( v11 != *v6 )
      {
LABEL_28:
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v14 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
          __writecr8(v14);
        }
      }
      else
      {
LABEL_9:
        v15 = MiReferencePageForModifiedWrite(48 * v11 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v14 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
          __writecr8((unsigned __int8)v14);
        }
        if ( !v15 )
          break;
        v19 &= ~1u;
        v10 = (unsigned int)(v10 + 1);
        *a3++ = v11;
        if ( v15 == 3 && (unsigned int)v10 >= 0x10 )
          break;
      }
    }
  }
  while ( (unsigned int)v10 < a4 );
  if ( (unsigned int)v10 > 1 )
    qsort(&a3[-v10], (unsigned int)v10, 8uLL, MiModifiedWriterNoReservationSort);
  return (unsigned int)v10;
}
