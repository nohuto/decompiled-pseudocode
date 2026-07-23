/*
 * XREFs of MiMirrorZeroFreeListsCallback @ 0x14049AC50
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateLargePageCandidates @ 0x1404406E0 (MiUpdateLargePageCandidates.c)
 *     MiMirrorAddPagesToBrownList @ 0x140485C4C (MiMirrorAddPagesToBrownList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiMirrorZeroFreeListsCallback(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int8 CurrentIrql; // si
  int v7; // ebp
  int v8; // r15d
  unsigned __int64 v9; // r13
  volatile LONG *v10; // rdi
  __int64 v11; // rbx
  bool v12; // zf
  char v14; // [rsp+70h] [rbp+8h]
  __int64 v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+88h] [rbp+20h]

  v16 = a4;
  v4 = *(_WORD *)(a3 + 26) & 3;
  v5 = *(_QWORD *)a1;
  CurrentIrql = 17;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = a4;
  v15 = *(_QWORD *)(a2 + 13896);
  v9 = MiPageSizes[v4];
  v14 = 17;
  if ( a4 )
  {
    v10 = (volatile LONG *)(a3 + 32);
    do
    {
      if ( v7 == 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v14 = CurrentIrql;
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1, a2);
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(v10);
      }
      a1 = *((_QWORD *)v10 - 4);
      if ( a1 != 0x3FFFFFFFFFLL )
      {
        do
        {
          v11 = 48 * a1 - 0x220000000000LL;
          if ( v7 == 1 )
          {
            if ( v5 )
            {
              if ( (*(_DWORD *)(v11 + 32) & 0x80000) == 0 )
                MiMirrorAddPagesToBrownList(0, a1, v9);
            }
            else if ( (_DWORD)v4 == 3 )
            {
              MiUpdateLargePageCandidateValue(v15, a1, 3, 1, 0LL);
            }
            else
            {
              MiUpdateLargePageCandidates(a1, v4, 1LL);
            }
          }
          else
          {
            MiMirrorOmitPagesFromCopy(v5, 0LL, a1, v9);
          }
          a1 = *(_QWORD *)v11 & 0xFFFFFFFFFFLL;
        }
        while ( a1 != 0x3FFFFFFFFFLL );
        CurrentIrql = v14;
        v8 = v16;
      }
      if ( v7 == 1 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        a1 = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      v10 += 22;
      v12 = v8-- == 1;
      v16 = v8;
    }
    while ( !v12 );
  }
  return 1LL;
}
