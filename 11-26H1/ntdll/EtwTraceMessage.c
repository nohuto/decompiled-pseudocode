/*
 * XREFs of EtwTraceMessage @ 0x1800BB270
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmMessage @ 0x1800BB44C (EtwpTraceUmMessage.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

ULONG __fastcall EtwTraceMessage(HANDLE TraceHandle, int a2, _DWORD *a3, __int16 a4, __int64 a5)
{
  int v6; // ecx
  __int64 *v7; // rax
  NTSTATUS v8; // eax
  int Fields; // [rsp+38h] [rbp-40h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-3Ch]
  _BYTE v12[18]; // [rsp+3Eh] [rbp-3Ah] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  __int64 *v15; // [rsp+58h] [rbp-20h]

  Fields = 0;
  memset(v12, 0, sizeof(v12));
  if ( (BYTE3(TraceHandle) & 1) != 0 )
    return EtwpTraceUmMessage((_DWORD)TraceHandle, a2, (_DWORD)a3, a4, (__int64)&a5);
  v6 = 0;
  if ( a5 )
  {
    v7 = &a5;
    do
    {
      ++v6;
      v7 += 2;
    }
    while ( *v7 );
  }
  v11 = a4;
  v13 = a2;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)&v12[2] = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_OWORD *)&v12[2] = *(_OWORD *)a3;
  }
  v15 = &a5;
  v14 = 16 * v6 + 8;
  v8 = NtTraceEvent(TraceHandle, 0x200u, 0x28u, &Fields);
  if ( v8 )
    return RtlNtStatusToDosError(v8);
  else
    return 0;
}
