/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401D53E0
 * Callers:
 *     CleanupPowerRequestList @ 0x140193020 (CleanupPowerRequestList.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401123CC (-NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceCompletePowerRequest @ 0x140112440 (EtwTraceCompletePowerRequest.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140113150 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall CancelPowerRequest(char *Buffer, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-18h]

  *((_DWORD *)Buffer + 10) = -1073741823;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    v8 = -1073741536;
    McTemplateK0pq_EtwWriteTransfer((__int64)Buffer, &CanceledPowerRequest, a3, Buffer, v8);
  }
  NotifyPoRequestCompleted((struct tagPOWERREQUEST *)Buffer);
  if ( *((_QWORD *)Buffer + 10) )
  {
    EtwTraceCompletePowerRequest((__int64)Buffer, *((_DWORD *)Buffer + 10), v4);
    GreDeleteFastMutex(Buffer, v5, v6, v7);
  }
  else
  {
    KeSetEvent((PRKEVENT)(Buffer + 16), 1, 0);
  }
}
