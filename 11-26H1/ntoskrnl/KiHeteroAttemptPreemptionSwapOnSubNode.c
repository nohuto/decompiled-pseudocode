/*
 * XREFs of KiHeteroAttemptPreemptionSwapOnSubNode @ 0x140236B50
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiFindBiasedProcessorIndex @ 0x140201890 (KiFindBiasedProcessorIndex.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402309E0 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140236D78 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140409AA4 (KiEvaluatePreemptionSwapTarget.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiHeteroAttemptPreemptionSwapOnSubNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // r8
  __int64 v20; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  char v25; // cl
  unsigned __int64 v26[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v27[64]; // [rsp+40h] [rbp-88h] BYREF

  v7 = *(unsigned __int16 *)(a1 + 136);
  v8 = 0;
  v26[0] = 0LL;
  if ( (unsigned __int16)v7 >= *a4 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&a4[4 * v7 + 4];
  if ( (v12 & *(_QWORD *)(a1 + 128)) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 192);
    v14 = *(_QWORD *)(v13
                    + 24LL
                    * (*(unsigned __int8 *)(a5 + 16)
                     + (unsigned int)*(unsigned __int8 *)(a1 + 185) * (*(_DWORD *)(a5 + 8) + 2 * *(_DWORD *)(a5 + 4)))
                    + 16);
    v15 = v12 & *(_QWORD *)(v13
                          + 24LL
                          * (*(unsigned __int8 *)(a5 + 16)
                           + (unsigned int)*(unsigned __int8 *)(a1 + 185)
                           * (*(_DWORD *)(a5 + 8) + 2 * *(_DWORD *)(a5 + 4)))
                          + 8) & v14;
    v16 = v12 & v14;
    if ( v16 )
    {
      if ( !v15 )
        v15 = v16;
    }
    else
    {
      v15 = v12 & *(_QWORD *)(a1 + 128);
    }
    v17 = v15 & ~*(_QWORD *)(a1 + 16);
    if ( a6 > 0 && (*(_BYTE *)(a1 + 184) & 2) != 0 )
    {
      memset_0(v27, 0, sizeof(v27));
      RtlCopyVolatileMemory(v27, (const void *)(a1 + 512), 0x40uLL);
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      do
      {
        if ( _bittest64((const __int64 *)&v17, v19) && v27[v20] == 1 )
          v18 |= 1LL << v20;
        ++v19;
        ++v20;
      }
      while ( v19 < 0x40u );
      v17 = v18;
    }
    if ( v17 )
    {
      v22 = *(_QWORD *)(a2 + 192) == a1 && (v17 & *(_QWORD *)(a2 + 36480)) != 0
          ? a2
          : KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                             *(unsigned __int16 *)(a1 + 136),
                                             *(unsigned __int8 *)(a2 + 209),
                                             v17)];
      v23 = KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v22 + 36488), a2, a3, v17, a5);
      v24 = v23;
      if ( v23 )
      {
        KiAcquirePrcbLocksForPreemptionAttempt(v23, *(_DWORD *)(a5 + 20), v26);
        if ( (unsigned __int8)KiEvaluatePreemptionSwapTarget(v24, a3, a5) )
        {
          *(_QWORD *)a7 = v26[0];
          v25 = ~*(_BYTE *)(v24 + 35);
          *(_DWORD *)(a7 + 12) = 1;
          *(_DWORD *)(a7 + 8) = v25 & 1;
          return v8;
        }
        KiReleasePrcbLocksForIsolationUnit(v26);
      }
    }
  }
  return (unsigned int)-1073741823;
}
