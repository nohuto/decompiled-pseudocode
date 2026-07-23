/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x140C4DB2C
 * Callers:
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x140C4A05C (ViThunkFreeSharedThunksArray.c)
 */

void __fastcall VfThunkRemoveTargetNotify(void **a1)
{
  void **v2; // rcx

  v2 = a1 + 2;
  if ( (*(_DWORD *)v2 & 1) == 0 )
  {
    ViThunkFreeSharedThunksArray(v2);
    ViThunkFreeSharedThunksArray(a1 + 3);
    ViThunkFreeSharedThunksArray(a1 + 4);
  }
}
