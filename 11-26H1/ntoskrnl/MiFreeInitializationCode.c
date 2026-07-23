/*
 * XREFs of MiFreeInitializationCode @ 0x140ACB290
 * Callers:
 *     MiFreeDriverInitialization @ 0x140ACB1C4 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140D060E4 (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140D07620 (MmDiscardDriverSection.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x14024F870 (MiVaToPfnEx.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     KeReservePrivilegedPages @ 0x1404EFB04 (KeReservePrivilegedPages.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F780C (MiGetExtendedLoaderBitmap.c)
 *     MiBadRefCount @ 0x140500054 (MiBadRefCount.c)
 *     MiFreeLargeInitializationCodePages @ 0x140522D3C (MiFreeLargeInitializationCodePages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiUnmapReturnCharges @ 0x140ACA14C (MiUnmapReturnCharges.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  PVOID v4; // rdi
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
  _RTL_BITMAP *ExtendedLoaderBitmap; // rax
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
    v4 = (PVOID)a1[6];
  v5 = 0LL;
  if ( !a4 )
    v5 = (__int64)a1;
  v6 = a2 << 25 >> 16;
  v7 = ((a3 - a2) >> 3) + 1;
  v8 = v7;
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v11 = (v10 - PteAddress) >> 3;
  if ( v5 )
  {
    ExtendedLoaderBitmap = (_RTL_BITMAP *)MiGetExtendedLoaderBitmap(v5);
    RtlClearBits(ExtendedLoaderBitmap, v11, v7);
  }
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( *(PVOID *)(*((_QWORD *)&MiState + i + 463) + 48LL) == v4 )
    {
      RtlSetBitsEx((__int64)&stru_140E2D2D0.SchedulerApc.Reserved[1], (unsigned int)v11, v7);
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
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[72], -(int)v7);
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, -v7);
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
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, -*((_QWORD *)&v25 + 1));
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[80], v24 - DWORD2(v25));
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)&stru_140E366D8.WaitBlockFill11[16], -DWORD2(v25));
      _InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E2D2D0.UserTime, v24 - DWORD2(v25));
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
