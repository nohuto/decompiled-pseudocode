/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x1801590C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010DD60 (TppETWCallbackCancel.c)
 */

void __fastcall TppIopCancelPendingCallbacks(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v2 )
  {
    TppBarrierAdjust((signed __int64 *)(a1 + 56), -v2, 0);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      TppETWCallbackCancel(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v2);
  }
}
