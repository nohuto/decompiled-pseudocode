/*
 * XREFs of EtwpTraceNetwork @ 0x14047D720
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     EtwpNetProvTraceNetwork @ 0x14047D7AC (EtwpNetProvTraceNetwork.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceNetwork(__int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Ptr = a2;
  UserData.Size = a3;
  UserData.Reserved = 0;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData);
  return EtwTraceKernelEvent((int)&UserData, 1, 0x10000u, a1, 5249026);
}
