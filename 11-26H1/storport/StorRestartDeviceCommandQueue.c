/*
 * XREFs of StorRestartDeviceCommandQueue @ 0x14003BC0C
 * Callers:
 *     NvmeAdapterActiveCondition @ 0x14003B9C0 (NvmeAdapterActiveCondition.c)
 *     NvmeControllerRestart @ 0x1400FA9B4 (NvmeControllerRestart.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeControllerSendNonReadWriteCommand @ 0x14004CB10 (NvmeControllerSendNonReadWriteCommand.c)
 */

void __fastcall StorRestartDeviceCommandQueue(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebp
  __int64 v3; // rdx
  _DWORD *v4; // r13
  __int64 v5; // rsi
  __int64 i; // rdi
  KIRQL v7; // bl
  __int64 v8; // r8
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // eax
  bool v18; // al
  __int64 v19; // [rsp+78h] [rbp+10h]
  _DWORD *v20; // [rsp+80h] [rbp+18h]

  v1 = 0LL;
  v20 = g_CpuInfo;
  if ( *(_DWORD *)a1 )
    return;
  if ( *(_BYTE *)(a1 + 20) != 1 )
    return;
  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v19 = v3;
  if ( !*((_DWORD *)g_CpuInfo + 3) )
    return;
  do
  {
    v4 = g_CpuInfo;
    LODWORD(v5) = v2;
    while ( 1 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(v3 + 1024) + 8LL * (unsigned int)v5 + 24);
            !*(_DWORD *)i && *(_DWORD *)(i + 48) == *(_DWORD *)(i + 52);
            i = *(_QWORD *)(*(_QWORD *)(v3 + 1024) + 8 * v5 + 24) )
      {
        v5 = ((_DWORD)v5 + 1) & (unsigned int)-((unsigned int)(v5 + 1) < v4[2]);
        if ( v2 == (_DWORD)v5 )
          goto LABEL_10;
      }
      v7 = KfRaiseIrql(2u);
      while ( 1 )
      {
        v8 = *(unsigned int *)(i + 52);
        if ( (_DWORD)v8 == *(_DWORD *)(i + 48) )
          break;
        if ( (_DWORD)v8 == _InterlockedCompareExchange(
                             (volatile signed __int32 *)(i + 52),
                             (unsigned int)(v8 + 1) < *(_DWORD *)(*(_QWORD *)(i + 16) + 4LL) ? v8 + 1 : 0,
                             v8) )
        {
          do
            v1 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(i + 56) + 8 * v8), v1);
          while ( !v1 );
          if ( !*(_DWORD *)(*(_QWORD *)(i + 16) + 16LL)
            && (*(_DWORD *)i == 2
             || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(i + 32) + 16LL * *(unsigned int *)(i + 8)))) )
          {
            if ( *(_DWORD *)(i + 48) == *(_DWORD *)(i + 52)
              || ((v9 = *(_DWORD *)(i + 48), v10 = *(_DWORD *)(i + 52), v9 != v10)
                ? (v9 <= v10
                 ? ((v12 = *(_QWORD *)(i + 24), *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL))
                  ? (v13 = *(_QWORD *)(v12 + 1024))
                  : (v13 = *(_QWORD *)(v12 + 256)),
                    v11 = *(_DWORD *)(v13 + 4) - v10 + v9)
                 : (v11 = v9 - v10))
                : (v11 = 0),
                  v11 <= *(_DWORD *)(*(_QWORD *)(i + 16) + 8LL)) )
            {
              if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i + 16) + 16LL), 1, 0) )
              {
                v14 = *(_QWORD *)(i + 24);
                if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL) )
                  IoQueueWorkItem(
                    *(PIO_WORKITEM *)(v14 + 1032),
                    NvmeControllerRefillShadowQueueRoutine,
                    DelayedWorkQueue,
                    *(PVOID *)(i + 24));
                else
                  KeSetEvent((PRKEVENT)(v14 + 472), 0, 0);
              }
            }
          }
          goto LABEL_37;
        }
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)i, 0, 1) == 1 )
      {
        v15 = *(_QWORD *)(i + 24);
        if ( *(_BYTE *)(*(_QWORD *)(i + 16) + 20LL) == 1 )
          _InterlockedDecrement((volatile signed __int32 *)(v15 + 956));
        else
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 16) + 952LL));
      }
LABEL_37:
      KeLowerIrql(v7);
      if ( !v1 || (*(_BYTE *)(*(_QWORD *)(i + 24) + 136LL) & 2) != 0 )
        break;
      v16 = *(_DWORD *)(*(_QWORD *)v1 + 4256LL) & 1;
      v17 = NvmeControllerSendNonReadWriteCommand(*(PVOID *)(i + 24), 0LL);
      v1 = 0LL;
      if ( !(_BYTE)v16 )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(i + 24) + 960LL));
      if ( v17 != 259 )
      {
        if ( v17 == -2147483631 )
          goto LABEL_49;
        if ( v17 == -2147483622 )
          goto LABEL_46;
      }
LABEL_47:
      v18 = StorCheckDpcWatchdogTimerExpire(0xAu, 5u);
      v3 = v19;
      if ( v18 )
        goto LABEL_10;
    }
    v1 = 0LL;
LABEL_46:
    LODWORD(v5) = (unsigned int)(v5 + 1) < v4[2] ? v5 + 1 : 0;
    if ( v2 != (_DWORD)v5 )
      goto LABEL_47;
LABEL_49:
    v3 = v19;
LABEL_10:
    ++v2;
  }
  while ( v2 < v20[3] );
}
