/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x140950D64
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x140950D08 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v5; // rsi
  _QWORD **v6; // rax
  _QWORD *i; // rbx

  v5 = 0LL;
  PopAcquireRwLockShared((volatile signed __int64 *)(PopEtGlobals + 16), a2, a3, a4);
  v6 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v6 = Object;
  for ( i = *v6; i != (_QWORD *)PopEtGlobals; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i, 0x74456F50u) )
    {
      v5 = i;
      break;
    }
  }
  PopReleaseRwLock((struct _KTHREAD *)(PopEtGlobals + 16));
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v5;
}
