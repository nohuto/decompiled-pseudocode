/*
 * XREFs of HalpIommuFreeDmaDomain @ 0x140590068
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainDelete @ 0x140789B10 (IommuDomainDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpIommuCleanupPageTable @ 0x1405A2F38 (HalpIommuCleanupPageTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rcx
  __int64 v5; // rdi
  _BYTE *v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    return 3221227272LL;
  v4 = (_BYTE *)(a1 + 52);
  if ( !HalpHvIommu || *v4 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = v4;
    if ( v5 )
    {
      HalpIommuCleanupPageTable(v5);
      HalpMmAllocCtxFree(v7, v5);
      v4 = v6;
    }
  }
  v8 = 0;
  if ( HalpHvIommu )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( !v9 || v9 == 2 )
    {
      v11 = *(unsigned int *)(a1 + 48);
      BYTE4(v11) = *v4;
      v8 = guard_dispatch_icall_no_overrides(&v11, a2);
    }
  }
  v10 = *(_QWORD **)(a1 + 64);
  if ( v10 )
    guard_dispatch_icall_no_overrides(v10, *v10);
  HalpMmAllocCtxFree((__int64)v10, a1);
  return v8;
}
