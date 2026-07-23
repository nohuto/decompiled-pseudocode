/*
 * XREFs of IopInitActivityIdIrp @ 0x14047B8F0
 * Callers:
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdIrp @ 0x14047BB00 (IoSetActivityIdIrp.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14047C3A0 (PnpIsSafeToExamineUserModeTeb.c)
 *     IopIsActivityTracingEventEnabled @ 0x1404E5108 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  bool v2; // si
  const GUID *RelatedActivityId; // rbx
  const EVENT_DESCRIPTOR *v4; // rdi
  struct _KTHREAD *CurrentThread; // r15
  char IsActivityTracingEventEnabled; // al
  GUID *Flink; // rdx
  char v8; // cl
  _WORD *v9; // rax
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  GUID Buf2; // [rsp+70h] [rbp-38h] BYREF

  ActivityId = 0LL;
  Buf2 = 0LL;
  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
    {
      IsActivityTracingEventEnabled = IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp);
      Flink = (GUID *)CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
      if ( !IsActivityTracingEventEnabled )
        ActivityId = *Flink;
      v2 = IsActivityTracingEventEnabled == 0;
      RelatedActivityId = (const GUID *)((unsigned __int64)Flink & -(__int64)(IsActivityTracingEventEnabled != 0));
      v4 = (const EVENT_DESCRIPTOR *)((unsigned __int64)&IoTrace_KernelIo_AllocateIrp & -(__int64)(IsActivityTracingEventEnabled != 0));
    }
    else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb() && (*(_BYTE *)(a1 + 71) & 0x21) != 0x21 )
    {
      v8 = 0;
      if ( KeGetPcr()->NtTib.$52D3C1DA33407D154F0BDE5002546D79::$6F04B0361B22895021FCD2048B05DFAB::Self )
      {
        Buf2 = *(GUID *)&KeGetPcr()->NtTib.$52D3C1DA33407D154F0BDE5002546D79::$6F04B0361B22895021FCD2048B05DFAB::Self[105].SubSystemTib;
        v8 = 1;
      }
      if ( v8 && memcmp(&NullGuid, &Buf2, 0x10uLL) )
      {
        if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
        {
          RelatedActivityId = &Buf2;
          v4 = &IoTrace_UserInitiatedIo;
        }
        else
        {
          ActivityId = Buf2;
          v2 = 1;
        }
      }
    }
  }
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v9) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v9 >= 0 )
  {
    v9 = *(_WORD **)(a1 + 200);
    *v9 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v9) = EtwWriteEx(IopPerfIoTrackingLock.NpxState, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v9;
}
