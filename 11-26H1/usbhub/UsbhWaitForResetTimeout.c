/*
 * XREFs of UsbhWaitForResetTimeout @ 0x140039A50
 * Callers:
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x140009B80 (Log.c)
 */

void __fastcall UsbhWaitForResetTimeout(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  int v6; // r10d

  Log(*(_QWORD *)(a2 + 16), 4, 1666667569, 0LL, *(unsigned __int16 *)(a2 + 4));
  v5 = UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 768), 5000, 1667323697, v4, v4);
  Log(*(_QWORD *)(a2 + 16), 4, 1666667570, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v6 == 258 )
    Log(a1, 4, 1953448769, *(unsigned __int16 *)(a2 + 4), a2);
}
