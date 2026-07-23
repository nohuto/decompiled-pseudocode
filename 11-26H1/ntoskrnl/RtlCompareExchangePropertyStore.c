/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x14061D420
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061D980 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061DA3C (RtlpReleasePropStoreLockExclusive.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCompareExchangePropertyStore(
        ULONG_PTR Key,
        PULONG_PTR Comperand,
        PULONG_PTR Exchange,
        PULONG_PTR Context)
{
  int v4; // r12d
  void *v6; // r15
  _OWORD *i; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  unsigned __int64 ThreadLock; // rdx
  unsigned __int8 v12; // bp
  char *v13; // rax
  char *Pool2; // rbx
  int CycleTime; // edi
  int v16; // esi
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  NTSTATUS v23; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = (_OWORD *)Key; ; i = (_OWORD *)Key )
  {
    v9 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
    ThreadLock = NormalizationListLock.ThreadLock;
    v12 = v9;
    if ( NormalizationListLock.ThreadLock )
    {
      v13 = (char *)bsearch(
                      i,
                      (const void *)NormalizationListLock.ThreadLock,
                      LODWORD(NormalizationListLock.StackBase),
                      0x18uLL,
                      RtlpComparePropertyEntry);
      if ( v13 )
        break;
    }
    if ( v12 > 2u )
    {
      v23 = -1073741670;
      goto LABEL_30;
    }
    Pool2 = (char *)NormalizationListLock.ThreadLock;
    if ( NormalizationListLock.ThreadLock
      && LODWORD(NormalizationListLock.StackBase) + 1 != LODWORD(NormalizationListLock.CycleTime) )
    {
      goto LABEL_16;
    }
    CycleTime = NormalizationListLock.CycleTime;
    if ( LODWORD(NormalizationListLock.CycleTime) )
    {
      v16 = 2 * LODWORD(NormalizationListLock.CycleTime);
      if ( (unsigned int)(2 * LODWORD(NormalizationListLock.CycleTime)) < LODWORD(NormalizationListLock.CycleTime) )
        goto LABEL_28;
    }
    else
    {
      v16 = 16;
    }
    LOBYTE(ThreadLock) = v12;
    RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, ThreadLock, v10);
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
LABEL_28:
      v23 = -1073741801;
      goto LABEL_30;
    }
    v17 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
    v12 = v17;
    if ( CycleTime == LODWORD(NormalizationListLock.CycleTime) )
    {
      v19 = NormalizationListLock.ThreadLock;
      if ( NormalizationListLock.ThreadLock )
      {
        memmove(Pool2, (const void *)NormalizationListLock.ThreadLock, 24LL * LODWORD(NormalizationListLock.StackBase));
        v6 = (void *)v19;
      }
      i = (_OWORD *)Key;
      NormalizationListLock.ThreadLock = (unsigned __int64)Pool2;
      LODWORD(NormalizationListLock.CycleTime) = v16;
LABEL_16:
      v4 = 1;
      v20 = 3LL * LODWORD(NormalizationListLock.StackBase);
      ThreadLock = (unsigned int)++LODWORD(NormalizationListLock.StackBase);
      v13 = &Pool2[8 * v20];
      if ( Exchange )
        v21 = *Exchange;
      else
        v21 = 0LL;
      *((_QWORD *)v13 + 2) = v21;
      *(_OWORD *)v13 = *i;
      break;
    }
    LOBYTE(v18) = v17;
    RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, v18, v10);
    ExFreePoolWithTag(Pool2, 0);
  }
  v22 = *((_QWORD *)v13 + 2);
  if ( !Exchange || v22 == *Exchange )
  {
    ThreadLock = (unsigned __int64)Comperand;
    *((_QWORD *)v13 + 2) = Comperand;
  }
  if ( Context )
    *Context = v22;
  if ( v4 )
  {
    qsort(
      (void *)NormalizationListLock.ThreadLock,
      LODWORD(NormalizationListLock.StackBase),
      0x18uLL,
      RtlpComparePropertyEntry);
    v23 = 0;
  }
  else
  {
    v23 = 0x40000000;
  }
LABEL_30:
  LOBYTE(ThreadLock) = v12;
  RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, ThreadLock, v10);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v23;
}
