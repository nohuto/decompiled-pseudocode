/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x1404CBC6C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1409B7010 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404CC23C (PipRestoreDevNodeState.c)
 *     PipIsProblemReadonly @ 0x1407A7F2C (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x1407B0404 (PpProfileCommitTransitioningDock.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PnpDeleteAllDependencyRelations @ 0x1409B0B74 (PnpDeleteAllDependencyRelations.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpDisableDeviceInterfaces @ 0x1409B7A10 (PnpDisableDeviceInterfaces.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B2C010 (PiDmaGuardProcessPostRemove.c)
 *     PnpUnloadAttachedDriver @ 0x140B2CD98 (PnpUnloadAttachedDriver.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140B48194 (PpHotSwapInitRemovalPolicy.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  int v6; // r14d
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 result; // rax
  _QWORD *Pool2; // rsi
  _BYTE *v11; // r12
  KIRQL v12; // r8
  __int64 *v13; // rdx
  _DWORD *v14; // rdi
  PVOID *v15; // r14
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // rdi
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  __int64 i; // rcx
  __int64 v27; // rax
  KIRQL v28; // al
  int v29; // eax
  __int64 *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v32 = v3;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(__int64 **)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v29 = *((_DWORD *)v8 + 99);
      v30 = (__int64 *)*v8;
      if ( (v29 & 0x10) != 0 )
      {
        v29 &= ~0x10u;
        *((_DWORD *)v8 + 99) = v29;
      }
      if ( v8[52] || v8[68] || (v29 & 0x40) != 0 )
      {
        PipSetDevNodeUserFlags(v8, 512LL);
        IopRemoveDevice((PDEVICE_OBJECT)v8[4]);
        PipClearDevNodeUserFlags(v8, 512LL);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 790LL);
      v8 = v30;
    }
    while ( v30 );
  }
  result = *(unsigned int *)(MaxDataSize + 300);
  if ( (_DWORD)result == 784 || (_DWORD)result == 785 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 787 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
  }
  if ( *(_DWORD *)(MaxDataSize + 300) != 790 )
    JUMPOUT(0x1404CBCF7LL);
  v20 = *(_QWORD *)(v3 + 24);
  while ( v20 )
  {
    v20 = *(_QWORD *)(v20 + 24);
    ++v6;
  }
  Pool2 = 0LL;
  v11 = 0LL;
  if ( v6 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v22 = ExAllocatePool2(0x100uLL);
      v11 = (_BYTE *)v22;
      if ( v22 )
      {
        v23 = *(_QWORD **)(v3 + 24);
        v24 = Pool2;
        v25 = (_QWORD *)v22;
        while ( v23 )
        {
          ObfReferenceObjectWithTag(v23, 0x746C6644u);
          *v24++ = v23;
          *v25++ = v23[1];
          v23 = (_QWORD *)v23[3];
        }
        v3 = v32;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
  }
  v12 = KeAcquireQueuedSpinLock(0xAuLL);
  v13 = Pool2;
  if ( Pool2 )
  {
    for ( i = *Pool2; i; i = *v13 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v27 = *v13++;
      *(_DWORD *)(*(_QWORD *)(v27 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v12);
  v14 = (_DWORD *)(MaxDataSize + 396);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
  {
    v21 = *(_DWORD *)(MaxDataSize + 568);
    if ( v21 != 3 )
    {
      if ( v21 != 4 )
        goto LABEL_10;
      v14 = (_DWORD *)(MaxDataSize + 396);
    }
    PpProfileCommitTransitioningDock(MaxDataSize);
  }
LABEL_10:
  v15 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    if ( *Pool2 )
    {
      do
      {
        v28 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v28);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v15 + v11 - (_BYTE *)Pool2));
        ObfDereferenceObjectWithTag(*v15++, 0x746C6644u);
      }
      while ( *v15 );
    }
    ExFreePoolWithTag(Pool2, 0);
    ExFreePoolWithTag(v11, 0);
    v14 = (_DWORD *)(MaxDataSize + 396);
  }
  v16 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v16);
  v17 = 788LL;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v17 = 790LL;
  PipSetDevNodeState(MaxDataSize, v17);
  if ( a2
    && ((*v14 & 0x6000) == 0
     || ((a2 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(MaxDataSize, a2)
     && !(unsigned int)PipIsProblemReadonly(v31, *(unsigned int *)(MaxDataSize + 404))) )
  {
    PipClearDevNodeProblem(MaxDataSize);
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(MaxDataSize);
  v19 = *(_QWORD *)(MaxDataSize + 48);
  *(_DWORD *)(MaxDataSize + 704) &= ~0x20000u;
  if ( v19 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, v19, 23LL);
  return result;
}
