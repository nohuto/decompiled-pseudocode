/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140D06644
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140713FC8 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiActOnLargeKernelHalPages @ 0x14086A38C (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r12
  __int64 *i; // r14
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 SListFaultAddress_high; // rdi
  __int64 v10; // rdi

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = i[6];
    v4 = (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    {
      if ( (MiFlags & 0x20000) != 0 )
        MiActOnLargeKernelHalPages((void *)v3);
      v6 = (unsigned __int64)HIDWORD(stru_140E366D8.SListFaultAddress) >> 12;
      if ( v6 )
        MiInitializeBootLoadedDriverPfnRange(&v4[(v5 + 511) & 0xFFFFFFFFFFFFFE00uLL], v6, 1);
    }
    else
    {
      v7 = &v4[v5];
      v8 = MiInitializeBootLoadedDriverPfnRange(v4, v5, 0);
      if ( (PVOID)v3 == PsNtosImageBase || (PVOID)v3 == PsHalImageBase )
        SListFaultAddress_high = HIDWORD(stru_140E366D8.SListFaultAddress);
      else
        SListFaultAddress_high = (unsigned int)(LODWORD(stru_140E366D8.QuantumTarget)
                                              + HIDWORD(stru_140E366D8.SListFaultAddress));
      v10 = SListFaultAddress_high >> 12;
      if ( v10 )
      {
        v5 += v10;
        MiInitializeBootLoadedDriverPfnRange(v7, v10, 1);
        v7 += v10;
      }
      if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase && *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[72] )
      {
        v5 += *(unsigned int *)&stru_140E2D2D0.WaitBlockFill11[72];
        MiInitializeBootLoadedDriverPfnRange(v7, *(unsigned int *)&stru_140E2D2D0.WaitBlockFill11[72], 0);
      }
      if ( v8 )
      {
        if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v8, 0LL, 0LL) < 0 )
          return 0LL;
        _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, v8);
      }
      if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase )
      {
        _InterlockedAdd((volatile signed __int32 *)&stru_140E366D8.WaitBlockFill11[16], v5);
        _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, -(__int64)v5);
      }
    }
  }
  return 1LL;
}
