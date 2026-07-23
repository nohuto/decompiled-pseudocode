/*
 * XREFs of MiInsertClone @ 0x1404F0180
 * Callers:
 *     MiCloneTreeUpdate @ 0x1404EE49C (MiCloneTreeUpdate.c)
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiLockCloneDescriptorTreeExclusive @ 0x14050B54C (MiLockCloneDescriptorTreeExclusive.c)
 */

void __fastcall MiInsertClone(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r14
  KIRQL v7; // di
  bool v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  volatile LONG *v11; // rcx

  v3 = *(_QWORD *)(a1 + 1040);
  if ( a3 )
    v7 = 17;
  else
    v7 = MiLockCloneDescriptorTreeExclusive(a1);
  v8 = 0;
  v9 = *(_QWORD **)(a1 + 640);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( a2[3] > v9[4] || a2[4] >= v9[3] )
      {
        v10 = (_QWORD *)v9[1];
        if ( !v10 )
        {
          v8 = 1;
          break;
        }
      }
      else
      {
        v10 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
      }
      v9 = v10;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 640), (unsigned __int64)v9, v8, a2);
  ++*(_QWORD *)(v3 + 1232);
  *(_QWORD *)(v3 + 1240) += a2[8];
  if ( !a3 )
  {
    v11 = (volatile LONG *)(*(_QWORD *)(a1 + 1040) + 1280LL);
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    else
      ExReleaseSpinLockExclusive(v11, v7);
  }
}
