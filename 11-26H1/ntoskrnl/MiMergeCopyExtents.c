/*
 * XREFs of MiMergeCopyExtents @ 0x1406FF634
 * Callers:
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiFormCopyExtents @ 0x1406FEDEC (MiFormCopyExtents.c)
 *     MiInsertExtentList @ 0x1406FF328 (MiInsertExtentList.c)
 *     MiLockFileExtentsExclusive @ 0x140773630 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407736A8 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMergeCopyExtents(_QWORD *a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  unsigned int **v5; // r15
  unsigned int *v6; // rax
  unsigned int *v7; // rdi
  unsigned int *v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // r13d
  unsigned int v12; // edx
  __int64 v13; // r8
  unsigned int *v14; // r10
  unsigned int v15; // ebp
  __int64 v16; // r12
  bool v17; // zf
  unsigned int *v18; // rcx
  __int64 v19; // r11
  volatile LONG *v20; // rsi
  KIRQL v21; // al
  __int64 i; // rsi
  __int64 v23; // rdx

  *a4 = 0LL;
  v5 = a4;
  v6 = (unsigned int *)MiFormCopyExtents(a2, 1u);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  v9 = (unsigned int *)a1[14];
  if ( v9 )
  {
    v10 = *v6;
    v11 = *v9;
    if ( *(_QWORD *)&v9[12 * v11] + (unsigned __int64)v9[12 * v11 - 4] > *(_QWORD *)&v6[12 * v10]
                                                                       + (unsigned __int64)v6[12 * v10 - 4] )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225994LL;
    }
    v12 = 0;
    v13 = 0LL;
    if ( v11 )
    {
      do
      {
        v14 = &v9[12 * v13 + 2];
        v15 = v14[6];
        v16 = *((_QWORD *)v14 + 5);
        v17 = v12 == v10;
        if ( v12 < v10 )
        {
          v18 = &v6[12 * v12 + 12];
          do
          {
            v19 = *(v18 - 4);
            if ( v15 >= (unsigned int)v19 && v15 < (unsigned __int64)(*(_QWORD *)v18 + v19) )
            {
              if ( (unsigned __int64)v15 + v16 <= *(_QWORD *)v18 + v19 )
                break;
              v16 += v15 - v19 - *(_QWORD *)v18;
              v15 = v19 + *v18;
            }
            ++v12;
            v18 += 12;
          }
          while ( v12 < v10 );
          v17 = v12 == v10;
        }
        if ( v17 )
          KeBugCheckEx(0x1Au, 0x1485uLL, (ULONG_PTR)v9, (ULONG_PTR)v6, (ULONG_PTR)&v9[12 * v13 + 2]);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < v11 );
      v5 = a4;
    }
  }
  v20 = (volatile LONG *)(*a1 + 72LL);
  v21 = ExAcquireSpinLockExclusive(v20);
  a1[14] = v7;
  if ( v21 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  else
    ExReleaseSpinLockExclusive(v20, v21);
  MiLockFileExtentsExclusive();
  if ( v9 )
  {
    for ( i = 0LL; (unsigned int)i < *v9; i = (unsigned int)(i + 1) )
    {
      v23 = (__int64)&v9[12 * i + 2];
      if ( *(_QWORD *)(v23 + 32) != 0x8000000000000000uLL )
        RtlAvlRemoveNode((unsigned __int64 *)&stru_140E2D2D0.WaitBlock[3].Thread, v23);
    }
  }
  MiInsertExtentList(v7);
  MiUnlockFileExtentsExclusive();
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v5 = v7;
  return 0LL;
}
