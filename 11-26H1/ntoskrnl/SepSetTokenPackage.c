/*
 * XREFs of SepSetTokenPackage @ 0x140A8F860
 * Callers:
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlIsParentOfChildAppContainer @ 0x140A8F93C (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    if ( !(unsigned __int8)RtlIsParentOfChildAppContainer(v4, a2) )
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
