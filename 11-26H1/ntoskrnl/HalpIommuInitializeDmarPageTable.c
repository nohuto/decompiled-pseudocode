/*
 * XREFs of HalpIommuInitializeDmarPageTable @ 0x1405A3384
 * Callers:
 *     HalpIommuCreateDmarPageTable @ 0x1405A30AC (HalpIommuCreateDmarPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1404754B4 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404756D4 (HalpIommuAllocateAndZeroPageTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpIommuInitializeDmarPageTable(
        int a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 (__fastcall **v11)(); // rax
  unsigned int v12; // edx
  int v13; // r9d
  const char *v14; // rcx
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // r15
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  __int64 v20; // r12
  void *v21; // rax

  memset_0(a7, 0, 0x60uLL);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v11 = IvtFlPhyPteInterface;
        break;
      case 2:
        v11 = HsaFlPhyPteInterface;
        break;
      case 3:
        v11 = HsaSlPhyPteInterface;
        break;
      default:
        return 3221225485LL;
    }
  }
  else
  {
    v11 = IvtSlPhyPteInterface;
  }
  a7[7] = 3;
  v12 = 0;
  *((_QWORD *)a7 + 11) = v11;
  v13 = 12;
  *a7 = a1;
  a7[6] = a3;
  if ( a3 )
  {
    v14 = "\t";
    do
    {
      *(_DWORD *)&v14[(char *)a7 - "\t" + 36] = *(_DWORD *)v14;
      v15 = a3 - v12++;
      a7[v15 + 14] = v13;
      v13 += *(_DWORD *)v14;
      v14 += 4;
    }
    while ( v12 < a3 );
  }
  a7[8] = 0;
  v16 = HalpIommuAllocateAndZeroPageTable((__int64)a7, 0, a6);
  *((_QWORD *)a7 + 2) = v16;
  v17 = (__int64)v16;
  if ( !v16 )
    return 3221225626LL;
  v18 = 0;
  v19 = a3 - a2;
  while ( v18 < v19 )
  {
    v20 = 1 << a7[v18 + 9] << a7[7];
    v21 = HalpIommuAllocateAndZeroPageTable((__int64)a7, v18 + 1, a6);
    *(_QWORD *)(v20 + v17) = v21;
    if ( !v21 )
      return 3221225626LL;
    MmGetPhysicalAddress(v21);
    guard_dispatch_icall_no_overrides(v17, a3 - v18 - 1);
    HalpIommuFlushPhysicalPtesFromCacheSize(v17, 1 << a7[7]);
    v17 = *(_QWORD *)(v20 + v17);
    ++v18;
  }
  *((_QWORD *)a7 + 1) = 0LL;
  return 0LL;
}
