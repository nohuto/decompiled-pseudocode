/*
 * XREFs of HalpIommuMapLogical @ 0x140475180
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x140474E60 (IommuMapLogicalRangeEx.c)
 *     HalpIommuDomainMapLogical @ 0x140475068 (HalpIommuDomainMapLogical.c)
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

__int64 __fastcall HalpIommuMapLogical(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r10d
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned int v11; // r14d
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // r13
  __int64 *v17; // r15
  __int64 v18; // rax
  int v19; // r14d
  int v20; // edx
  __int64 v21; // r15
  unsigned int v22; // ebx
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  KIRQL v28; // r12
  void *v29; // rax
  __int64 v30; // rbx
  char v31; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-98h]
  int v34; // [rsp+44h] [rbp-94h]
  unsigned __int64 v35; // [rsp+48h] [rbp-90h]
  __int64 v36; // [rsp+50h] [rbp-88h]
  unsigned __int64 v37; // [rsp+58h] [rbp-80h]
  _OWORD v38[3]; // [rsp+60h] [rbp-78h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_QWORD *)(a2 + 16);
  LODWORD(v8) = 0;
  v9 = a6;
  memset(v38, 0, sizeof(v38));
  v11 = 0;
  v36 = a4;
  LODWORD(v32) = 0;
  v34 = a3;
  v31 = v6;
  v33 = 1 << v6;
  *(_QWORD *)&v38[0] = v7;
  v37 = a6;
  v35 = 0LL;
  while ( v11 < a5 )
  {
    while ( 1 )
    {
      v12 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v13 = *(_DWORD *)(a2 + 4LL * (unsigned int)v8 + 36);
      if ( (unsigned int)v8 >= (unsigned int)v12 )
        break;
      v14 = v7 + (1 << v13 << v6);
      if ( v13 >= 0x40 )
        v15 = -1;
      else
        v15 = (1LL << v13) - 1;
      v16 = v15 & (unsigned int)(v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v8 + 60));
      v17 = (__int64 *)(v14 + 8 * v16);
      if ( !*v17 )
      {
        v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
        if ( !*v17 )
        {
          v29 = (void *)HalpIommuAllocateAndZeroPageTable(a2, (unsigned int)(v8 + 1), 0LL);
          *v17 = (__int64)v29;
          if ( !v29 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v28);
            return 3221225626LL;
          }
          MmGetPhysicalAddress(v29);
          v30 = (unsigned int)((_DWORD)v16 << v31) + v7;
          guard_dispatch_icall_no_overrides(v30, (unsigned int)(*(_DWORD *)(a2 + 24) - v8 - 1));
          HalpIommuFlushPhysicalPtesFromCacheSize(v30, v33);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v28);
        LOBYTE(v6) = v31;
      }
      v7 = *v17;
      v8 = (unsigned int)(v8 + 1);
      *((_QWORD *)v38 + v8) = *v17;
    }
    if ( v34 )
    {
      if ( v13 >= 0x40 )
        LODWORD(v18) = -1;
      else
        v18 = (1LL << v13) - 1;
      v19 = v32;
      v20 = v18 & (v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v8 + 60));
      v21 = v7 + (unsigned int)(v20 << v6);
      v22 = (1 << *(_DWORD *)(a2 + 4 * v12 + 36)) - v20;
      if ( (int)a5 - (int)v32 <= v22 )
        v22 = a5 - v32;
      v23 = guard_dispatch_icall_no_overrides(v21, v36 + 8LL * (unsigned int)v32);
      v35 += (unsigned int)(v23 << 12);
      v32 = v35;
      if ( v23 != v22 )
      {
        HalpIommuUnmapLogicalRange(a2, &v32, v37);
        return 3221225485LL;
      }
      HalpIommuFlushPhysicalPtesFromCacheSize(v21, v33 * v22);
      LOBYTE(v6) = v31;
      LODWORD(v24) = v22;
      v25 = v9 + ((unsigned __int64)v22 << 12);
    }
    else
    {
      v19 = v32;
      v25 = ~((1LL << ((unsigned __int8)v13 + 12)) - 1) & ((1LL << ((unsigned __int8)v13 + 12)) + v9);
      v24 = (v25 - v9) >> 12;
    }
    v11 = v24 + v19;
    LODWORD(v32) = v11;
    if ( (_DWORD)v8 )
    {
      do
      {
        v26 = (unsigned int)(v8 - 1);
        if ( (v25 & (1LL << *(_DWORD *)(a2 + 4 * v26 + 60))) == (v9 & (1LL << *(_DWORD *)(a2 + 4 * v26 + 60))) )
          break;
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v26 );
    }
    v9 = v25;
    v7 = *((_QWORD *)v38 + (unsigned int)v8);
  }
  return 0LL;
}
