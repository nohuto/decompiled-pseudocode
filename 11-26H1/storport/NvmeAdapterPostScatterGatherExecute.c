/*
 * XREFs of NvmeAdapterPostScatterGatherExecute @ 0x1400DA750
 * Callers:
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 * Callees:
 *     RaCallMiniportBuildIo @ 0x14002BD80 (RaCallMiniportBuildIo.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  int v3; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rax
  char v7; // bp
  LARGE_INTEGER v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // al
  char v13; // di
  LARGE_INTEGER v14; // rax

  v3 = *(_DWORD *)(a1 + 416) & 0x40;
  *(_QWORD *)(a2 + 216) = a1;
  if ( StorEtwLoggingEnabled && (byte_140173441 & 1) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  }
  if ( !v3 && (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 160);
    if ( v6 )
      *(_BYTE *)(v6 + 141) = -82;
    v7 = RaCallMiniportBuildIo(*(_QWORD *)(a2 + 216) + 168LL);
    if ( StorEtwLoggingEnabled && ((byte_140173441 & 1) != 0 || (byte_140173443 & 2) != 0) )
    {
      if ( UseQPCTime )
        v8 = KeQueryPerformanceCounter(0LL);
      else
        v8.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v8;
    }
    if ( !v7 )
      return 0LL;
  }
  v10 = *(_QWORD *)(a2 + 160);
  if ( v10 )
    *(_BYTE *)(v10 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  if ( v3 )
  {
    v11 = *(_QWORD *)(a2 + 784);
    if ( v11 )
      v11 = *(_QWORD *)(v11 + 1648) + 64LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 536))(
            *(_QWORD *)(a1 + 408) + 16LL,
            v11,
            *(_QWORD *)(a2 + 168));
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 400) + 16LL))(
            *(_QWORD *)(a1 + 408) + 16LL,
            *(_QWORD *)(a2 + 168));
  }
  v13 = v12;
  if ( StorEtwLoggingEnabled && (byte_140173441 & 1) != 0 )
  {
    if ( UseQPCTime )
      v14 = KeQueryPerformanceCounter(0LL);
    else
      v14.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v14;
  }
  return v13 == 0 ? 0xC0000001 : 0;
}
