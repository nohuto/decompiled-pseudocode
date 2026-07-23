/*
 * XREFs of MiDeleteThreadContext @ 0x1404F1A20
 * Callers:
 *     MiZeroNodeConductorWait @ 0x1404F18D8 (MiZeroNodeConductorWait.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveConductorListZeroThread @ 0x14077F388 (MiRemoveConductorListZeroThread.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteThreadContext(__int64 a1, void *a2)
{
  _QWORD *v4; // rbx
  volatile LONG *v5; // rsi
  KIRQL v6; // dl
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v4 = 0LL;
  v5 = (volatile LONG *)(56320LL * *(unsigned int *)(a1 + 56) + 14200 + *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
  v6 = ExAcquireSpinLockExclusive(v5);
  v7 = *(_QWORD **)(a1 + 216);
  if ( v7 != (_QWORD *)(a1 + 216) )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v7;
      v4 = v7 - 20;
      if ( (void *)*(v7 - 11) == a2 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v8 == (_QWORD *)(a1 + 216) )
        goto LABEL_4;
    }
    if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
  }
LABEL_4:
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v6);
  MiRemoveConductorListZeroThread(a1, a2);
  ObfDereferenceObjectWithTag(a2, 0x655A6D4Du);
  ExFreePoolWithTag(v4, 0);
}
