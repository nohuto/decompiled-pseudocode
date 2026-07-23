/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x1405D0650
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405CF1A8 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IopLiveDumpFreeMappingResources @ 0x1405D1E14 (IopLiveDumpFreeMappingResources.c)
 *     MmAllocateDumpHibernateResources @ 0x140B2C898 (MmAllocateDumpHibernateResources.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 Pool2; // rax
  unsigned int v4; // ebx
  unsigned int i; // esi
  __int64 v7; // r15
  __int64 DumpHibernateResources; // rax
  __int64 v9; // r9
  __int64 Mdl; // rax

  v1 = KeNumberProcessors_0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v4 = 0;
  *(_QWORD *)(a1 + 896) = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(a1 + 888) = v1;
    for ( i = 0; i < v1; ++i )
    {
      v7 = *(_QWORD *)(a1 + 896);
      DumpHibernateResources = MmAllocateDumpHibernateResources(0x10000LL);
      *(_QWORD *)(v7 + 16LL * i) = DumpHibernateResources;
      if ( !DumpHibernateResources )
        goto LABEL_3;
      Mdl = IopAllocateMdl(DumpHibernateResources, 0x10000u, 0, v9, 0LL, 0);
      *(_QWORD *)(v7 + 16LL * i + 8) = Mdl;
      if ( !Mdl )
        goto LABEL_3;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 888) = 0;
LABEL_3:
    v4 = -1073741670;
    IopLiveDumpFreeMappingResources(a1);
  }
  return v4;
}
