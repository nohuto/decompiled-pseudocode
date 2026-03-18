/*
 * XREFs of HalFreeCommonBufferDmarThin @ 0x1403441A0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     HalpPopCommonBufferEntry @ 0x140344374 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403444A8 (HalpDmaDereferenceDomainObject.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferDmarThin(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // r14
  __int64 v6; // r12
  __int64 result; // rax
  void *v9; // rsi
  struct _MDL *v10; // rbp
  char v11; // di

  v4 = *(_QWORD *)(a1 + 512);
  v6 = a2;
  result = HalpPopCommonBufferEntry(a4, v4);
  v9 = (void *)result;
  if ( result )
  {
    v10 = *(struct _MDL **)(result + 48);
    v11 = *(_BYTE *)(result + 64);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40), a3, (unsigned __int64)(v6 + 4095) >> 12);
    if ( v11 )
    {
      MmUnmapLockedPages(a4, v10);
      MiFreePagesFromMdl((ULONG_PTR)v10);
      ExFreePoolWithTag(v10, 0);
    }
    ExFreePoolWithTag(v9, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
