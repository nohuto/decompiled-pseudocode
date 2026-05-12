/*
 * XREFs of StorRefillShadowQueue @ 0x14011E660
 * Callers:
 *     NvmeControllerRefillShadowQueueRoutine @ 0x1400F9790 (NvmeControllerRefillShadowQueueRoutine.c)
 *     NvmeNamespaceSystemThread @ 0x14011B1F0 (NvmeNamespaceSystemThread.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     StorPopRequestFromDeviceQueue @ 0x14011E470 (StorPopRequestFromDeviceQueue.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeControllerProcessPendingCommand @ 0x14003F6A0 (NvmeControllerProcessPendingCommand.c)
 */

__int64 __fastcall StorRefillShadowQueue(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  __int64 v5; // r15
  ULONG_PTR v6; // rbx
  signed __int64 *v8; // rsi
  KIRQL v9; // bp
  signed __int64 v10; // r14
  __int64 v11; // r8
  signed __int32 v12; // r9d
  __int64 v13; // rdx
  KIRQL v14; // cl
  _DWORD *v15; // rsi
  unsigned int v16; // r12d
  __int64 v17; // r14
  signed __int32 v18; // eax
  signed __int32 v19; // edx
  signed __int64 *v20; // rsi
  PSLIST_ENTRY v21; // rax
  struct _SLIST_ENTRY *Next; // rcx
  KIRQL v23; // r14
  signed __int64 v24; // rbp
  __int64 v25; // r8
  signed __int32 v26; // r9d
  __int64 v27; // rdx
  char v28; // dl
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // r8
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rdx
  signed __int32 v38[8]; // [rsp+0h] [rbp-78h] BYREF
  _DWORD *v41; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 24);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 68), 1, 0) )
    return 3LL;
  v8 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(v6 + 40), 0LL);
  v9 = KfRaiseIrql(2u);
  while ( v8 )
  {
    v10 = *v8;
    do
    {
      v11 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v3 + 24) + 48LL);
      v12 = (unsigned int)(v11 + 1) < *(_DWORD *)(a1 + 4) ? v11 + 1 : 0;
      v13 = *(_QWORD *)(a1 + 8 * v3 + 24);
      if ( v12 == *(_DWORD *)(v13 + 52) )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v13, 2, 1);
        _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), (signed __int64)v8, 0LL);
        KeLowerIrql(v9);
        goto LABEL_33;
      }
    }
    while ( (_DWORD)v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 48), v12, v11) );
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v3 + 24) + 56LL) + 8 * v11),
              (signed __int64)(v8 - 16),
              0LL) )
      ;
    v8 = (signed __int64 *)v10;
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v10, 0LL);
      v14 = v9;
      goto LABEL_11;
    }
  }
  KeLowerIrql(v9);
  v15 = (_DWORD *)(v6 + 12);
  while ( 2 )
  {
    v16 = *(_DWORD *)(v6 + 8);
    v17 = 16LL * v16;
    v41 = v15;
    if ( ExQueryDepthSList((PSLIST_HEADER)(v17 + *(_QWORD *)(v6 + 32))) )
    {
      v18 = *(_DWORD *)(v6 + 4);
      if ( v18 == v16 )
      {
        v19 = (unsigned int)(v18 + 1) < *v15 ? v18 + 1 : 0;
        if ( v19 == v16 )
          KeBugCheckEx(0x176u, 1uLL, v6, *(_QWORD *)(v6 + 24), 0LL);
        _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4), v19, v18);
      }
      _InterlockedOr(v38, 0);
      while ( *(_DWORD *)(v6 + 64) )
        ;
      _InterlockedOr(v38, 0);
      v20 = 0LL;
      v21 = ExpInterlockedFlushSList((PSLIST_HEADER)(v17 + *(_QWORD *)(v6 + 32)));
      if ( v21 )
      {
        do
        {
          Next = v21->Next;
          v21->Next = (_SLIST_ENTRY *)v20;
          v20 = (signed __int64 *)v21;
          v21 = Next;
        }
        while ( Next );
      }
      v23 = KfRaiseIrql(2u);
      while ( v20 )
      {
        v24 = *v20;
        do
        {
          v25 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v5 + 24) + 48LL);
          v26 = (unsigned int)(v25 + 1) < *(_DWORD *)(a1 + 4) ? v25 + 1 : 0;
          v27 = *(_QWORD *)(a1 + 8 * v5 + 24);
          if ( v26 == *(_DWORD *)(v27 + 52) )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v27, 2, 1);
            _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), (signed __int64)v20, 0LL);
            goto LABEL_31;
          }
        }
        while ( (_DWORD)v25 != _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 48), v26, v25) );
        while ( _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v5 + 24) + 56LL) + 8 * v25),
                  (signed __int64)(v20 - 16),
                  0LL) )
          ;
        v20 = (signed __int64 *)v24;
        if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
        {
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v24, 0LL);
          v14 = v23;
LABEL_11:
          _InterlockedExchange((volatile __int32 *)(v6 + 68), 0);
          KeLowerIrql(v14);
          return 4LL;
        }
      }
LABEL_31:
      KeLowerIrql(v23);
      v15 = v41;
      *(_DWORD *)(v6 + 8) = v16 + 1 < *v41 ? v16 + 1 : 0;
      if ( !*(_QWORD *)(v6 + 40) )
        continue;
      LODWORD(v3) = a2;
LABEL_33:
      v28 = 0;
    }
    else
    {
      LODWORD(v3) = a2;
      v28 = 1;
    }
    break;
  }
  _InterlockedExchange((volatile __int32 *)(v6 + 68), 0);
  v29 = *(_DWORD *)(v6 + 48);
  v30 = *(_DWORD *)(v6 + 52);
  if ( v29 == v30 )
  {
    v31 = 0;
  }
  else
  {
    v31 = v29 - v30;
    if ( v29 <= v30 )
    {
      v32 = *(_QWORD *)(v6 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 20LL) )
        v33 = *(_QWORD *)(v32 + 1024);
      else
        v33 = *(_QWORD *)(v32 + 256);
      v31 += *(_DWORD *)(v33 + 4);
    }
  }
  if ( v28 )
  {
    if ( *(_DWORD *)v6 == 2 )
    {
      if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)(v6 + 4)
        && !ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v6 + 32) + 16LL * *(unsigned int *)(v6 + 8)))
        && v31 <= *(_DWORD *)(*(_QWORD *)(v6 + 16) + 12LL) )
      {
        *(_BYTE *)(v6 + 72) = 1;
        _InterlockedOr(v38, 0);
        _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 2);
      }
      return 2LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    if ( a3 && v31 )
    {
      v34 = *(_BYTE *)(a1 + 20);
      v35 = *(_QWORD *)(v6 + 24);
      if ( !v34 )
        v35 = *(_QWORD *)(v35 + 16);
      if ( (*(_BYTE *)(v35 + 136) & 2) != 0 )
        v36 = 192 * v5;
      else
        v36 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v35 + 872) + 2 * v5) - 192;
      v37 = *(_QWORD *)(v35 + 728) + v36;
      if ( *(_WORD *)(v37 + 142) == *(_WORD *)(v37 + 140) )
      {
        if ( v34 )
          NvmeControllerProcessPendingCommand(v35, v3, 0LL, 0LL, 0);
        else
          NvmeProcessPendingIo(v35, (union _SLIST_HEADER *)v37, v3);
      }
    }
    return 1LL;
  }
}
