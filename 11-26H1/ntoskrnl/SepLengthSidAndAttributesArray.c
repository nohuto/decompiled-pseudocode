/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x140A44A14
 * Callers:
 *     SepCreateClaimAttributes @ 0x140AEFEE8 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFBF28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  void *Pool2; // rdi
  unsigned int v8; // eax

  v3 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v8 = SeCaptureSidAndAttributesArray(a1, a2, 0LL);
  *a3 = 0;
  if ( v8 != -1073741789 )
    v3 = v8;
  ExFreePoolWithTag(Pool2, 0);
  return v3;
}
