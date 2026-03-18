/*
 * XREFs of PspJobDeleteStorageArrays @ 0x140AEA79C
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x140AEA7DC (PspFreeStorage.c)
 *     PspStorageEmptyAll @ 0x140AEA838 (PspStorageEmptyAll.c)
 */

__int64 __fastcall PspJobDeleteStorageArrays(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 1536) )
  {
    PspStorageEmptyAll();
    result = PspFreeStorage(*(PVOID *)(a1 + 1536));
    *(_QWORD *)(a1 + 1536) = 0LL;
  }
  return result;
}
