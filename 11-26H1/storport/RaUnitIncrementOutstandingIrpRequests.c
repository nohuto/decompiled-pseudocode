/*
 * XREFs of RaUnitIncrementOutstandingIrpRequests @ 0x14002134C
 * Callers:
 *     RaUnitIoIrp @ 0x140021230 (RaUnitIoIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x140021C30 (RaUnitCheckRemoveState.c)
 *     RaUnitDecrementOutstandingIrpRequests @ 0x140022CA0 (RaUnitDecrementOutstandingIrpRequests.c)
 */

__int64 __fastcall RaUnitIncrementOutstandingIrpRequests(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  signed __int32 **v6; // r8
  __int64 v7; // r15
  signed __int32 **v8; // rsi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // eax
  int v13; // edi
  signed __int32 *v15; // rdx
  signed __int32 v16; // ett
  KIRQL v17; // r8
  signed __int32 v18; // eax
  __int64 v19; // rcx
  signed __int32 v20; // r12d
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // esi
  KIRQL v27; // r9
  __int64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  IRP *v35; // rcx
  __int128 v36; // [rsp+20h] [rbp-10h] BYREF

  v3 = a3;
  v4 = a3;
  v6 = (signed __int32 **)(a1 + 32);
  v7 = v3 << 6;
  v8 = (signed __int32 **)(a1 + 32);
  v36 = 0LL;
  while ( 2 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + v7 + 4);
    while ( (v10 & 1) == 0 && (v10 || ((*v8)[20] & 1) == 0) )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + v7 + 4), v10 + 2, v10);
      if ( v11 == v10 )
      {
LABEL_9:
        v13 = RaUnitCheckRemoveState(a1, a2);
        if ( v13 < 0 )
          RaUnitDecrementOutstandingIrpRequests(a1, (unsigned int)v4);
        return (unsigned int)v13;
      }
      v8 = v6;
    }
    v12 = **v8;
    while ( 1 )
    {
      v15 = *v8;
      if ( (v12 & 1) != 0 )
        break;
      v16 = v12;
      v12 = _InterlockedCompareExchange(v15, v12 + 4, v12);
      if ( v16 == v12 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) & 1) != 0 )
          _InterlockedAdd((volatile signed __int32 *)((v4 << 6) + *(_QWORD *)(a1 + 40) + 4), 2u);
        goto LABEL_9;
      }
    }
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 + 3);
    v18 = _InterlockedCompareExchange(*(volatile signed __int32 **)(a1 + 32), 3, 1);
    v19 = *(_QWORD *)(a1 + 32);
    v20 = v18;
    if ( (v18 & 1) == 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 24), v17);
      v6 = (signed __int32 **)(a1 + 32);
      continue;
    }
    break;
  }
  v21 = *(_QWORD **)(v19 + 40);
  v22 = (_QWORD *)(a2 + 168);
  v23 = v19 + 32;
  if ( *v21 != v23 )
LABEL_34:
    __fastfail(3u);
  *v22 = v23;
  *(_QWORD *)(a2 + 176) = v21;
  *v21 = v22;
  *(_QWORD *)(v23 + 8) = v22;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v17);
  if ( v20 == 1 )
  {
    v24 = RaUnitAcquireRemoveLock(a1, a2, 1);
    v25 = *(_QWORD *)(a1 + 32);
    v26 = v24;
    if ( v24 < 0 )
    {
      *((_QWORD *)&v36 + 1) = &v36;
      *(_QWORD *)&v36 = &v36;
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 24));
      _InterlockedExchange(*(volatile __int32 **)(a1 + 32), 1);
      while ( 1 )
      {
        v28 = *(_QWORD *)(a1 + 32);
        v29 = (_QWORD *)(v28 + 32);
        v30 = *(_QWORD **)(v28 + 32);
        if ( v30 == (_QWORD *)(v28 + 32) )
          break;
        if ( (_QWORD *)v30[1] != v29 )
          goto LABEL_34;
        v31 = *v30;
        if ( *(_QWORD **)(*v30 + 8LL) != v30 )
          goto LABEL_34;
        *v29 = v31;
        *(_QWORD *)(v31 + 8) = v29;
        v32 = (_QWORD *)*((_QWORD *)&v36 + 1);
        if ( **((__int128 ***)&v36 + 1) != &v36 )
          goto LABEL_34;
        v30[1] = *((_QWORD *)&v36 + 1);
        *v30 = &v36;
        *v32 = v30;
        *((_QWORD *)&v36 + 1) = v30;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 24), v27);
      while ( 1 )
      {
        v33 = v36;
        if ( (__int128 *)v36 == &v36 )
          break;
        if ( *(__int128 **)(v36 + 8) != &v36 )
          goto LABEL_34;
        v34 = *(_QWORD *)v36;
        if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != (_QWORD)v36 )
          goto LABEL_34;
        *(_QWORD *)&v36 = *(_QWORD *)v36;
        *(_QWORD *)(v34 + 8) = &v36;
        v35 = (IRP *)(v33 - 168);
        v35->IoStatus.Information = 0LL;
        v35->IoStatus.Status = v26;
        IofCompleteRequest(v35, 0);
      }
    }
    else
    {
      *(_QWORD *)(v25 + 72) = 0LL;
      IoQueueWorkItem(
        *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
        RaAcquirePowerRefWorkRoutine,
        CriticalWorkQueue,
        (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
    }
  }
  return 259LL;
}
