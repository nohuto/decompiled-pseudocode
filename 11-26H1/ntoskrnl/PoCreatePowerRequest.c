/*
 * XREFs of PoCreatePowerRequest @ 0x140425BE0
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 */

NTSTATUS __stdcall PoCreatePowerRequest(
        PVOID *PowerRequest,
        PDEVICE_OBJECT DeviceObject,
        PCOUNTED_REASON_CONTEXT Context)
{
  NTSTATUS v4; // ebx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  P = 0LL;
  *PowerRequest = 0LL;
  if ( !DeviceObject )
    return -1073741811;
  v4 = PoCaptureReasonContext(Context, 0LL, (__int64)&P);
  if ( v4 < 0 || (v4 = PopPowerRequestCreateCommon(P, 0LL, &v7), v4 < 0) )
  {
    if ( P )
      PoDestroyReasonContext(P);
  }
  else
  {
    *PowerRequest = v7;
  }
  return v4;
}
