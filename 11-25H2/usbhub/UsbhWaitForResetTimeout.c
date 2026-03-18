/*
 * XREFs of UsbhWaitForResetTimeout @ 0x14003A028
 * Callers:
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 * Callees:
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 */

void __fastcall UsbhWaitForResetTimeout(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  int v6; // r10d
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  Log(*(_QWORD *)(a2 + 16), 4, 1666667569, 0LL, *(unsigned __int16 *)(a2 + 4));
  v5 = UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 768), 5000, 1667323697, (unsigned int)v4 & v7, v4 & v8);
  Log(*(_QWORD *)(a2 + 16), 4, 1666667570, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v6 == 258 )
    Log(a1, 4, 1953448769, *(unsigned __int16 *)(a2 + 4), a2);
}
