/*
 * XREFs of MiUpdateCommitCounts @ 0x14045BB84
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 *     MiReplenishLocalCommit @ 0x14045BAD8 (MiReplenishLocalCommit.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MiIncreaseExposedCommit @ 0x1404803E0 (MiIncreaseExposedCommit.c)
 */

void __fastcall MiUpdateCommitCounts(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rcx
  bool v10; // cf
  volatile LONG *v11; // rcx
  KIRQL v12; // si
  unsigned __int64 v13; // rdx
  struct _KEVENT *v14; // rcx
  int v15; // eax
  bool v16; // zf
  volatile LONG *v17; // rcx

  v4 = *(_QWORD *)(a1 + 17248);
  v5 = a2 + a3;
  v7 = *(_QWORD *)(a1 + 17240);
  if ( a2 + a3 <= a2 )
  {
    if ( a2 >= v4 && v5 < v4 )
      goto LABEL_11;
    if ( v5 >= v7 )
      goto LABEL_34;
    v10 = a2 < v7;
    goto LABEL_10;
  }
  if ( v5 >= v4 && a2 < v4 )
    goto LABEL_11;
  if ( a2 < v7 )
  {
    v10 = v5 < v7;
LABEL_10:
    if ( !v10 )
    {
LABEL_11:
      v11 = (volatile LONG *)(a1 + 17272);
      if ( KeGetCurrentIrql() == 2 )
      {
        v12 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
      }
      else
      {
        v12 = ExAcquireSpinLockExclusive(v11);
      }
      v13 = *(_QWORD *)(a1 + 23104);
      if ( v13 >= *(_QWORD *)(a1 + 17240) )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL);
        if ( v13 < *(_QWORD *)(a1 + 17248) )
        {
          if ( v15 == 1 )
          {
            KeResetEvent(*(PRKEVENT *)(a1 + 376));
            KeResetEvent(*(PRKEVENT *)(a1 + 384));
          }
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4LL) == 1;
        }
        else
        {
          if ( !v15 )
            KeSetEvent(*(PRKEVENT *)(a1 + 376), 0, 0);
          if ( *(_QWORD *)(a1 + 23448) == *(_QWORD *)(a1 + 17224) )
            KeSetEvent(*(PRKEVENT *)(a1 + 384), 0, 0);
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4LL) == 1;
        }
        if ( !v16 )
          goto LABEL_31;
        v14 = *(struct _KEVENT **)(a1 + 368);
      }
      else
      {
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 368) + 4LL) )
          KeSetEvent(*(PRKEVENT *)(a1 + 368), 0, 0);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL) != 1 )
          goto LABEL_31;
        KeResetEvent(*(PRKEVENT *)(a1 + 376));
        v14 = *(struct _KEVENT **)(a1 + 384);
      }
      KeResetEvent(v14);
LABEL_31:
      v17 = (volatile LONG *)(a1 + 17272);
      if ( v12 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v17);
      else
        ExReleaseSpinLockExclusive(v17, v12);
    }
  }
LABEL_34:
  if ( (a4 & 0x10) == 0 )
    MiIncreaseExposedCommit(a1, a3);
}
