/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x140414D68
 * Callers:
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 * Callees:
 *     MiDereferenceVad @ 0x140414DB0 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A9F940 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
