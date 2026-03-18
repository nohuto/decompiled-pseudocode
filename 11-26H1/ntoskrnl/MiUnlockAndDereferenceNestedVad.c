/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x14041D518
 * Callers:
 *     MiReserveUserMemoryFinishVad @ 0x14095C5E0 (MiReserveUserMemoryFinishVad.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 * Callees:
 *     MiDereferenceVad @ 0x14041D560 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A9F610 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  int v2; // ebx
  __int64 v3; // rdx

  v2 = MiDereferenceVad((ULONG_PTR)P);
  MiUnlockNestedVad(P, v3);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
