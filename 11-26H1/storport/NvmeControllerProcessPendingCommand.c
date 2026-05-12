/*
 * XREFs of NvmeControllerProcessPendingCommand @ 0x14003F6A0
 * Callers:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     StorRefillShadowQueue @ 0x14011E660 (StorRefillShadowQueue.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeControllerSendNonReadWriteCommand @ 0x14004CB10 (NvmeControllerSendNonReadWriteCommand.c)
 */

bool __fastcall NvmeControllerProcessPendingCommand(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  _DWORD *v5; // r14
  __int64 v6; // rbx
  __int64 v8; // r12
  __int64 i; // rdi
  unsigned int v11; // eax
  __int64 v13; // r13
  __int64 v14; // r8
  signed __int32 v15; // ecx
  __int64 v16; // r12
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r12d
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // [rsp+80h] [rbp+8h]
  KIRQL v29; // [rsp+88h] [rbp+10h]

  v5 = g_CpuInfo;
  LODWORD(v6) = a2;
  v28 = a4;
  v8 = a4;
  while ( 2 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * (unsigned int)v6 + 24);
          !*(_DWORD *)i && *(_DWORD *)(i + 48) == *(_DWORD *)(i + 52);
          i = *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * v6 + 24) )
    {
      v11 = v6 + 1;
      v6 = 0LL;
      if ( v11 < v5[2] )
        v6 = v11;
      if ( a2 == (_DWORD)v6 )
        return v8 == 0;
    }
    v13 = 0LL;
    v29 = KfRaiseIrql(2u);
    do
    {
      v14 = *(unsigned int *)(i + 52);
      if ( (_DWORD)v14 == *(_DWORD *)(i + 48) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)i, 0, 1) == 1 )
        {
          v26 = *(_QWORD *)(i + 24);
          if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL) == 1 )
            _InterlockedDecrement((volatile signed __int32 *)(v26 + 956));
          else
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 16) + 952LL));
        }
        KeLowerIrql(v29);
        goto LABEL_56;
      }
      v15 = 0;
      if ( (unsigned int)(v14 + 1) < *(_DWORD *)(*(_QWORD *)(i + 16) + 4LL) )
        v15 = v14 + 1;
    }
    while ( (_DWORD)v14 != _InterlockedCompareExchange((volatile signed __int32 *)(i + 52), v15, v14) );
    do
      v16 = _InterlockedExchange64((volatile __int64 *)(8 * v14 + *(_QWORD *)(i + 56)), 0LL);
    while ( !v16 );
    if ( !*(_DWORD *)(*(_QWORD *)(i + 16) + 16LL)
      && (*(_DWORD *)i == 2 || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(i + 32) + 16LL * *(unsigned int *)(i + 8)))) )
    {
      if ( *(_DWORD *)(i + 48) == *(_DWORD *)(i + 52)
        || ((v17 = *(_DWORD *)(i + 48), v18 = *(_DWORD *)(i + 52), v17 != v18)
          ? (v17 <= v18
           ? ((v20 = *(_QWORD *)(i + 24), *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL))
            ? (v21 = *(_QWORD *)(v20 + 1024))
            : (v21 = *(_QWORD *)(v20 + 256)),
              v19 = *(_DWORD *)(v21 + 4) - v18 + v17)
           : (v19 = v17 - v18))
          : (v19 = 0),
            v19 <= *(_DWORD *)(*(_QWORD *)(i + 16) + 8LL)) )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i + 16) + 16LL), 1, 0) )
        {
          v22 = *(_QWORD *)(i + 24);
          if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL) )
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(v22 + 1032),
              NvmeControllerRefillShadowQueueRoutine,
              DelayedWorkQueue,
              *(PVOID *)(i + 24));
          else
            KeSetEvent((PRKEVENT)(v22 + 472), 0, 0);
        }
      }
    }
    KeLowerIrql(v29);
    if ( (*(_BYTE *)(*(_QWORD *)(i + 24) + 136LL) & 2) != 0 )
    {
      v8 = v28;
    }
    else
    {
      if ( v28 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v16 + 4256LL) & 1) != 0 )
        {
          if ( a5 )
            v13 = v28;
        }
        else if ( !a5 )
        {
          v13 = v28;
        }
      }
      v23 = *(_DWORD *)(*(_QWORD *)v16 + 4256LL) & 1;
      v24 = NvmeControllerSendNonReadWriteCommand(*(PVOID *)(i + 24), v13);
      if ( v24 == 259 )
      {
        v25 = v28;
        if ( v13 )
          v25 = 0LL;
        v28 = v25;
      }
      if ( !(_BYTE)v23 )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(i + 24) + 960LL));
      v8 = v28;
      if ( v24 == 259 )
        goto LABEL_59;
      if ( v24 == -2147483631 )
        return v8 == 0;
      if ( v24 != -2147483622 )
        goto LABEL_59;
    }
LABEL_56:
    v27 = v6 + 1;
    LODWORD(v6) = 0;
    if ( v27 < v5[2] )
      LODWORD(v6) = v27;
    if ( a2 == (_DWORD)v6 )
      return v8 == 0;
LABEL_59:
    if ( !StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
      continue;
    return v8 == 0;
  }
}
