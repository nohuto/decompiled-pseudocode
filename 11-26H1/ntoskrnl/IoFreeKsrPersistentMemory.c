/*
 * XREFs of IoFreeKsrPersistentMemory @ 0x14079F170
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoFreeKsrPersistentMemory(_QWORD *P, __int64 a2, __int64 a3)
{
  struct _MDL *v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  v4 = (struct _MDL *)P[1];
  if ( v4 )
  {
    v5 = (void *)P[5];
    if ( v5 )
      MmUnmapLockedPages(v5, v4);
  }
  LOBYTE(a3) = 1;
  KsrFreePersistedMemoryBlock(P + 2, P[4], a3);
  v6 = (void *)P[1];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x61706E50u);
  v7 = (void *)P[6];
  if ( v7 )
    ExFreePoolWithTag(v7, 0x61706E50u);
  ExFreePoolWithTag(P, 0x61706E50u);
  return 0LL;
}
