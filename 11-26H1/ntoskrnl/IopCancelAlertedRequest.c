/*
 * XREFs of IopCancelAlertedRequest @ 0x140B21254
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIoEvent @ 0x1404633D8 (IopWaitForSynchronousIoEvent.c)
 *     IopWaitForSynchronousIo @ 0x1404634B0 (IopWaitForSynchronousIo.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
