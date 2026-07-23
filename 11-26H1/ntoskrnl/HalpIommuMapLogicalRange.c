/*
 * XREFs of HalpIommuMapLogicalRange @ 0x1404757DC
 * Callers:
 *     HalpIommuDomainMapLogicalRange @ 0x14047578C (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainMapIdentityRange @ 0x1404A31E4 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuConstructReservedPageTable @ 0x140BF1C40 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIommuUnmapLogicalRange @ 0x140474B78 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1404754B4 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404756D4 (HalpIommuAllocateAndZeroPageTable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuMapLogicalRange(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r11d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // r9
  int v15; // edx
  __int64 v16; // r13
  unsigned __int64 *v17; // r14
  KIRQL v18; // r12
  void *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  int v24; // edx
  __int64 v25; // r15
  unsigned int v26; // ebx
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r9
  char v31; // [rsp+30h] [rbp-B8h]
  unsigned int v32; // [rsp+34h] [rbp-B4h]
  __int64 v33; // [rsp+38h] [rbp-B0h] BYREF
  int v34; // [rsp+40h] [rbp-A8h]
  __int64 v35; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+50h] [rbp-98h]
  __int64 v37; // [rsp+58h] [rbp-90h]
  unsigned __int64 v38; // [rsp+60h] [rbp-88h]
  _OWORD v39[3]; // [rsp+68h] [rbp-80h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  LODWORD(v7) = 0;
  v8 = a6;
  v9 = *(_QWORD *)(a2 + 16);
  v37 = a1;
  v10 = a6 + ((a5 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v34 = a3;
  v31 = v6;
  v36 = v10;
  v32 = 1 << v6;
  v39[0] = v9;
  v38 = a6;
  v33 = a4 & -(__int64)(a3 != 0);
  memset(&v39[1], 0, 32);
  v35 = 0LL;
  while ( v8 < v10 )
  {
    while ( 1 )
    {
      v12 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v13 = *(_DWORD *)(a2 + 4LL * (unsigned int)v7 + 36);
      if ( (unsigned int)v7 >= (unsigned int)v12 )
        break;
      v14 = v9 + (1 << v13 << v6);
      if ( v13 < 0x40 )
        v15 = (1LL << v13) - 1;
      else
        v15 = -1;
      v16 = v15 & (unsigned int)(v8 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v7 + 60));
      v17 = (unsigned __int64 *)(v14 + 8 * v16);
      if ( !*v17 )
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
        if ( !*v17 )
        {
          v19 = HalpIommuAllocateAndZeroPageTable(a2, (int)v7 + 1, v37);
          *v17 = (unsigned __int64)v19;
          if ( !v19 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v18);
            return 3221225626LL;
          }
          MmGetPhysicalAddress(v19);
          v20 = (unsigned int)((_DWORD)v16 << v31) + v9;
          guard_dispatch_icall_no_overrides(v20, (unsigned int)(*(_DWORD *)(a2 + 24) - v7 - 1));
          HalpIommuFlushPhysicalPtesFromCacheSize(v20, v32);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v18);
        LOBYTE(v6) = v31;
      }
      v9 = *v17;
      v7 = (unsigned int)(v7 + 1);
      *((_QWORD *)v39 + v7) = *v17;
    }
    if ( v34 )
    {
      if ( v13 < 0x40 )
        v22 = (1LL << v13) - 1;
      else
        LODWORD(v22) = -1;
      v23 = v33;
      v24 = v22 & (v8 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v7 + 60));
      v25 = v9 + (unsigned int)(v24 << v6);
      v26 = (1 << *(_DWORD *)(a2 + 4 * v12 + 36)) - v24;
      if ( (unsigned int)((v36 - v8) >> 12) <= v26 )
        v26 = (v36 - v8) >> 12;
      v27 = guard_dispatch_icall_no_overrides(v25, v33);
      v35 += (unsigned int)(v27 << 12);
      v33 = v35;
      if ( v27 != v26 )
      {
        HalpIommuUnmapLogicalRange(a2, (unsigned __int64 *)&v33, v38);
        return 3221225485LL;
      }
      HalpIommuFlushPhysicalPtesFromCacheSize(v25, v32 * v26);
      LOBYTE(v6) = v31;
      v28 = v26 << 12;
      v33 = (unsigned int)v28 + v23;
      v21 = v28 + v8;
    }
    else
    {
      v21 = ~((1LL << ((unsigned __int8)v13 + 12)) - 1) & ((1LL << ((unsigned __int8)v13 + 12)) + v8);
    }
    if ( (_DWORD)v7 )
    {
      do
      {
        v29 = (unsigned int)(v7 - 1);
        if ( (v21 & (1LL << *(_DWORD *)(a2 + 4 * v29 + 60))) == (v8 & (1LL << *(_DWORD *)(a2 + 4 * v29 + 60))) )
          break;
        LODWORD(v7) = v7 - 1;
      }
      while ( (_DWORD)v29 );
    }
    v10 = v36;
    v8 = v21;
    v9 = *((_QWORD *)v39 + (unsigned int)v7);
  }
  return 0LL;
}
