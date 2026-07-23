/*
 * XREFs of CmpFlushNotify @ 0x1408C07F8
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  char *v9; // rbx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v6 + 32);
    if ( !a2 )
      CmLockHive(*(_QWORD *)(v6 + 32));
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
      goto LABEL_14;
    if ( *(_QWORD *)(v8 + 16) != v8 + 16 )
      CmpPostNotify(v8, a2, a3, 267, 0, 0LL, a3);
    v9 = *(char **)(a1 + 16);
    if ( v9 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v9 + 56));
      **((_QWORD **)v9 + 1) = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 )
        *(_QWORD *)(*(_QWORD *)v9 + 8LL) = *((_QWORD *)v9 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
        CmUnlockHive(v7);
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
LABEL_14:
      if ( !a2 )
        CmUnlockHive(v7);
    }
  }
}
