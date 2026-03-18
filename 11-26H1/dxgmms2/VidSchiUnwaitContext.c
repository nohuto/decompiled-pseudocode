/*
 * XREFs of VidSchiUnwaitContext @ 0x14001FB00
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiDelayReadyRoutine @ 0x140041100 (VidSchiDelayReadyRoutine.c)
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x14004764C (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v2; // si
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 192) & 0x100) != 0 )
    return v2;
  if ( (*(_DWORD *)(a1 + 192) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 192) & 2) != 0 )
      return v2;
    v7 = 10LL;
    v8 = 25297LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 672) == a1 + 672 )
  {
    v7 = 0LL;
    v8 = 25314LL;
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(a1 + 788) )
  {
    v7 = 1LL;
    v8 = 25380LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, v7, v8);
    return v2;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x20) != 0 )
  {
    v8 = a2;
    v7 = 4LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x80u) != 0 )
  {
    v8 = a2;
    v7 = 8LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x10) != 0 )
  {
    v8 = a2;
    v7 = 3LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x40) != 0 )
  {
    v8 = a2;
    v7 = 7LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 192) & 8) != 0 )
  {
    v8 = a2;
    v7 = 2LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 192) & 1) == 0 && (*(_DWORD *)(a1 + 192) & 0x100) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 444), 0, 0) == 2 )
    {
      v5 = *(_QWORD *)(a1 + 96);
      v9 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v5 + 24) + 32LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v5 + 24) + 40LL),
        &v9);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, 5LL, a2) != 0;
  }
  return v2;
}
