/*
 * XREFs of SepSetTokenTrust @ 0x140A518F0
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x1404052FC (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  void *v2; // rdi
  void *v5; // rcx
  unsigned int v7; // ebp
  void *Pool2; // rax
  unsigned int v9; // ecx

  v2 = 0LL;
  if ( a2 )
  {
    v7 = 4 * a2[1] + 8;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v2 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v9 = 4 * a2[1] + 8;
    if ( v9 <= v7 )
      memmove(Pool2, a2, v9);
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *(_QWORD *)(a1 + 1104) = v2;
  return 0LL;
}
