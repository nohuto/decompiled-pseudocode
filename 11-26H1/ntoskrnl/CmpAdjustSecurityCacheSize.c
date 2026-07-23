/*
 * XREFs of CmpAdjustSecurityCacheSize @ 0x140AEDF28
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall CmpAdjustSecurityCacheSize(__int64 a1)
{
  unsigned int v2; // ecx
  void *v3; // rax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 1880);
  if ( v2 >= *(_DWORD *)(a1 + 1884) )
    goto LABEL_4;
  v3 = (void *)guard_dispatch_icall_no_overrides(16 * v2, 0LL);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, *(const void **)(a1 + 1896), 16LL * *(unsigned int *)(a1 + 1880));
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 1896), (unsigned int)(16 * *(_DWORD *)(a1 + 1884)));
    *(_DWORD *)(a1 + 1884) = *(_DWORD *)(a1 + 1880);
    *(_QWORD *)(a1 + 1896) = v4;
LABEL_4:
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
