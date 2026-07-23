/*
 * XREFs of MiInitializeSystemImageRegion @ 0x140D06CC4
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiInitializeDriverPtes @ 0x140CFAA44 (MiInitializeDriverPtes.c)
 *     MiCreateInitialSystemWsles @ 0x140CFECBC (MiCreateInitialSystemWsles.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 *     MiFreeKernelPadSections @ 0x140D060E4 (MiFreeKernelPadSections.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D06644 (MiInitializeBootLoadedDriverPfns.c)
 *     MxMarkActiveDriverBits @ 0x140D076E8 (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeSystemImageRegion(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  struct _KTHREAD *Thread; // rsi
  _QWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 PoolMm; // rax
  char v15; // [rsp+30h] [rbp-68h] BYREF
  char v16; // [rsp+38h] [rbp-60h] BYREF

  v1 = qword_140E37E00;
  v3 = qword_140E37E08;
  if ( !(unsigned int)MiInitializeDynamicRegion(11) )
    return 0LL;
  v4 = v1 + v3 - 1;
  v5 = (unsigned __int64 *)&v16;
  v6 = 4LL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v1;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&stru_140E2DAB0.WaitBlockFill11[64], v1, v4, (unsigned int)&v15, 3);
  Thread = stru_140E2DAB0.WaitBlock[1].Thread;
  v8 = (_QWORD *)((((unsigned __int64)stru_140E2DAB0.WaitBlock[1].Thread >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < *(_QWORD *)&stru_140E2DAB0.WaitBlockFill11[64]; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(4LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&stru_140E2DAB0.WaitBlockFill11[64], i, 0x8000uLL);
    }
    Thread = (struct _KTHREAD *)((char *)Thread + 4096);
    ++v8;
  }
  *(_QWORD *)&stru_140E2DAB0.WaitBlockFill11[64] = i;
  stru_140E2D2D0.SchedulerApc.NormalContext = 0LL;
  v10 = 0LL;
  stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Flink = 0LL;
  while ( !(_DWORD)v10 )
  {
    v11 = *((_QWORD *)&MiState + v10 + 463);
    v12 = (*(_DWORD *)(v11 + 64) >> 12) + ((*(_DWORD *)(v11 + 64) & 0xFFF) != 0);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
      v12 = (v12 + 511) & 0xFFFFFE00;
    PoolMm = ExAllocatePoolMm(
               64LL,
               8 * (((v12 & 0x3F) != 0) + (v12 >> 6)),
               538987885,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
      return 0LL;
    v10 = 1LL;
    *((_QWORD *)&MiState + 464) = v12;
    *((_QWORD *)&MiState + 465) = PoolMm;
  }
  if ( !(unsigned int)MiInitializeBootLoadedDriverPfns(a1)
    || !(unsigned int)MiInitializeDriverPtes(a1)
    || !MiCreateInitialSystemWsles() )
  {
    return 0LL;
  }
  MiFreeKernelPadSections(
    *((_QWORD **)stru_140E2D2D0.SchedulerApc.Reserved[0] + 6),
    *((_QWORD *)stru_140E2D2D0.SchedulerApc.Reserved[0] + 6) + *((_DWORD *)stru_140E2D2D0.SchedulerApc.Reserved[0] + 16));
  return 1LL;
}
