/*
 * XREFs of IopCopyCompleteReadIrp @ 0x14040F120
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
 *     IopCopyCompleteReadRequest @ 0x14040F450 (IopCopyCompleteReadRequest.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall IopCopyCompleteReadIrp(__int64 *a1, __int64 a2, int a3)
{
  char v3; // di
  __int64 v4; // rsi
  ULONG_PTR v6; // rbx
  int v7; // eax
  struct _MDL *v8; // rcx
  __int64 v9; // r12
  char v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r14
  KIRQL v13; // al
  char v14; // al
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned int v17; // ebx
  unsigned __int8 EffectiveIrql; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  KIRQL v29; // al
  struct _KTHREAD *Process; // rdx
  KIRQL v31; // r15
  __int64 v32; // r8
  struct _LIST_ENTRY *Flink; // rax
  int v34; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+A8h] [rbp+10h] BYREF
  int v38; // [rsp+B0h] [rbp+18h]
  char v39; // [rsp+B8h] [rbp+20h]

  v38 = a3;
  v37 = a2;
  v3 = 0;
  v4 = *a1;
  v6 = a2;
  v7 = *(_DWORD *)(*a1 + 48);
  v8 = *(struct _MDL **)(*a1 + 8);
  v9 = *(unsigned int *)(v4 + 56);
  v10 = *(_BYTE *)(v4 + 68);
  v11 = *(_QWORD *)(v4 + 152);
  v12 = *(_QWORD *)(v4 + 112);
  v34 = v7;
  v39 = *(_BYTE *)(v4 + 65);
  if ( v8 )
  {
    IopUnlockAndFreeMdl(v8);
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  if ( v11 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1560));
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 1560), v13);
    v6 = a2;
  }
  if ( (struct _KTHREAD *)v11 != KeGetCurrentThread()
    || KeGetCurrentThread()->SpecialApcDisable
    || (EffectiveIrql = KeGetEffectiveIrql(), v21 = 1LL, EffectiveIrql)
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    if ( !v10 )
    {
      v14 = *(_BYTE *)(v4 + 70);
      *(_BYTE *)(v4 + 120) = 18;
      *(_BYTE *)(v4 + 122) = 88;
      if ( v14 == 2 )
        v14 = *(_BYTE *)(v11 + 586);
      *(_BYTE *)(v4 + 200) = v14;
      *(_QWORD *)(v4 + 128) = v11;
      *(_QWORD *)(v4 + 152) = IopCopyCompleteReadRequest;
      *(_QWORD *)(v4 + 168) = 0LL;
      *(_QWORD *)(v4 + 160) = IopCopyAbortCopyReadRequest;
      *(_WORD *)(v4 + 201) = 0;
      *(_QWORD *)(v4 + 176) = 0LL;
      *(_BYTE *)(v4 + 121) = 0;
      KeInsertQueueApc(v4 + 120, v6, 0LL, a3);
      goto LABEL_10;
    }
  }
  else if ( !v10 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v20) = 1;
      LOBYTE(v21) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v21, v20);
    }
    IopCopyCompleteReadRequest(v4 + 120, 0LL, 0LL, &v37, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    goto LABEL_10;
  }
  v29 = KeAcquireQueuedSpinLock(0xBuLL);
  Process = (struct _KTHREAD *)IopPerfIoTrackingLock.Process;
  v31 = v29;
  while ( Process != (struct _KTHREAD *)&IopPerfIoTrackingLock.Process )
  {
    v32 = *(_QWORD *)&Process->Header.Lock;
    if ( &Process[-1].Padding[1] == (unsigned __int64 *)v4 )
    {
      if ( *(struct _KTHREAD **)(v32 + 8) != Process
        || (Flink = Process->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != Process) )
      {
        __fastfail(3u);
      }
      Flink->Flink = (struct _LIST_ENTRY *)v32;
      *(_QWORD *)(v32 + 8) = Flink;
      Process->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Process;
      *(_QWORD *)&Process->Header.Lock = Process;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
      goto LABEL_43;
    }
    Process = *(struct _KTHREAD **)&Process->Header.Lock;
  }
  if ( !v11 )
  {
LABEL_43:
    KeReleaseQueuedSpinLock(0xBuLL, v31);
    IopDropIrp((PIRP)v4, v6);
    goto LABEL_10;
  }
  KeInitializeApc(
    v4 + 120,
    v11,
    *(char *)(v4 + 70),
    (unsigned int)IopCopyCompleteReadRequest,
    (__int64)IopCopyAbortCopyReadRequest,
    0LL,
    0,
    0LL);
  KeInsertQueueApc(v4 + 120, a2, 0LL, v38);
  KeReleaseQueuedSpinLock(0xBuLL, v31);
LABEL_10:
  if ( v34 < 0 || v10 )
  {
    v23 = *(_QWORD *)(v12 - 48);
    v24 = *(_QWORD *)(v23 + 88);
    if ( (v24 & 1) != 0 )
    {
      *(_BYTE *)(v23 + 71) |= 0x10u;
      *(_QWORD *)(v23 + 88) = v24 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    v25 = v39;
    *(_DWORD *)(*(_QWORD *)(v12 - 48) + 48LL) = v34;
    *(_BYTE *)(*(_QWORD *)(v12 - 48) + 65LL) = v25;
    v26 = *(_QWORD *)(v12 - 48);
    *a1 = v26;
    IopFreeIrpExtension(v26, 9, 1);
  }
  else
  {
    v15 = *(_QWORD *)(v12 - 48);
    v16 = *(_QWORD *)(v15 + 184);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 - 32) + 80LL) & 8) != 0 )
    {
      v27 = *(_DWORD *)(v16 - 64);
      v28 = *(unsigned __int16 *)(*(_QWORD *)(v12 - 40) + 304LL);
      if ( !(_WORD)v28 )
        v28 = 4096;
      v17 = v28 + v27 - 1 - (v28 + v27 - 1) % v28;
      if ( v17 >= v27 )
        v17 = *(_DWORD *)(v16 - 64);
      if ( (unsigned int)v9 < v17 )
        memset_0((void *)(*(_QWORD *)(v15 + 112) + v9), 0, v17 - (unsigned int)v9);
    }
    else
    {
      v17 = v9;
    }
    *(_DWORD *)(v16 - 64) = v17;
    *(_QWORD *)(v12 - 64) = IopQueueCopyWrite;
    *(_QWORD *)(v12 - 56) = v12 - 48;
    *(_QWORD *)(v12 - 80) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v12 - 80), CriticalWorkQueue);
    return 1;
  }
  return v3;
}
