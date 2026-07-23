/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x14077AE18
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, unsigned int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  void *Pool2; // rax
  void *v10; // rbx
  unsigned int v11; // edi

  v4 = a4;
  if ( !SepRmCapTableLock.KernelShadowStackLimit.AllFields )
    return 3221225659LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memmove(Pool2, a3, v4);
  v11 = guard_dispatch_icall_no_overrides(a1, a2);
  ExFreePoolWithTag(v10, 0);
  return v11;
}
