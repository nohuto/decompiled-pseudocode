/*
 * XREFs of CmpVolumeContextCleanup @ 0x140906270
 * Callers:
 *     CmpVolumeContextFree @ 0x140905BAC (CmpVolumeContextFree.c)
 *     CmpVolumeContextCreate @ 0x1409062A8 (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  struct _FILE_OBJECT **v1; // rbx
  LONG_PTR result; // rax

  v1 = (struct _FILE_OBJECT **)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) == 1 )
    result = PiPagePathSetState(*v1, 0);
  if ( *v1 )
    return ObfDereferenceObject(*v1);
  return result;
}
