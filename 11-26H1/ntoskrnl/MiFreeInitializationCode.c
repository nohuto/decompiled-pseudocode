/*
 * XREFs of MiFreeInitializationCode @ 0x140AC9178
 * Callers:
 *     MiFreeDriverInitialization @ 0x140AC90AC (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140CFFD44 (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140D01280 (MmDiscardDriverSection.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x14024DF10 (MiVaToPfnEx.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x140457F60 (MiGetControlAreaPartition.c)
 *     KeReservePrivilegedPages @ 0x1404F64F4 (KeReservePrivilegedPages.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404FE2CC (MiGetExtendedLoaderBitmap.c)
 *     MiBadRefCount @ 0x1405067A4 (MiBadRefCount.c)
 *     MiFreeLargeInitializationCodePages @ 0x140520698 (MiFreeLargeInitializationCodePages.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiUnmapReturnCharges @ 0x140AC855C (MiUnmapReturnCharges.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 PteAddress; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 i; // rdx
  ULONG *ControlAreaPartition; // r13
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned __int64 v16; // rax
  RTL_BITMAP *ExtendedLoaderBitmap; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  ULONG_PTR v22; // rdi
  int v23; // eax
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+C8h] [rbp+48h]

  v27 = 0LL;
  v4 = a1;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( !a4 )
    v4 = *(_QWORD *)(a1 + 48);
  v5 = 0LL;
  if ( !a4 )
    v5 = a1;
  v6 = a2 << 25 >> 16;
  v7 = ((a3 - a2) >> 3) + 1;
  v8 = v7;
  PteAddress = MiGetPteAddress(v4);
  v11 = (v10 - PteAddress) >> 3;
  if ( v5 )
  {
    ExtendedLoaderBitmap = (RTL_BITMAP *)MiGetExtendedLoaderBitmap(v5);
    RtlClearBits(ExtendedLoaderBitmap, v11, v7);
  }
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( *(_QWORD *)(*((_QWORD *)&MiState + i + 463) + 48LL) == v4 )
    {
      RtlSetBitsEx((__int64)&stru_140E2D150.SchedulerApc.Reserved[1], (unsigned int)v11, v7);
      break;
    }
  }
  ControlAreaPartition = &MiSystemPartition;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
  {
    v18 = v6;
    while ( v8 )
    {
      v19 = MiVaToPfnEx(v18);
      v29 = v19;
      v20 = 48 * v19 - 0x220000000000LL;
      if ( (unsigned __int16)*(_DWORD *)(v20 + 32) != 1 )
        MiBadRefCount(48 * v19 - 0x220000000000LL);
      v21 = v19 & 0x1FF;
      v22 = v8;
      if ( 512 - v21 <= v8 )
        v22 = 512 - v21;
      if ( (MiFlags & 0x20000) != 0 && (MiFlags & 0x10000) != 0 )
      {
        v23 = KeReservePrivilegedPages();
        if ( v23 < 0 )
          KeBugCheckEx(0x1Au, 0x101DuLL, v18, v22, v23);
      }
      MiFreeLargeInitializationCodePages(v20, v29, v22);
      v18 += v22 << 12;
      v8 -= v22;
    }
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2D150.SchedulerApcFill5[72], -(int)v7);
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E36558.320, -v7);
    *((_QWORD *)&v25 + 1) = v7;
    *(_QWORD *)&v24 = v7;
    MiUnmapReturnCharges((__int64)&MiSystemPartition, (unsigned __int64 *)&v24);
  }
  else if ( v5 )
  {
    v14 = *(_QWORD *)(v5 + 112);
    if ( v14 )
    {
      v16 = MiSectionControlArea(v14);
      ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(v16);
    }
    MiDecommitPages(a2, v7, v14, 0LL, 0LL, 0, 0LL, (__int64)&v24);
    if ( v4 == PsNtosImageBase || v4 == PsHalImageBase )
    {
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E36558.320, -*((_QWORD *)&v25 + 1));
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D150.SchedulerApcFill5[80], v24 - DWORD2(v25));
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)&stru_140E36558.WaitBlockFill11[16], -DWORD2(v25));
      _InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E2D150.UserTime, v24 - DWORD2(v25));
    }
    *(_QWORD *)&v24 = *((_QWORD *)&v25 + 1);
    MiReturnResident((__int64)ControlAreaPartition, *((unsigned __int64 *)&v25 + 1));
    MiReturnCommit((__int64)ControlAreaPartition, *((_QWORD *)&v25 + 1) - *((_QWORD *)&v24 + 1), 0);
  }
  else
  {
    MiFreeBootDriverPages(0LL, v4, a2, v7);
  }
  result = MiFlags;
  if ( (MiFlags & 0x20000) != 0 && (MiFlags & 0x10000) != 0 )
  {
    result = MI_IS_PHYSICAL_ADDRESS(v6);
    if ( !(_DWORD)result )
    {
      result = KeReservePrivilegedPages();
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x101EuLL, v6, v7, (int)result);
    }
  }
  return result;
}
