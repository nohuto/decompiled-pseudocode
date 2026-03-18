/*
 * XREFs of IopInitActivityIdIrp @ 0x140481F80
 * Callers:
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     IopAllocateReserveIrp @ 0x14027006C (IopAllocateReserveIrp.c)
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140531A0C (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140C48150 (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdIrp @ 0x140482190 (IoSetActivityIdIrp.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140482A30 (PnpIsSafeToExamineUserModeTeb.c)
 *     IopIsActivityTracingEventEnabled @ 0x1404EBB28 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
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
      if ( KeGetPcr()->NtTib.$1A4E1036E6CD9573DBF0CCD06E827B69::$8A7F5B5E2BB4B7163F26170312D282BB::Self )
      {
        Buf2 = *(GUID *)&KeGetPcr()->NtTib.$1A4E1036E6CD9573DBF0CCD06E827B69::$8A7F5B5E2BB4B7163F26170312D282BB::Self[105].SubSystemTib;
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
      LODWORD(v9) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v9;
}
