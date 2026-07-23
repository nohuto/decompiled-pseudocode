/*
 * XREFs of VfAvlReserveNode @ 0x1403C2690
 * Callers:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140C368A8 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140C36AC0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  if ( *((_DWORD *)a1 + 7) == 1 )
    result = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.ApcStateFill[32]);
  else
    result = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( result )
  {
    result += 4;
    *result = a2;
    if ( !a3 )
      a3 = *a1;
    result[1] = a3;
  }
  return result;
}
