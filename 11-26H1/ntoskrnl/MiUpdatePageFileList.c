/*
 * XREFs of MiUpdatePageFileList @ 0x1406FDC54
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiUpdatePageFileList(__int64 a1, char a2)
{
  bool v2; // bl
  _QWORD *v5; // r14
  KIRQL v6; // si
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return;
  v5 = (_QWORD *)(a1 + 232);
  if ( (a2 & 2) != 0 )
  {
    v6 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E360C8);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140E360C8);
  }
  if ( (a2 & 1) == 0 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E360C0, (__int64)v5);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(a1 + 24);
  *(_WORD *)(a1 + 172) |= 0x100u;
  v8 = (_QWORD *)qword_140E360C0;
  if ( !qword_140E360C0 )
    goto LABEL_10;
  while ( v7 < *(v8 - 26) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_10;
LABEL_12:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_12;
  v2 = 1;
LABEL_10:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E360C0, (unsigned __int64)v8, v2, v5);
LABEL_14:
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E360C8);
  else
    ExReleaseSpinLockExclusive(&dword_140E360C8, v6);
}
