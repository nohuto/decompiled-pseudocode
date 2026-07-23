/*
 * XREFs of HalpTscAdvSynchToLeader @ 0x1404BE28C
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140585B70 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x1404BE4E0 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x140586730 (HalpTscTraceProcessorSynchronization.c)
 */

__int64 __fastcall HalpTscAdvSynchToLeader(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // r15
  unsigned int v4; // r12d
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = a1;
  if ( !HalpTscAdjustAvailable )
  {
    *(_QWORD *)(((unsigned __int64)a1 << 7) + TscRequest + 8) = 0LL;
    _InterlockedOr(v15, 0);
    _InterlockedExchange((volatile __int32 *)(((unsigned __int64)a1 << 7) + TscRequest), 1);
    while ( *(_DWORD *)(((unsigned __int64)a1 << 7) + TscRequest) == 1 )
      _mm_pause();
  }
  v2 = HalpTscAdvSynchCalculateRemoteDelta(a1, 0LL);
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !HalpTscAdjustAvailable )
  {
    v4 = 0;
    if ( HalpTscSyncRecalculateSkews )
    {
      v5 = v1 << 7;
      do
      {
        v6 = TscRequest;
        *(_QWORD *)(v5 + TscRequest + 8) = 0LL;
        *(_DWORD *)(v5 + v6 + 4) = 100;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v5 + TscRequest), 2);
        while ( *(_DWORD *)(v5 + TscRequest) == 2 )
          _mm_pause();
        v7 = HalpTscAdvSynchCalculateRemoteDelta((unsigned int)v1, 0LL);
        v8 = v2 - v7;
        v2 = v7;
        if ( v8 / 100 < v3 )
          v3 = v8 / 100;
        ++v4;
      }
      while ( v4 < HalpTscSyncRecalculateSkews );
    }
    *(_DWORD *)(HalpTscSkewOffset + 4 * v1) = v3;
  }
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  do
  {
    if ( !v9 )
    {
      v14 = v1 << 7;
      if ( HalpTscAdjustAvailable )
      {
        v10 = -v2;
        *(_QWORD *)(v14 + TscRequest + 8) = -v2;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v14 + TscRequest), 3);
        while ( *(_DWORD *)(v14 + TscRequest) == 3 )
          _mm_pause();
      }
      else
      {
        LODWORD(v10) = v3 - v2;
        *(_QWORD *)(v14 + TscRequest + 8) = v3 - v2;
        _InterlockedOr(v15, 0);
        _InterlockedExchange((volatile __int32 *)(v14 + TscRequest), 1);
        while ( *(_DWORD *)(v14 + TscRequest) == 1 )
          _mm_pause();
      }
    }
    v12 = HalpTscAdvSynchCalculateRemoteDelta((unsigned int)v1, 0LL);
    v2 = v12;
    if ( !v9 )
      HalpTscTraceProcessorSynchronization(KeGetCurrentPrcb()->Number, v1, v12, v10, v11);
    if ( (unsigned __int64)(v2 + 24) <= 0x30 )
      ++v9;
    else
      v9 = 0;
    ++v11;
  }
  while ( v11 < 0x32 && v9 < 2 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4 * v1) = v11;
  return result;
}
