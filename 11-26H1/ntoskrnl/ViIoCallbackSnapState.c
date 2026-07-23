/*
 * XREFs of ViIoCallbackSnapState @ 0x140C4C190
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140C4B580 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *ViIoCallbackSnapState()
{
  _DWORD *result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = ExAllocateFromNPagedLookasideList(&ViIoCallbackStateLookaside);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)result = CurrentIrql;
    result[1] = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  }
  return result;
}
