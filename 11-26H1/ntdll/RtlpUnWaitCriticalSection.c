/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x18013E050
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18007AE40 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEventEx @ 0x180162370 (ZwSetEventEx.c)
 */

signed __int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  HANDLE DeferredCriticalSectionEvent; // rax
  signed __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(HANDLE *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
  {
    _InterlockedOr(v4, 0);
    return RtlpWakeByAddress(a1 + 8, 0, a1);
  }
  else
  {
    result = ZwSetEventEx(DeferredCriticalSectionEvent, 0LL, a1);
    if ( (int)result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
