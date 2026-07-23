/*
 * XREFs of EtwUnregisterTraceGuids @ 0x18008E350
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(REGHANDLE a1)
{
  LONG v1; // eax
  unsigned __int32 v2; // ebx
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  v1 = EtwNotificationUnregister(a1, &Context);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Context);
  return v2;
}
