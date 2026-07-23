/*
 * XREFs of MiComputeDataFlushRange @ 0x140480064
 * Callers:
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MiComputeFlushRange @ 0x14045DF50 (MiComputeFlushRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiFindLastSubsection @ 0x1404466F0 (MiFindLastSubsection.c)
 *     MiBuildWakeList @ 0x140470AE0 (MiBuildWakeList.c)
 */

__int64 __fastcall MiComputeDataFlushRange(__int64 a1, KIRQL a2, unsigned __int64 *a3, __int64 a4, int a5, __int64 a6)
{
  KIRQL v8; // bp
  __int64 v9; // rsi
  volatile LONG *v10; // rcx
  _DWORD *v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r15
  _DWORD *SubsectionNode; // rax
  unsigned __int64 v15; // r13
  _DWORD *v16; // rax
  __int64 LastSubsection; // rdi
  unsigned __int64 v18; // r13
  int i; // r12d
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // r14
  __int64 v24; // rcx
  volatile LONG *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 result; // rax

  v8 = a2;
  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v10 = (volatile LONG *)(a1 + 72);
    if ( a2 == 17 )
      goto LABEL_22;
    goto LABEL_41;
  }
  v11 = (_DWORD *)(a1 + 128);
  if ( !a3 )
  {
    v12 = 0LL;
LABEL_11:
    LastSubsection = MiFindLastSubsection(a1, 1LL, (__int64)a3);
    v18 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - *(_DWORD *)(LastSubsection + 52) - 1);
    goto LABEL_12;
  }
  v13 = *a3 >> 12;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1);
  v11 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_21:
    v10 = (volatile LONG *)(v9 + 72);
    if ( v8 == 17 )
    {
LABEL_22:
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      return 0LL;
    }
    a2 = v8;
LABEL_41:
    ExReleaseSpinLockExclusive(v10, a2);
    return 0LL;
  }
  v12 = v13 - ((unsigned int)SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26));
  if ( !a4
    || (v15 = (a4 + *a3 - 1) >> 12,
        v16 = MiLocateSubsectionNode(v9, a4 + *a3 - 1, 1),
        (LastSubsection = (__int64)v16) == 0) )
  {
    a1 = v9;
    goto LABEL_11;
  }
  v18 = v15 - ((unsigned int)v16[9] | ((unsigned __int64)(v16[8] & 0xFFC0) << 26));
LABEL_12:
  if ( !v11[26] || (int)MiReferenceSubsection((__int64 *)v11, 0) <= 1 )
  {
    for ( i = v11[11] - v12; v11 != (_DWORD *)LastSubsection; i += v11[11] )
    {
      v11 = (_DWORD *)*((_QWORD *)v11 + 2);
      if ( !v11 )
        break;
      if ( v11[26] && (int)MiReferenceSubsection((__int64 *)v11, 0) > 1 )
      {
        v20 = *((_QWORD *)v11 + 1);
        goto LABEL_24;
      }
    }
    goto LABEL_21;
  }
  i = 0;
  v20 = *((_QWORD *)v11 + 1) + 8 * v12;
LABEL_24:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection((__int64 *)LastSubsection, 0) <= 1 )
  {
    v21 = *((_QWORD *)v11 + 2);
    v22 = 0LL;
    if ( v21 == LastSubsection )
      goto LABEL_32;
    do
    {
      if ( *(_DWORD *)(v21 + 104) && *(_QWORD *)(v21 + 8) )
        v22 = v21;
      v21 = *(_QWORD *)(v21 + 16);
    }
    while ( v21 != LastSubsection );
    LastSubsection = v22;
    if ( !v22 )
LABEL_32:
      LastSubsection = (__int64)v11;
    MiReferenceSubsection((__int64 *)LastSubsection, 0);
    v18 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - *(_DWORD *)(LastSubsection + 52) - 1);
  }
  ++*(_QWORD *)(v9 + 40);
  v23 = MiBuildWakeList(v9, 4);
  MiRemoveUnusedSegment(v24);
  if ( a5 )
    *(_DWORD *)(v9 + 56) |= 4u;
  v25 = (volatile LONG *)(v9 + 72);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v25);
  else
    ExReleaseSpinLockExclusive(v25, v8);
  MiReleaseControlAreaWaiters(v23, v26, v27);
  v28 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v20;
  *(_QWORD *)(a6 + 16) = v28 + 8 * v18;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v11;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = i;
  return result;
}
