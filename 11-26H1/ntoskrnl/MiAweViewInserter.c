/*
 * XREFs of MiAweViewInserter @ 0x140705814
 * Callers:
 *     MiPostInsertVad @ 0x140318774 (MiPostInsertVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiLockAweVadsExclusive @ 0x1404F877C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x140527850 (MiUnlockAweVadsExclusive.c)
 */

void __fastcall MiAweViewInserter(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rsi
  KIRQL v5; // bl
  _QWORD *v6; // r10
  unsigned __int64 v7; // r11
  bool v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  volatile LONG *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 1040);
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1328));
  v6 = *(_QWORD **)(v4 + 1304);
  v7 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 40)
                                                                                              + 32LL) << 32);
  v8 = 0;
  if ( !v6 )
    goto LABEL_9;
  while ( 1 )
  {
    v9 = v6[3];
    if ( v7 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      || v7 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) )
    {
      break;
    }
    v10 = (_QWORD *)*v6;
    if ( !*v6 )
      goto LABEL_9;
LABEL_7:
    v6 = v10;
  }
  v10 = (_QWORD *)v6[1];
  if ( v10 )
    goto LABEL_7;
  v8 = 1;
LABEL_9:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v4 + 1304), (unsigned __int64)v6, v8, (_QWORD *)(a2 + 16));
  v11 = (volatile LONG *)(v4 + 1328);
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  else
    ExReleaseSpinLockExclusive(v11, v5);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
