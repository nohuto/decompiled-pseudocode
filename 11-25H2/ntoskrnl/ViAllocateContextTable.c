/*
 * XREFs of ViAllocateContextTable @ 0x140B748BC
 * Callers:
 *     VfInsertContext @ 0x140604820 (VfInsertContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 */

char *__fastcall ViAllocateContextTable(__int16 a1)
{
  char *result; // rax

  result = (char *)ExAllocateFromNPagedLookasideList(&ViObjectContextTableLookaside);
  if ( result )
  {
    *((_DWORD *)result + 1) = 0;
    *(_WORD *)result = a1;
    *((_WORD *)result + 1) = 6;
    *(_OWORD *)(result + 8) = 0LL;
  }
  return result;
}
