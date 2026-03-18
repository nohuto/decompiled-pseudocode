/*
 * XREFs of AcpiPccExecuteCommand @ 0x1400B2690
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccExecuteCommandAsync @ 0x140064B50 (AcpiPccExecuteCommandAsync.c)
 */

__int64 __fastcall AcpiPccExecuteCommand(__int64 a1, char a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  _BYTE Event[32]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 16) == 2;
  v8 = 0LL;
  v6 = 0LL;
  memset(Event, 0, sizeof(Event));
  if ( v2 )
    return 3221225659LL;
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  result = AcpiPccExecuteCommandAsync(a1, a2, (__int64)AcpiPccSyncCompletionCallback, (__int64)&v6);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    return *(unsigned int *)&Event[24];
  }
  return result;
}
