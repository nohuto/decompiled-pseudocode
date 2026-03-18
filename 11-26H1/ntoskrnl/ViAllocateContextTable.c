/*
 * XREFs of ViAllocateContextTable @ 0x140C227BC
 * Callers:
 *     VfInsertContext @ 0x140640BC0 (VfInsertContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
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
