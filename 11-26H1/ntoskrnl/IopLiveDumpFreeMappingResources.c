/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x1405CF604
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1405CDE40 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x1405D164C (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmReleaseDumpHibernateResources @ 0x140B1AE1C (MmReleaseDumpHibernateResources.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rbp
  __int64 v4; // rcx
  struct _MDL *v5; // rcx

  if ( *(_QWORD *)(a1 + 896) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 888); ++i )
    {
      v3 = *(_QWORD *)(a1 + 896);
      v4 = *(_QWORD *)(v3 + 16LL * i);
      if ( v4 )
        MmReleaseDumpHibernateResources(v4, 0x10000LL);
      v5 = *(struct _MDL **)(v3 + 16LL * i + 8);
      if ( v5 )
        IoFreeMdl(v5);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 896), 0x706D644Cu);
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_DWORD *)(a1 + 888) = 0;
  }
}
