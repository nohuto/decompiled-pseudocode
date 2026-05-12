/*
 * XREFs of RaidUnitAbortSrb @ 0x1400A6B30
 * Callers:
 *     StorTickEventQueue @ 0x1400341D0 (StorTickEventQueue.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 */

__int64 __fastcall RaidUnitAbortSrb(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rsi
  __int64 v6; // rsi
  _WORD *Srb; // rbx
  _QWORD *Pool; // rax
  __int64 v9; // r8
  void *v10; // r14
  __int64 v11; // rcx
  unsigned int LockArray_high; // eax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  PIRP v16; // rax
  IRP *v17; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STATUS_BLOCK v19; // [rsp+20h] [rbp-28h] BYREF

  v19 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v5 = *(_DWORD **)(a1 + 24);
  if ( *v5 == 1314275652 )
  {
    v6 = (__int64)v5 + 274;
  }
  else if ( *v5 == 1094997074 )
  {
    v6 = (__int64)v5 + 482;
  }
  else
  {
    v6 = 98LL;
  }
  Srb = (_WORD *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 16, *(_BYTE *)v6, 0);
  if ( !Srb )
    return 3221225495LL;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 8LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( !Pool )
  {
LABEL_25:
    ExFreePoolWithTag(Srb, 0x72536152u);
    return 3221225495LL;
  }
  *Pool = a2;
  if ( *(_BYTE *)v6 == 1 )
  {
    v11 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 5) = 16;
    *((_BYTE *)Srb + v11 + 8) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)Srb + v11 + 9) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)Srb + v11 + 10) = *(_BYTE *)(a1 + 106);
    *((_DWORD *)Srb + 6) = 524562;
    v9 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v9 == 1094997074 && (*(_BYTE *)(v9 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v9 + 6232) + 8LL * LockArray_high));
      v13 = **(_QWORD **)(*(_QWORD *)(v9 + 6232) + 8LL * LockArray_high);
      *((_DWORD *)Srb + 11) = HIDWORD(v13);
    }
    else
    {
      LODWORD(v13) = -1;
    }
    *((_DWORD *)Srb + 8) = v13;
    v14 = 10;
    *((_QWORD *)Srb + 8) = v10;
    *((_DWORD *)Srb + 15) = 8;
    *((_QWORD *)Srb + 10) = 0LL;
    if ( *(_BYTE *)(a1 + 3368) )
    {
      if ( *(_DWORD *)(a1 + 3388) < 0xAu )
        v14 = *(_DWORD *)(a1 + 3388);
    }
    *((_DWORD *)Srb + 10) = v14;
    Srb[19] = 33;
  }
  else
  {
    *Srb = 88;
    v15 = 10;
    *((_BYTE *)Srb + 2) = 16;
    *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 106);
    *((_DWORD *)Srb + 3) = 524562;
    *((_BYTE *)Srb + 8) = -1;
    *((_QWORD *)Srb + 3) = Pool;
    *((_DWORD *)Srb + 4) = 8;
    *((_QWORD *)Srb + 6) = 0LL;
    if ( *(_BYTE *)(a1 + 3368) && *(_DWORD *)(a1 + 3388) < 0xAu )
      v15 = *(_DWORD *)(a1 + 3388);
    *((_DWORD *)Srb + 5) = v15;
    *((_BYTE *)Srb + 9) = 33;
  }
  v16 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v9, &v19);
  v17 = v16;
  if ( !v16 )
  {
    ExFreePoolWithTag(v10, 0x72536152u);
    goto LABEL_25;
  }
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidUnitAbortSrbCompletion;
  CurrentStackLocation[-1].Context = Srb;
  CurrentStackLocation[-1].Control = -32;
  RaUnitAcquireRemoveLock(a1, (__int64)v17, 1);
  v17->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v17);
  return 259LL;
}
