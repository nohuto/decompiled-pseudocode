/*
 * XREFs of IopCancelAlertedRequest @ 0x140B1F1D4
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIoEvent @ 0x140469C58 (IopWaitForSynchronousIoEvent.c)
 *     IopWaitForSynchronousIo @ 0x140469D30 (IopWaitForSynchronousIo.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopSynchronousApiServiceTail @ 0x1409B18E4 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

NTSTATUS __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v5; // si
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  if ( Object[1] )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v5 = IoCancelIrp(Irp);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v5 )
    {
      Interval.QuadPart = -100000LL;
      while ( 1 )
      {
        result = Object[1];
        if ( result )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
      }
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
