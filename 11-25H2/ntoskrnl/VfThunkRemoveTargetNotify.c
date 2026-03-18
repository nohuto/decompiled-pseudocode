/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x140B872DC
 * Callers:
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x140B965C0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkRemoveTargetNotify(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 1) == 0 )
  {
    ((void (*)(void))ViThunkFreeSharedThunksArray)();
    ViThunkFreeSharedThunksArray(a1 + 24);
    return ViThunkFreeSharedThunksArray(a1 + 32);
  }
  return result;
}
