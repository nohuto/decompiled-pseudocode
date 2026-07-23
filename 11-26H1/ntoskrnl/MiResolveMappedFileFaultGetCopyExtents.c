/*
 * XREFs of MiResolveMappedFileFaultGetCopyExtents @ 0x1406FC4C4
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLookupFixupExtentByPte @ 0x1404C5484 (MiLookupFixupExtentByPte.c)
 */

void __fastcall MiResolveMappedFileFaultGetCopyExtents(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rsi
  volatile LONG *v4; // rbp
  _BYTE *v5; // rax
  _BYTE *v6; // rsi

  v1 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v1 = 1;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0
      || !*(_QWORD *)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48)
      || ((v4 = (volatile LONG *)(v3 + 72),
           ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 72)),
           v5 = MiLookupFixupExtentByPte(v3, *(const void **)(a1 + 8)),
           (v6 = v5) == 0LL)
       || (*v5 & 1) != 0
        ? (v6 = 0LL)
        : (_BYTE *)(v1 = 1),
          ExReleaseSpinLockSharedFromDpcLevel(v4),
          *(_QWORD *)(a1 + 72) = v6,
          !v1) )
    {
      v1 = 2;
      *(_DWORD *)(a1 + 136) = 1;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
}
