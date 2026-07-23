/*
 * XREFs of MiFinishPageFileExtension @ 0x140508B3C
 * Callers:
 *     MiStoreExtendVirtualPagefile @ 0x14050B248 (MiStoreExtendVirtualPagefile.c)
 *     MiAttemptPageFileExtension @ 0x140B318D8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140444400 (MiCoalescePageFileBitmapsCache.c)
 *     MiUpdateReserveClusterInfo @ 0x14049E3C8 (MiUpdateReserveClusterInfo.c)
 */

void __fastcall MiFinishPageFileExtension(struct _KEVENT *a1, __int64 a2, ULONG a3)
{
  volatile LONG *v3; // rdi
  KIRQL v7; // al
  __int64 v8; // r15
  ULONG v9; // r14d
  KIRQL v10; // si
  ULONG v11; // ecx
  char v12; // bp

  v3 = (volatile LONG *)(a2 + 200);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 200));
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_DWORD *)a2;
  v10 = v7;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), *(_DWORD *)a2, a3);
  if ( (*(_BYTE *)(a2 + 172) & 0x40) == 0 )
    RtlClearBits((PRTL_BITMAP)(v8 + 24), v9, a3);
  *(_DWORD *)a2 += a3;
  *(_DWORD *)(a2 + 12) += a3;
  v11 = a3 + *(_DWORD *)(a2 + 20);
  v12 = *(_BYTE *)(a2 + 174) & 1;
  *(_DWORD *)(a2 + 20) = v11;
  if ( (*(_BYTE *)(a2 + 172) & 0x40) == 0 )
  {
    ++*(_DWORD *)(a2 + 96);
    MiCoalescePageFileBitmapsCache(a2, 0, v9);
    MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 224), 0LL, 0);
  }
  if ( v10 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v10);
  if ( v12 )
    KeSetEvent(a1 + 42, 0, 0);
}
