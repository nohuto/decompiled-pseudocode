/*
 * XREFs of RaUnitIoIrp @ 0x140021230
 * Callers:
 *     RaDriverIoIrp @ 0x14001F950 (RaDriverIoIrp.c)
 * Callees:
 *     RaUnitIncrementOutstandingIrpRequests @ 0x14002134C (RaUnitIncrementOutstandingIrpRequests.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 */

__int64 __fastcall RaUnitIoIrp(__int64 a1, IRP *a2)
{
  KIRQL v4; // al
  unsigned int LockArray_high; // edi
  KIRQL v6; // bp
  IO_PRIORITY_HINT IoPriorityHint; // eax
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // r9

  if ( *(_QWORD *)(a1 + 32) )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v4 = KfRaiseIrql(2u);
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v6 = v4;
    IoPriorityHint = IoGetIoPriorityHint(a2);
    a2->IoStatus.Information = 0LL;
    v8 = 0;
    if ( IoPriorityHint <= IoPriorityLow )
      v8 = 0x80000000;
    a2->IoStatus.Status = LockArray_high & 0x7FFFFFFF | v8;
    v9 = RaUnitIncrementOutstandingIrpRequests(a1, a2, LockArray_high);
    if ( v9 >= 0 )
    {
      if ( v9 != 259 )
        RaidUnitSubmitIrpRequest(a1, a2, 0LL, v10);
    }
    else
    {
      a2->IoStatus.Status = v9;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
    }
    KeLowerIrql(v6);
    return 259LL;
  }
  else
  {
    a2->IoStatus.Status = -1073741436;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
}
