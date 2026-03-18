/*
 * XREFs of MmAllocateMappingAddressEx @ 0x140AF1F50
 * Callers:
 *     DifMmAllocateMappingAddressExWrapper @ 0x140665AA0 (DifMmAllocateMappingAddressExWrapper.c)
 *     PnprInitializeMappingReserve @ 0x1407AF578 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     MmAllocateMappingAddress @ 0x140AF1F30 (MmAllocateMappingAddress.c)
 * Callees:
 *     VfPtIsAptEnabledOnKernel @ 0x14034A8F0 (VfPtIsAptEnabledOnKernel.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiInsertMappingNode @ 0x1404D8B44 (MiInsertMappingNode.c)
 *     MiInsertPteTracker @ 0x1405033CC (MiInsertPteTracker.c)
 *     VfPtMiscPoolNotification @ 0x14050C738 (VfPtMiscPoolNotification.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v6; // rbx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rdi
  _QWORD v16[7]; // [rsp+30h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+0h]

  v3 = a2;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 0LL;
  v6 = (unsigned __int64)(a1 + 4095) >> 12;
  if ( !v6 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, a2, BugCheckParameter4);
  if ( !a2 )
    return 0LL;
  if ( v6 >= 0x100000000LL )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x30uLL, 1836214605, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  v11 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, v6, v9, v10);
  v12 = (_QWORD *)v11;
  if ( !v11 )
  {
    ExFreePoolWithTag((PVOID)PoolMm, 0);
    return 0LL;
  }
  v13 = 0;
  *(_QWORD *)(PoolMm + 32) = v6;
  v14 = (__int64)(v11 << 25) >> 16;
  *(_QWORD *)(PoolMm + 24) = v14;
  *(_DWORD *)(PoolMm + 40) = v3;
  *(_DWORD *)(PoolMm + 44) = a3;
  do
  {
    ++v13;
    *v12++ = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  while ( v13 < v6 );
  if ( (dword_140FBE20C & 1) != 0 )
  {
    v16[0] = 0LL;
    v16[1] = 0LL;
    v16[5] = 0LL;
    v16[3] = (__int64)(v11 << 25) >> 16;
    v16[4] = v3;
    v16[2] = v6 << 12;
    v16[6] = 0LL;
    MiInsertPteTracker((__int64)v16, 2, 0, 1);
  }
  MiInsertMappingNode((_QWORD *)PoolMm);
  if ( VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(v14, a1, v3, 0);
  return v14;
}
