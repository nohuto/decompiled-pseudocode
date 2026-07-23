/*
 * XREFs of PspStorageEmptyNonReadonly @ 0x140B3CEB0
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x140B3CE80 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     PspStorageEmptyArrayNonReadonly @ 0x1404C94EC (PspStorageEmptyArrayNonReadonly.c)
 */

__int64 __fastcall PspStorageEmptyNonReadonly(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // eax
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  struct _KTHREAD *v8; // rcx
  unsigned int v9; // edi

  v5 = PspStorageEmptyArrayNonReadonly((struct _KTHREAD *)a1, 0x20u, a3, a4);
  v8 = *(struct _KTHREAD **)(a1 + 512);
  v9 = v5;
  if ( v8 )
    return (unsigned int)PspStorageEmptyArrayNonReadonly(v8, 0x100u, v6, v7) + v5;
  return v9;
}
