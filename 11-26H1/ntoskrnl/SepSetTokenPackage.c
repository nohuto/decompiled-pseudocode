/*
 * XREFs of SepSetTokenPackage @ 0x1409E47AC
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B321C (SepGetAnonymousToken.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409E4888 (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  PVOID *v2; // rdi
  void *v4; // rcx
  PVOID *v6; // r14
  unsigned int v7; // r15d
  void *Pool2; // rbp
  PVOID *v10; // rbx
  unsigned int v11; // eax

  v2 = (PVOID *)(a1 + 784);
  v4 = *(void **)(a1 + 784);
  v6 = v2;
  if ( v4 )
  {
    if ( !RtlIsParentOfChildAppContainer(v4, a2) )
      return 3221225506LL;
    v6 = (PVOID *)(a1 + 784);
  }
  v7 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = v2;
  v11 = 4 * a2[1] + 8;
  if ( v11 <= v7 )
  {
    memmove(Pool2, a2, v11);
    v10 = v6;
  }
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v10 = 0LL;
  }
  *v10 = Pool2;
  return 0LL;
}
