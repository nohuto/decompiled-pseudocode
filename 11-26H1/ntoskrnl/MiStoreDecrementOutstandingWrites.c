/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x1404027E8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiStoreRundownWritesApc @ 0x14070FAE0 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall MiStoreDecrementOutstandingWrites(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 1324) - 1;
  *(_DWORD *)(a1 + 1324) = result;
  v2 = *(struct _KEVENT **)(a1 + 1400);
  if ( v2 )
  {
    if ( !result )
      return KeSetEvent(v2, 0, 0);
  }
  return result;
}
