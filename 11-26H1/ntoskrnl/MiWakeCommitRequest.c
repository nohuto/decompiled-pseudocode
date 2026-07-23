/*
 * XREFs of MiWakeCommitRequest @ 0x14049D094
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14049CD9C (MiRemoveUnusedSegments.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiWakeCommitRequest(__int64 a1, int a2)
{
  volatile LONG *v2; // rdi
  _QWORD *v4; // r14
  KIRQL v6; // si
  _QWORD *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf

  v2 = (volatile LONG *)(a1 + 2112);
  v4 = (_QWORD *)(a1 + 2320);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  while ( 1 )
  {
    v7 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v8 = *(_QWORD *)(a1 + 23104);
    v9 = *(_QWORD *)(a1 + 23448);
    if ( v8 >= v9 || (v10 = v7[3], v10 > v9 - v8) )
    {
      if ( a2 )
        break;
      v11 = (char *)v7 + 79;
      if ( (*((_BYTE *)v7 + 79) & 0x44) == 0 )
        break;
    }
    else
    {
      v11 = (char *)v7 + 79;
      v7[4] = 1LL;
      if ( (*((_BYTE *)v7 + 79) & 0x40) != 0 )
        *(_QWORD *)(a1 + 3184) -= v10;
    }
    v12 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v13 = (_QWORD *)v7[1], (_QWORD *)*v13 != v7) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v14 = (*v11 & 4) == 0;
    v7[10] = 1LL;
    if ( v14 )
      KeSetEvent((PRKEVENT)v7 + 2, 0, 0);
    else
      _InterlockedExchange((volatile __int32 *)v7 + 18, 0);
  }
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v6);
}
