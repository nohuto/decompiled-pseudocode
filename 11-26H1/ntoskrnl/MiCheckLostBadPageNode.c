/*
 * XREFs of MiCheckLostBadPageNode @ 0x1406F0D10
 * Callers:
 *     MiGetListOfPendingBadPages @ 0x14052AB58 (MiGetListOfPendingBadPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall MiCheckLostBadPageNode(unsigned __int64 a1)
{
  bool v2; // si
  __int64 PoolMm; // rax
  _QWORD *v4; // rdi
  KIRQL v5; // bp
  _QWORD *v6; // rax
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  bool v10; // zf

  v2 = 0;
  PoolMm = ExAllocatePoolMm(
             64LL,
             0x20uLL,
             1816291661,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v4 = (_QWORD *)PoolMm;
  if ( !PoolMm )
    return PoolMm;
  v5 = ExAcquireSpinLockExclusive(&dword_140E2EB10);
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) == 0 )
    goto LABEL_18;
  v6 = (_QWORD *)qword_140E2EB00;
  if ( qword_140E2EB00 )
  {
    do
    {
      if ( a1 <= v6[3] )
      {
        if ( a1 >= v6[3] )
          break;
        v6 = (_QWORD *)*v6;
      }
      else
      {
        v6 = (_QWORD *)v6[1];
      }
    }
    while ( v6 );
    if ( v6 )
      goto LABEL_18;
  }
  v4[3] = a1;
  v7 = 0;
  v8 = (_QWORD *)qword_140E2EB00;
  if ( !qword_140E2EB00 )
    goto LABEL_17;
  while ( a1 < v8[3] )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_17;
LABEL_15:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_15;
  v7 = 1;
LABEL_17:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2EB00, (unsigned __int64)v8, v7, v4);
  v10 = qword_140E2EB18-- == 1;
  v4 = 0LL;
  v2 = v10;
LABEL_18:
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB10);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EB10, v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  LOBYTE(PoolMm) = v2;
  return PoolMm;
}
