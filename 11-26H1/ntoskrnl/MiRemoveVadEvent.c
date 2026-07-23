/*
 * XREFs of MiRemoveVadEvent @ 0x14052A9E4
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
