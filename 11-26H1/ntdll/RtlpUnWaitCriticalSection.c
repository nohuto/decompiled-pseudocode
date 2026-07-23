/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x18013DF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180069660 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEventEx @ 0x180162270 (ZwSetEventEx.c)
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
