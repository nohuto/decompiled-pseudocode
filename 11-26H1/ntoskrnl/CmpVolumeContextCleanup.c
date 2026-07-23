/*
 * XREFs of CmpVolumeContextCleanup @ 0x140A2E5A8
 * Callers:
 *     CmpVolumeContextFree @ 0x140A2E2E0 (CmpVolumeContextFree.c)
 *     CmpVolumeContextCreate @ 0x140A2E5E0 (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
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
