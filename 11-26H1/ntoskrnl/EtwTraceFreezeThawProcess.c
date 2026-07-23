/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x140B13690
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 464);
  UserData.Ptr = (ULONGLONG)&v5;
  v7 = a1 + 504;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = 8LL;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4820) & 2) != 0 )
  {
    v4 = (const EVENT_DESCRIPTOR *)ProcessFreezeEvent;
    if ( !a2 )
      v4 = &ProcessThawEvent;
    EtwWrite((REGHANDLE)stru_140F03830.Affinity, v4, 0LL, 2u, &UserData);
  }
  return EtwTraceKernelEvent((int)&UserData, 1, 0x40000002u, 805 - (a2 != 0), 6297858);
}
