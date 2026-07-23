/*
 * XREFs of MiCloneTreeUpdate @ 0x1404EE49C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveClone @ 0x1404A9318 (MiRemoveClone.c)
 *     MiInsertClone @ 0x1404F0180 (MiInsertClone.c)
 *     MiLockCloneDescriptorTreeExclusive @ 0x14050B54C (MiLockCloneDescriptorTreeExclusive.c)
 *     MiFreeCloneDescriptor @ 0x140B46704 (MiFreeCloneDescriptor.c)
 */

void __fastcall MiCloneTreeUpdate(ULONG_PTR *a1)
{
  _QWORD *v1; // rdi
  void *v3; // r15
  ULONG_PTR v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rbx
  KIRQL v7; // r12
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rdi
  _QWORD *i; // rax
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rcx
  _QWORD **v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *j; // rcx
  volatile LONG *v16; // rcx

  v1 = (_QWORD *)a1[2];
  v3 = 0LL;
  v4 = *a1;
  v5 = (__int64 *)v1[7];
  v6 = (__int64)(a1[40] - v1[3]) >> 5;
  v7 = MiLockCloneDescriptorTreeExclusive(*a1);
  if ( v6 )
  {
    *v5 = v6;
    v1[6] = v6;
    v1[5] = v6;
    v1[4] = 32 * v6 + v5[2] - 32;
  }
  else
  {
    v1[6] = 0LL;
    MiRemoveClone(v4, (__int64)v1);
    v3 = v1;
    a1[2] = 0LL;
  }
  v8 = a1[37];
  v9 = 0LL;
  for ( i = *(_QWORD **)(v4 + 640); i; i = (_QWORD *)*i )
    v9 = (unsigned __int64)i;
  while ( v9 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v9 + 56) + 8LL));
    v11 = *(_QWORD *)v8;
    *(_OWORD *)v8 = *(_OWORD *)v9;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(v9 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(v9 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(v9 + 96);
    v12 = a1[1];
    a1[35] += *(_QWORD *)(v8 + 64);
    MiInsertClone(v12, v8, 1LL);
    v13 = *(_QWORD ***)(v9 + 8);
    v8 = v11;
    v14 = v9;
    if ( v13 )
    {
      v9 = *(_QWORD *)(v9 + 8);
      for ( j = *v13; j; j = (_QWORD *)*j )
        v9 = (unsigned __int64)j;
    }
    else
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v9 || *(_QWORD *)v9 == v14 )
          break;
        v14 = v9;
      }
    }
  }
  v16 = (volatile LONG *)(*(_QWORD *)(v4 + 1040) + 1280LL);
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
  else
    ExReleaseSpinLockExclusive(v16, v7);
  if ( v3 )
    MiFreeCloneDescriptor(v4, v3);
  a1[37] = v8;
}
