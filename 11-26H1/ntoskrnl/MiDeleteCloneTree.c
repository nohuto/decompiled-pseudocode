/*
 * XREFs of MiDeleteCloneTree @ 0x140528E14
 * Callers:
 *     MiDeleteInsertedCloneVads @ 0x140B42284 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteCloneDescriptor @ 0x1404A92D8 (MiDeleteCloneDescriptor.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404F5510 (MiDeleteDeferredCloneDescriptors.c)
 *     MiLockCloneDescriptorTreeExclusive @ 0x14050B54C (MiLockCloneDescriptorTreeExclusive.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneTree(ULONG_PTR a1)
{
  KIRQL v2; // al
  _SLIST_ENTRY *v3; // rdx
  KIRQL v4; // si
  _SLIST_ENTRY *v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rcx
  _SLIST_ENTRY *i; // rbx
  volatile LONG *v10; // rcx

  v2 = MiLockCloneDescriptorTreeExclusive(a1);
  v3 = *(_SLIST_ENTRY **)(a1 + 640);
  v4 = v2;
  v5 = 0LL;
  while ( v3 )
  {
    v5 = v3;
    v3 = v3->Next;
  }
  if ( v5 )
  {
    do
    {
      v6 = *((_QWORD *)&v5->Next + 1);
      v7 = (unsigned __int64)v5;
      if ( v6 )
      {
        v8 = *(_QWORD **)v6;
        if ( *(_QWORD *)v6 )
        {
          do
          {
            v6 = (unsigned __int64)v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
      }
      else
      {
        for ( i = v5[1].Next; ; i = *(_SLIST_ENTRY **)(v6 + 16) )
        {
          v6 = (unsigned __int64)i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v7 )
            break;
          v7 = v6;
        }
      }
      v5[3].Next = 0LL;
      MiDeleteCloneDescriptor(a1, v5);
      v5 = (_SLIST_ENTRY *)v6;
    }
    while ( v6 );
  }
  v10 = (volatile LONG *)(*(_QWORD *)(a1 + 1040) + 1280LL);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockExclusive(v10, v4);
  return MiDeleteDeferredCloneDescriptors(a1);
}
