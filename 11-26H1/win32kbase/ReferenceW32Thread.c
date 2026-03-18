/*
 * XREFs of ReferenceW32Thread @ 0x140102FC0
 * Callers:
 *     AllocateW32ThreadImpl @ 0x140102ED0 (AllocateW32ThreadImpl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceW32Thread(__int64 a1)
{
  ObfReferenceObject(*(PVOID *)a1);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 368));
}
