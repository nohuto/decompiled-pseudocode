/*
 * XREFs of MiMarkHugeRangeIoPfnDeleted @ 0x1406F98B8
 * Callers:
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIoPfnTreeLockContended @ 0x1404CC934 (MiIoPfnTreeLockContended.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiMarkHugeRangeIoPfnDeleted(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *i; // rcx
  char v8; // r14
  ULONG_PTR v9; // r15
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // rax
  __int64 v13; // rcx
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // rax

  v4 = MiLockIoPfnTree(1);
  i = (_QWORD *)qword_140E36000;
  v8 = v4;
  if ( qword_140E36000 )
  {
    v9 = BugCheckParameter2 + a2;
    BugCheckParameter4 = 0LL;
    v11 = v9 - 1;
    while ( 1 )
    {
      v12 = i[3];
      if ( v11 < v12 )
        goto LABEL_7;
      if ( BugCheckParameter2 < v12 + 512 )
        break;
      i = (_QWORD *)i[1];
LABEL_8:
      if ( !i )
      {
        while ( 1 )
        {
LABEL_9:
          if ( !BugCheckParameter4 || v11 < *(_QWORD *)(BugCheckParameter4 + 24) )
            goto LABEL_33;
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter4 + 172));
          if ( *(_DWORD *)(BugCheckParameter4 + 32) )
            KeBugCheckEx(0x1Au, 0x6194CuLL, BugCheckParameter2, v9 - 1, BugCheckParameter4);
          *(_BYTE *)(BugCheckParameter4 + 40) = 0;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter4 + 172));
          BugCheckParameter2 = *(_QWORD *)(BugCheckParameter4 + 24) + 512LL;
          if ( v9 > BugCheckParameter2
            && ((unsigned int)MiIoPfnTreeLockContended(0) || v8 != 17 && KeShouldYieldProcessor()) )
          {
            break;
          }
          i = *(_QWORD **)(BugCheckParameter4 + 8);
          v15 = BugCheckParameter4;
          if ( i )
          {
            BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8);
            for ( i = (_QWORD *)*i; i; i = (_QWORD *)*i )
              BugCheckParameter4 = (ULONG_PTR)i;
          }
          else
          {
            while ( 1 )
            {
              BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !BugCheckParameter4 || *(_QWORD *)BugCheckParameter4 == v15 )
                break;
              v15 = BugCheckParameter4;
            }
          }
        }
        LOBYTE(v13) = v8;
        MiUnlockIoPfnTree(v13, 1LL, v5, v6);
        MiLockIoPfnTree(1);
        i = (_QWORD *)qword_140E36000;
        BugCheckParameter4 = 0LL;
        while ( 1 )
        {
          if ( !i )
            goto LABEL_9;
          v14 = i[3];
          if ( v11 >= v14 )
          {
            if ( BugCheckParameter2 >= v14 + 512 )
            {
              i = (_QWORD *)i[1];
              continue;
            }
            BugCheckParameter4 = (ULONG_PTR)i;
          }
          i = (_QWORD *)*i;
        }
      }
    }
    BugCheckParameter4 = (ULONG_PTR)i;
LABEL_7:
    i = (_QWORD *)*i;
    goto LABEL_8;
  }
LABEL_33:
  LOBYTE(i) = v8;
  return MiUnlockIoPfnTree(i, 1LL, v5, v6);
}
