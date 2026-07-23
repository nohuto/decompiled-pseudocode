/*
 * XREFs of MiGetCachedPoolPages @ 0x1404AC4E0
 * Callers:
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSplitPageChain @ 0x1404BDA6C (MiSplitPageChain.c)
 */

__int64 __fastcall MiGetCachedPoolPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  volatile LONG *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v8; // edi
  KIRQL v9; // dl
  __int64 v10; // r8
  _QWORD *i; // rsi

  v1 = *(unsigned int *)(a1 + 96);
  v3 = qword_140E2D838;
  v4 = 384 * v1;
  v5 = (volatile LONG *)(384 * v1 + qword_140E2D838 + 72);
  if ( *(_BYTE *)(a1 + 102) == 2 )
  {
    *(_BYTE *)(a1 + 103) = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
  }
  else
  {
    *(_BYTE *)(a1 + 103) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(384 * v1 + qword_140E2D838 + 72));
  }
  v6 = v4 + v3 + 80;
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 > *(_QWORD *)(a1 + 8) )
    v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  if ( v7 )
    MiSplitPageChain(v6, v7, a1 + 16);
  v9 = *(_BYTE *)(a1 + 103);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v9);
  if ( _bittest16((const signed __int16 *)(a1 + 100), 9u) )
  {
    for ( i = *(_QWORD **)(a1 + 16); i; i = (_QWORD *)*i )
      MiFillPhysicalPages(0LL, (__int64)(i + 0x44000000000LL) / 48, v10, 0LL);
  }
  LOBYTE(v8) = *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 8);
  return v8;
}
