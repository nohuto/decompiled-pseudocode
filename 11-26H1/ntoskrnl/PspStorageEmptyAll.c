/*
 * XREFs of PspStorageEmptyAll @ 0x140AED328
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x140AED28C (PspJobDeleteStorageArrays.c)
 * Callees:
 *     PspStorageEmptyArray @ 0x140AED370 (PspStorageEmptyArray.c)
 */

__int64 __fastcall PspStorageEmptyAll(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *v3; // rcx
  unsigned int v4; // edi

  v2 = PspStorageEmptyArray((struct _KTHREAD *)a1);
  v3 = *(struct _KTHREAD **)(a1 + 512);
  v4 = v2;
  if ( v3 )
    return (unsigned int)PspStorageEmptyArray(v3) + v2;
  return v4;
}
