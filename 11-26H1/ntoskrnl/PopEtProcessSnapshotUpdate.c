/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x140951054
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1407DC800 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x140950DF8 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEtAggregateKeyCleanup @ 0x140950F58 (PopEtAggregateKeyCleanup.c)
 *     PopEtProcessSnapshotFind @ 0x140951220 (PopEtProcessSnapshotFind.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14095132C (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x1409517A0 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtProcessSnapshotCreate @ 0x140951EC8 (PopEtProcessSnapshotCreate.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  _QWORD *v8; // rbx
  int v9; // ebx
  int v11; // r9d
  _QWORD *i; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *(_QWORD *)(v4 + 1640);
  if ( (*(_DWORD *)(v4 + 500) & 4) != 0 && *a1 != 4 || *(_QWORD *)(v7 + 456) == PopEtGlobals + 792 )
    return 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(v6 + 16), a2, a3, a4);
  v13 = PopEtProcessSnapshotFind(a1);
  v8 = (_QWORD *)v13;
  if ( v13 )
    goto LABEL_4;
  v9 = PopEtProcessSnapshotCreate(a1, &v13);
  if ( v9 >= 0 )
  {
    if ( *a1 == 1 || *(_DWORD *)(v7 + 476) > 1u )
    {
      v8 = (_QWORD *)v13;
      goto LABEL_5;
    }
    v8 = (_QWORD *)v13;
LABEL_4:
    PopEtEnergyTrackerUpdateAggregate(v6, v8, *((_QWORD *)a1 + 3), *a1);
LABEL_5:
    if ( *a1 == 4 )
    {
      v11 = *(_DWORD *)(v6 + 68) >> 5;
      v13 = v8[1] & (-1LL << (*(_DWORD *)(v6 + 68) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(v6 + 72)
                         + 8LL
                         * ((v11 - 1) & (HIBYTE(v13)
                                       - 877075889
                                       + 442596621 * (unsigned __int8)v13
                                       + 37
                                       * (BYTE6(v13)
                                        + 37
                                        * (BYTE5(v13)
                                         + 37
                                         * (BYTE4(v13)
                                          + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (unsigned int)BYTE1(v13)))))))));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v8 )
        {
          *i = *v8;
          --*(_DWORD *)(v6 + 64);
          *v8 |= 0x8000000000000002uLL;
          break;
        }
      }
      PopEtAggregateKeyCleanup(v8 + 2);
      ExFreePoolWithTag(v8, 0x54456F50u);
    }
    else
    {
      PopEtProcessSnapshotUpdateFromSnapshotContext(v8, a1);
    }
    v9 = 0;
  }
  PopReleaseRwLock((struct _KTHREAD *)(v6 + 16));
  return (unsigned int)v9;
}
