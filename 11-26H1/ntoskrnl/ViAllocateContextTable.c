/*
 * XREFs of ViAllocateContextTable @ 0x140C287CC
 * Callers:
 *     VfInsertContext @ 0x1406447A0 (VfInsertContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 */

char *__fastcall ViAllocateContextTable(__int16 a1)
{
  char *result; // rax

  result = (char *)ExAllocateFromNPagedLookasideList(&ViObjectContextTableLookaside);
  if ( result )
  {
    *(_WORD *)result = a1;
    *((_WORD *)result + 1) = 6;
    *((_DWORD *)result + 1) = 0;
    *(_OWORD *)(result + 8) = 0LL;
  }
  return result;
}
