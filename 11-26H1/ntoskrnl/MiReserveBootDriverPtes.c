/*
 * XREFs of MiReserveBootDriverPtes @ 0x140CFAD14
 * Callers:
 *     MiInitializeDriverPtes @ 0x140CFAA44 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(__int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  _QWORD *i; // rcx
  const void **SystemArgument1; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 result; // rax
  unsigned __int64 v18; // r13
  _RTL_BITMAP *v19; // rdi

  v4 = a1 << 25 >> 16;
  if ( (PVOID)v4 == PsNtosImageBase || (PVOID)v4 == PsHalImageBase )
    v5 = (HIDWORD(stru_140E366D8.SListFaultAddress) >> 12) + ((WORD2(stru_140E366D8.SListFaultAddress) & 0xFFF) != 0);
  else
    v5 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[72]
       + (((HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) & 0xFFF) != 0)
       + ((unsigned int)(HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) >> 12);
  v6 = (unsigned int)(v5 + a2);
  v7 = 0;
  v8 = a1 + 8 * v6;
  v9 = (v8 + 120) & 0xFFFFFFFFFFFFFF80uLL;
  if ( v8 != v9 )
  {
    for ( i = (_QWORD *)(a1 + 8 * v6); (unsigned __int64)i < v9; ++i )
    {
      if ( *i )
      {
        v7 = 1;
        break;
      }
    }
  }
  SystemArgument1 = (const void **)stru_140E2D2D0.SchedulerApc.SystemArgument1;
  v12 = (unsigned __int64)(v6 + 15) >> 4;
  v13 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v8 + 4088) & 0xFFFFFFFFFFFFF000uLL;
  if ( stru_140E2D2D0.SchedulerApc.SystemArgument1 )
  {
    v15 = *((_DWORD *)stru_140E2D2D0.SchedulerApc.SystemArgument1 + 4);
    v16 = ((a1 - *((_QWORD *)stru_140E2D2D0.SchedulerApc.SystemArgument1 + 1)) >> 3) / 16;
    if ( (int)v12 + (int)v16 <= v15 )
    {
      RtlSetBits((PRTL_BITMAP)stru_140E2D2D0.SchedulerApc.SystemArgument1 + 1, v16, v12);
      if ( v7 )
        *((_DWORD *)SystemArgument1 + 9) |= 2u;
      return 1LL;
    }
    if ( (unsigned int)v16 < v15 )
      v13 = *((_QWORD *)stru_140E2D2D0.SchedulerApc.SystemArgument1 + 1);
    else
      SystemArgument1 = 0LL;
  }
  v18 = (unsigned int)((__int64)(v14 - v13) >> 3) >> 4;
  result = ExAllocatePoolMm(
             64LL,
             (v18 >> 3) + 56,
             1883532621,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v19 = (_RTL_BITMAP *)result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = v18;
    *(_QWORD *)(result + 24) = result + 56;
    if ( SystemArgument1 )
    {
      memmove((void *)(result + 56), SystemArgument1[3], (unsigned __int64)*((unsigned int *)SystemArgument1 + 4) >> 3);
      stru_140E2D2D0.SchedulerApc.SystemArgument1 = (PVOID)*SystemArgument1;
      ExFreePoolWithTag(SystemArgument1, 0);
    }
    RtlSetBits(v19 + 1, (unsigned int)((__int64)(a1 - v13) >> 3) >> 4, v12);
    v19->Buffer = (unsigned int *)v13;
    if ( v7 )
      *(&v19[2].SizeOfBitMap + 1) |= 2u;
    *(_QWORD *)&v19->SizeOfBitMap = stru_140E2D2D0.SchedulerApc.SystemArgument1;
    result = 1LL;
    stru_140E2D2D0.SchedulerApc.SystemArgument1 = v19;
  }
  return result;
}
