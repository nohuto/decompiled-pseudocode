/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401AFA40
 * Callers:
 *     CleanupPowerRequestList @ 0x140155E20 (CleanupPowerRequestList.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0D04 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400E9630 (-NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x1400E96A4 (EtwTraceCompletePowerRequest.c)
 */

void __fastcall CancelPowerRequest(char *Buffer, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // [rsp+20h] [rbp-18h]

  *((_DWORD *)Buffer + 10) = -1073741823;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    v5 = -1073741536;
    McTemplateK0pq_EtwWriteTransfer((__int64)Buffer, &CanceledPowerRequest, a3, Buffer, v5);
  }
  NotifyPoRequestCompleted((struct tagPOWERREQUEST *)Buffer);
  if ( *((_QWORD *)Buffer + 10) )
  {
    EtwTraceCompletePowerRequest((__int64)Buffer, *((_DWORD *)Buffer + 10), v4);
    GreDeleteFastMutex(Buffer);
  }
  else
  {
    KeSetEvent((PRKEVENT)(Buffer + 16), 1, 0);
  }
}
