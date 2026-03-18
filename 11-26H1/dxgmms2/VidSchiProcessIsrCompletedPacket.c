/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x14002A3F4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x14002B390 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x14002BDA0 (VidSchiUpdateCurrentIsrFrameTime.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, unsigned int a2, int a3, int *a4)
{
  int v4; // r12d
  unsigned int v5; // ebp
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h]
  unsigned int v20; // [rsp+A8h] [rbp+10h]
  int v21; // [rsp+B0h] [rbp+18h]

  v21 = a3;
  v4 = *a4;
  v5 = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = a2;
  if ( a2 != *(_DWORD *)(a1 + 72) )
  {
    v9 = *(_QWORD *)(a1 + 64);
    while ( 1 )
    {
      if ( (_DWORD)v9 == (_DWORD)v8 )
        return v5;
      v10 = *(unsigned int *)(a1 + 1428);
      v11 = *(_QWORD *)(a1 + 8 * v10 + 1440);
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 88) == 3 || v4 == 9 && *(_DWORD *)(v11 + 104) == (_DWORD)v8 )
        return 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 1428), ((_BYTE)v10 + 1) & 0xF);
      *(_DWORD *)(a1 + 516) = ((unsigned __int8)*(_DWORD *)(a1 + 516) + 1) & 0xF;
      v12 = *(unsigned int *)(a1 + 1572);
      v13 = *(_QWORD *)(a1 + 8 * v12 + 1584);
      v20 = ((_BYTE)v12 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1572), v20);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(v11 + 104);
      v9 = *(_QWORD *)(v11 + 104);
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 64) = v9;
        *(_QWORD *)(a1 + 72) = v9;
        ++*(_QWORD *)(v7 + 496);
      }
      *(_DWORD *)(v11 + 92) ^= ((unsigned __int8)*(_DWORD *)(v11 + 92) ^ (unsigned __int8)((_BYTE)a3 << 6)) & 0x40;
      if ( a3 && v4 != 9 )
        ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 104) + 48LL) + 2848LL);
      *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v11 + 72) = 10;
      if ( *(_QWORD *)(v11 + 56) )
      {
        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)(v11 + 56) + 52LL) = 10;
      }
      *(_DWORD *)(v11 + 16) = 1;
      v18[0] = 0LL;
      v19 = 0LL;
      v18[1] = v13;
      VidSchiUpdateContextRunningTimeAtISR(v18);
      v14 = *(_QWORD *)(a1 + 8LL * v20 + 1584);
      if ( v14 && v14 != v13 )
        *(_QWORD *)(v14 + 472) = *(_QWORD *)(v13 + 472);
      if ( (*(_DWORD *)(v11 + 92) & 0x200) != 0 )
      {
        VidSchiUpdateCurrentIsrFrameTime(
          v7,
          *(_QWORD *)(v7 + 8LL * *(unsigned int *)(*(_QWORD *)(v11 + 56) + 168LL) + 3448),
          0LL);
        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 144LL) = *(_QWORD *)(*(_QWORD *)(v7
                                                                           + 8LL
                                                                           * *(unsigned int *)(*(_QWORD *)(v11 + 56)
                                                                                             + 168LL)
                                                                           + 3448)
                                                               + 44304LL);
        *(_QWORD *)(*(_QWORD *)(v11 + 56) + 136LL) = *(_QWORD *)(*(_QWORD *)(v7
                                                                           + 8LL
                                                                           * *(unsigned int *)(*(_QWORD *)(v11 + 56)
                                                                                             + 168LL)
                                                                           + 3448)
                                                               + 44312LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 3020));
      VidSchiProfilePerformanceTick(8LL, v7, a1, 0LL, 0LL, 0LL, v11, 0LL);
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v7 + 2064), (PSLIST_ENTRY)(v11 + 32));
      a3 = v21;
    }
    if ( !*(_BYTE *)(v7 + 61) )
    {
      v16 = *(_QWORD *)(v7 + 16);
      v17 = *(unsigned int *)(a1 + 152);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 1LL, v8, v17, v16);
      WdLogGlobalForLineNumber = 916;
      JUMPOUT(0x14002A6C9LL);
    }
    *(_DWORD *)(a1 + 2152) = 1;
    *(_BYTE *)(a1 + 2145) = 1;
  }
  return 0LL;
}
