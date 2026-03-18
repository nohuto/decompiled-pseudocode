/*
 * XREFs of MiRemoveVadEvent @ 0x140528374
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  volatile LONG *v2; // rdi
  _QWORD *v5; // rbx
  KIRQL v6; // dl
  _QWORD *v7; // r8
  __int64 v8; // rcx

  v2 = (volatile LONG *)(a1 + 64);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *v7;
      if ( v7 == a2 )
        break;
      v5 = v7;
      v7 = (_QWORD *)*v7;
      if ( !v8 )
        goto LABEL_8;
    }
    if ( v5 )
      *v5 = v8;
    else
      *(_QWORD *)(a1 + 56) = v8 | *(_QWORD *)(a1 + 56) & 0xFLL;
  }
LABEL_8:
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v6);
}
