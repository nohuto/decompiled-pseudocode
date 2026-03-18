/*
 * XREFs of MiUpdatePageFileList @ 0x1406F8F84
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140705868 (MiIncreaseCommitLimits.c)
 *     MiDeletePagefile @ 0x14086B6A4 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35F48);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140E35F48);
  }
  if ( (a2 & 1) == 0 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E35F40, (__int64)v5);
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(a1 + 24);
  *(_WORD *)(a1 + 172) |= 0x100u;
  v8 = (_QWORD *)qword_140E35F40;
  if ( !qword_140E35F40 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E35F40, (unsigned __int64)v8, v2, v5);
LABEL_14:
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35F48);
  else
    ExReleaseSpinLockExclusive(&dword_140E35F48, v6);
}
