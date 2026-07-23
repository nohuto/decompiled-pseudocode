/*
 * XREFs of IopCallDriverReference @ 0x140264810
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopCallDriverReference(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rax
  int v10; // r8d
  struct _KTHREAD *CurrentThread; // rdx
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // ecx
  ULONG Flags; // edx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebp
  signed __int64 v19; // rbx
  bool v20; // cc
  signed __int64 BugCheckParameter4; // rbx
  struct _KTHREAD *v23; // rax
  struct _LIST_ENTRY *Flink; // rbx
  int v25; // ecx
  PETHREAD v26; // rax
  PETHREAD Thread; // rcx
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF

  if ( !a3 )
    ObfReferenceObjectWithTag(a4, 0x746C6644u);
  v9 = a4[26];
  v10 = 2;
  if ( v9 && (v25 = *(_DWORD *)(v9 + 88)) != 0 )
  {
    Irp->Flags = (v25 << 17) | Irp->Flags & 0xFFF1FFFF;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v13 = CurrentThread->Process[1].Padding[3];
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 1084);
      if ( v12 >= v14 )
        v12 = v14;
    }
    if ( v12 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      v12 = 2;
    Irp->Flags = ((v12 + 1) << 17) | Irp->Flags & 0xFFF1FFFF;
  }
  Flags = Irp->Flags;
  v16 = (Flags >> 17) & 7;
  if ( !v16
    || (v10 = v16 - 1, v16 - 1 >= 2)
    || (v26 = Irp->Tail.Overlay.Thread) == 0LL
    || !LODWORD(v26[1].Timer.TimerListEntry.Flink) )
  {
    if ( v10 < 2 )
    {
      if ( Irp->RequestorMode
        || (Thread = Irp->Tail.Overlay.Thread) != 0LL
        && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
      {
        if ( a5 )
        {
          if ( a5 == 1 )
            ++IopPerfIoTrackingLock.SchedulerAssistYieldCounter;
        }
        else
        {
          ++HIDWORD(IopPerfIoTrackingLock.KcsanThread);
        }
      }
      else
      {
        ++IopPerfIoTrackingLock.SchedulerAssistYieldBoostCount;
        Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      }
    }
  }
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v17 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v17 & 2) != 0 )
  {
    v28 = 0LL;
    v28 = *(_OWORD *)(v17 + 24);
    v23 = KeGetCurrentThread();
    Flink = v23[1].WaitBlock[1].WaitListEntry.Flink;
    v23[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v28;
    v18 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  }
  else
  {
    v18 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(a4 - 6, 0xFFFFFFFFLL, 1953261124LL);
    v19 = _InterlockedExchangeAdd64(a4 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v20 = v19 <= 1;
    BugCheckParameter4 = v19 - 1;
    if ( v20 )
    {
      if ( *(a4 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)a4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a4 - 48) >> 8)],
          (ULONG_PTR)a4,
          3uLL,
          *(a4 - 5));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)a4, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(a4 - 6);
    }
  }
  return v18;
}
