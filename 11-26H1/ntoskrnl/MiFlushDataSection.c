/*
 * XREFs of MiFlushDataSection @ 0x1404B705C
 * Callers:
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  volatile LONG *v7; // rcx
  const void *v8; // rcx
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  KIRQL OldIrql; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  OldIrql = 0;
  v4 = *(__int64 **)(a1 + 40);
  v9 = 0LL;
  result = MiLockSectionControlArea(v4, 1, &OldIrql);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    v7 = (volatile LONG *)(result + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    else
      ExReleaseSpinLockExclusive(v7, OldIrql);
    v8 = *(const void **)(a1 + 40);
    if ( v6 )
    {
      CcFlushCachePriv(v8, (__int64)&EmpParseLock.880, 0, 0LL, 0, &v9, 0LL);
      return (unsigned int)v9;
    }
    else
    {
      return MmFlushSection((__int64)v8, 0LL, 0LL, 0LL, &v9, 1);
    }
  }
  return result;
}
