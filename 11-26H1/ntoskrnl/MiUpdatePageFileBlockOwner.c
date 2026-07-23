/*
 * XREFs of MiUpdatePageFileBlockOwner @ 0x1402EF100
 * Callers:
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiTransferPageFileOwnership @ 0x1402ED5EC (MiTransferPageFileOwnership.c)
 *     MiHandleForkPagefilePte @ 0x1402EEED4 (MiHandleForkPagefilePte.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteEntirePageHashEntry @ 0x140488EA4 (MiWriteEntirePageHashEntry.c)
 *     MiPageHashBugCheck @ 0x140531E94 (MiPageHashBugCheck.c)
 */

void __fastcall MiUpdatePageFileBlockOwner(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  volatile LONG *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  volatile LONG *v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  volatile LONG *v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r10d
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  if ( dword_140E360D0 )
  {
    v8 = (volatile LONG *)(a1 + 200);
    v9 = a4 | 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
    v10 = *(_QWORD *)(a1 + 184);
    v11 = v8;
    if ( !v10 )
      goto LABEL_14;
    v12 = v10 + dword_140E360CC * a2;
    if ( (*(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) == 0 )
      goto LABEL_14;
    v13 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
      goto LABEL_14;
    if ( *(_DWORD *)v12 == 1 )
    {
      if ( a5 )
      {
        v14 = v8;
LABEL_15:
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        return;
      }
    }
    else if ( v13 == v9 && *(_DWORD *)(v12 + 4) == a2 )
    {
      goto LABEL_13;
    }
    ++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[20];
    if ( !*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[8] )
    {
      MiWriteEntirePageHashEntry(&v17, v12);
      DWORD1(v17) = *(_DWORD *)(v15 + 4);
      *((_QWORD *)&v17 + 1) = v9;
      MiPageHashBugCheck(v16, a2, v15);
    }
LABEL_13:
    LODWORD(v17) = *(_DWORD *)v12;
    *((_QWORD *)&v17 + 1) = a3 | 1;
    DWORD1(v17) = a2;
    MiWriteEntirePageHashEntry(v12, &v17);
LABEL_14:
    v14 = v11;
    goto LABEL_15;
  }
}
