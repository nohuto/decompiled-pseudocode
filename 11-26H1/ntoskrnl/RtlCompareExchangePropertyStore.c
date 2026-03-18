/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x14061A3D0
 * Callers:
 *     <none>
 * Callees:
 *     bsearch @ 0x140536920 (bsearch.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061A930 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061A9EC (RtlpReleasePropStoreLockExclusive.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlCompareExchangePropertyStore(_OWORD *Key, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v4; // r12d
  void *v6; // r15
  _OWORD *i; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  unsigned __int64 StackBase; // rdx
  unsigned __int8 v12; // bp
  char *v13; // rax
  char *Pool2; // rbx
  int ThreadLock; // edi
  int v16; // esi
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  void *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = Key; ; i = Key )
  {
    v9 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
    StackBase = (unsigned __int64)NormalizationListLock.StackBase;
    v12 = v9;
    if ( NormalizationListLock.StackBase )
    {
      v13 = (char *)bsearch(
                      i,
                      NormalizationListLock.StackBase,
                      HIDWORD(NormalizationListLock.ThreadLock),
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
    Pool2 = (char *)NormalizationListLock.StackBase;
    if ( NormalizationListLock.StackBase
      && HIDWORD(NormalizationListLock.ThreadLock) + 1 != LODWORD(NormalizationListLock.ThreadLock) )
    {
      goto LABEL_16;
    }
    ThreadLock = NormalizationListLock.ThreadLock;
    if ( LODWORD(NormalizationListLock.ThreadLock) )
    {
      v16 = 2 * LODWORD(NormalizationListLock.ThreadLock);
      if ( (unsigned int)(2 * LODWORD(NormalizationListLock.ThreadLock)) < LODWORD(NormalizationListLock.ThreadLock) )
        goto LABEL_28;
    }
    else
    {
      v16 = 16;
    }
    LOBYTE(StackBase) = v12;
    RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, StackBase, v10);
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
LABEL_28:
      v23 = -1073741801;
      goto LABEL_30;
    }
    v17 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 1);
    v12 = v17;
    if ( ThreadLock == LODWORD(NormalizationListLock.ThreadLock) )
    {
      v19 = NormalizationListLock.StackBase;
      if ( NormalizationListLock.StackBase )
      {
        memmove(Pool2, NormalizationListLock.StackBase, 24LL * HIDWORD(NormalizationListLock.ThreadLock));
        v6 = v19;
      }
      i = Key;
      NormalizationListLock.StackBase = Pool2;
      LODWORD(NormalizationListLock.ThreadLock) = v16;
LABEL_16:
      v4 = 1;
      v20 = 3LL * HIDWORD(NormalizationListLock.ThreadLock);
      StackBase = (unsigned int)++HIDWORD(NormalizationListLock.ThreadLock);
      v13 = &Pool2[8 * v20];
      if ( a3 )
        v21 = *a3;
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
  if ( !a3 || v22 == *a3 )
  {
    StackBase = a2;
    *((_QWORD *)v13 + 2) = a2;
  }
  if ( a4 )
    *a4 = v22;
  if ( v4 )
  {
    qsort(NormalizationListLock.StackBase, HIDWORD(NormalizationListLock.ThreadLock), 0x18uLL, RtlpComparePropertyEntry);
    v23 = 0;
  }
  else
  {
    v23 = 0x40000000;
  }
LABEL_30:
  LOBYTE(StackBase) = v12;
  RtlpReleasePropStoreLockExclusive((char *)&RtlpBootStatHandleLock.Header.WaitListHead.Flink + 4, StackBase, v10);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v23;
}
