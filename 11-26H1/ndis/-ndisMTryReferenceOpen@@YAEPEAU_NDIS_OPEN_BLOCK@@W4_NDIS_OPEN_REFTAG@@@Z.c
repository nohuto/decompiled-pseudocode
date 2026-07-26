/*
 * XREFs of ?ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14009EE74
 * Callers:
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B5410 (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 */

char __fastcall ndisMTryReferenceOpen(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v5; // di
  KIRQL v6; // bp

  v2 = (KSPIN_LOCK *)(a1 + 600);
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
  if ( *(_DWORD *)(a1 + 228) )
  {
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 592), a2);
    ++*(_DWORD *)(a1 + 228);
    v5 = 1;
  }
  KeReleaseSpinLock(v2, v6);
  return v5;
}
